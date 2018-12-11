/*
 * Andrue Peters
 * 11/13/18
 *
 * Read project5.h and README.MD
 */

#include "project5.h"

/* Graphic library context */
Graphics_Context g_sContext;






/*
 * main is only responsible for configuring all BIOS settings
 */
int main(void)
{

    /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    Board_initADC();

    /*
     * Initialize LCD
     */
    LCD_init();


    /*
     * Construct Clock
     */
    Clock_Params clk_params;
    Clock_Params_init(&clk_params);

    // one shot for splash screen
    clk_params.period = 0;
    clk_params.startFlag = TRUE;
    Clock_construct(&clock_splash_scrn_struct, (Clock_FuncPtr)CLK_TSK_LCD_draw_splash_screen,
                    1, &clk_params);


    // periodic to check accelerometer and update values
    // waits 5 seconds before it starts
    clk_params.period = Clock_tickPeriod/50;
    clk_params.startFlag = FALSE;
    CLK_HDL_accel = Clock_create(CLK_TSK_read_accelerometer, Clock_tickPeriod * 5, &clk_params, NULL);

    /*
     * Initialize buzzer
     */
    init_buzzer(10000, TIMER_A0_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_4);


    /*
     * Initialize Semaphores
     */
    Semaphore_Params sem_params;
    Semaphore_Params_init(&sem_params);
    sem_params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;

    // update LCD semaphore
    sem_params.instance->name = "update_LCD";
    Semaphore_construct(&SEMSTRUCT_update_LCD, 0, &sem_params);
    SEMHDL_update_LCD = Semaphore_handle(&SEMSTRUCT_update_LCD);

    // update accelerometer semaphore
    sem_params.instance->name = "update_accel";
    Semaphore_construct(&SEMSTRUCT_update_accel, 0, &sem_params);
    SEMHDL_update_accel = Semaphore_handle(&SEMSTRUCT_update_accel);

    // access to temperature
    sem_params.instance->name = "temp_access";
    Semaphore_construct(&SEMSTRUCT_temperature, 1, &sem_params);
    SEMHDL_temperature = Semaphore_handle(&SEMSTRUCT_temperature);

    // update temp semaphore
    sem_params.instance->name = "update_temp";
    Semaphore_construct(&SEMSTRUCT_update_temp, 1, &sem_params);
    SEMHDL_update_temp = Semaphore_handle(&SEMSTRUCT_update_temp);

    // semaphore to control accel_max
    sem_params.instance->name = "accel_max";
    Semaphore_construct(&SEMSTRUCT_accel_max, 1, &sem_params);
    SEMHDL_accel_max = Semaphore_handle(&SEMSTRUCT_accel_max);

    // semaphore to control accel_curr
    sem_params.instance->name = "accel_curr";
    Semaphore_construct(&SEMSTRUCT_accel_curr, 1, &sem_params);
    SEMHDL_accel_curr = Semaphore_handle(&SEMSTRUCT_accel_curr);

    // semaphore to control display flag
    sem_params.instance->name = "disp_flags";
    Semaphore_construct(&SEMSTRUCT_disp_flags, 1, &sem_params);
    SEMHDL_disp_flags = Semaphore_handle(&SEMSTRUCT_disp_flags);




    /*
     * Initialize Tasks
     */
    Task_Params task_params;
    Task_Params_init(&task_params);


    // init adc task
    task_params.stackSize = SENSOR_TSK_SIZE;
    task_params.priority = 1;
    task_params.stack = &TSK_STK_accel;
    TSK_HDL_adc = Task_create(TSK_process_accelerometer, &task_params, NULL);

    // init LCD task
    task_params.stackSize = SENSOR_TSK_SIZE;
    task_params.priority = 1;
    task_params.stack = &TSK_STK_lcd;
    TSK_HDL_lcd = Task_create(TSK_update_LCD, &task_params, NULL);

    // init temperature task
    task_params.stackSize = SENSOR_TSK_SIZE;
    task_params.priority = 1;
    task_params.stack = &TSK_STK_process_temp;
    TSK_HDL_process_temp = Task_create(TSK_process_temp_sensor, &task_params, NULL);



    /* Initialize I2C communication */
    Init_I2C_GPIO();
    I2C_init();

    /* Initialize TMP006 temperature sensor */
    TMP006_init();

    /* Set interrupt callback for booster pack button S2 */
    GPIO_setCallback(Booster_BUTTON2, BTN2_BP_Callback);

    System_printf("Starting the example\nSystem provider is set to SysMin. "
                  "Halt the target to view any SysMin contents in ROV.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();


    /* Start BIOS */
    BIOS_start();

    return (0);
}

/*************************************************************/
/*              Hardware Config                              */
/*************************************************************/

/*
 * Initialize LCD and clear the screen
 */
Void LCD_init()
{
    MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
    MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);

    /* Initializes display */
    Crystalfontz128x128_Init();

    /* Set default screen orientation */
    Crystalfontz128x128_SetOrientation(0);

    /* Initializes graphics context */
    Graphics_initContext(&g_sContext, &g_sCrystalfontz128x128, &g_sCrystalfontz128x128_funcs);
    LCD_set_style_default();
    Graphics_clearDisplay(&g_sContext);
}

/*************************************************************/
/*              Clock Tasks                                  */
/*************************************************************/

/*
 * Draws image on screen. Configured as a one-shot clk task
 * Mandatory wait of 5 seconds, then start Accelerometer
 */
Void CLK_TSK_LCD_draw_splash_screen()
{
    Graphics_drawImage(&g_sContext, &lotr_tree_splash_screen_img, 0, 0);
    Clock_start(CLK_HDL_accel);
}

/*
 * Posts a semaphore, allowing the ADC tasks to process the accelerometer
 * Configured to be periodic
 */
Void CLK_TSK_read_accelerometer()
{
    Semaphore_post(SEMHDL_update_accel);
}


/*************************************************************/
/*              ADC Funcs                                    */
/*************************************************************/

/*
 * Reads, updates, and process information relating to accelerometer
 * Begins after 5 seconds
 */
Void TSK_process_accelerometer()
{
    // enable button interrupts at this point since it triggers only after 5 seconds
    GPIO_enableInt(Booster_BUTTON2);

    // prev does not need to be global, so its scope is limited to this task
    // stores previous acceleration value
    static struct accel_data accel_prev;


    // counts to this to disable buzzer
    static const uint32_t OVERFLOW_CTR_LIMIT = 5;

    // if true, then device is thought to be falling
    static uint8_t device_is_falling = 0;

    // counts up to OVERFLOW_CTR_LIMIT if the device is falling
    static uint32_t buzzer_overflow_ctr = 0;

    // initialize these structs with first values
    ADC_read_accelerometer(&accel_current);
    accel_prev = accel_current;
    ADC_update_max(&accel_current, &accel_max);


    while(1) {

        // wait for resource to be available
        Semaphore_pend(SEMHDL_update_accel, BIOS_WAIT_FOREVER);
        // update accel prev
        accel_prev = accel_current;

        // update accel_current
        ADC_read_accelerometer(&accel_current);

        // device_is_falling is set this way so that it continues for the set period even
        // if it was just a slight jerk
        // prolonged high acceleration will keep resetting buzzer_overflow_ctr, thereby increasing its duration
        // this is intentional
        if (ADC_device_is_falling(&accel_current, &accel_prev)) {
            device_is_falling = 1;
            ADC_update_max(&accel_current, &accel_max);
            buzzer_overflow_ctr = 0;
            set_intensity_buzzer(200);
            start_buzzer();
        }

        // only do this stuff if the device is thought to be falling
        // counts or turns off buzzer
        if (device_is_falling) {
            // if we have reached our counting limit
            if (buzzer_overflow_ctr == OVERFLOW_CTR_LIMIT) {
                device_is_falling = 0;
                buzzer_overflow_ctr = 0;
                stop_buzzer();
            } else {
             ++buzzer_overflow_ctr;
            }
        }

        // set flag so that LCD will update screen
        Semaphore_pend(SEMHDL_disp_flags, BIOS_WAIT_FOREVER);
        disp_flags.disp_accel_curr = 1;
        Semaphore_post(SEMHDL_disp_flags);

        // allow LCD to update
        Semaphore_post(SEMHDL_update_LCD);
    }
}

/*
 * Read values from ADC and store then in accel
 * Only use for accel_curr
 */
void ADC_read_accelerometer(struct accel_data* accel)
{
    // wait for resource
    Semaphore_pend(SEMHDL_accel_curr, BIOS_WAIT_FOREVER);

    accel->x = ACCEL_read_x_axis();
    accel->y = ACCEL_read_y_axis();
    accel->z = ACCEL_read_z_axis();

    // release resource
    Semaphore_post(SEMHDL_accel_curr);
}

/*
 * Compare a_curr to a_max
 * If a_curr is greater than a_max, then update a_max
 */
Void ADC_update_max(struct accel_data* a_curr, struct accel_data* a_max)
{
    // wait until other resource isn't using it
    Semaphore_pend(SEMHDL_accel_max, BIOS_WAIT_FOREVER);

    // update accel max values
    if (a_curr->z > a_max->z)
        a_max->z = a_curr->z;

    if (a_curr->y > a_max->y)
        a_max->y = a_curr->y;

    if (a_curr->x > a_max->x)
        a_max->x = a_curr->x;

    // release resource
    Semaphore_post(SEMHDL_accel_max);
}



/*
 * Returns true if device is falling.
 * Device is considered falling if the current accelerometer z value and the previous z value are both
 *      below the threshold
 * The acceleration for a freefall should actually be -1, but through testing I chose 0.3.
 *     This means I probably need to recalibrate the values for my Z axis
 *
 * Issues:  This design assumes the device is face up, and it mostly works for this scenario.
 *          However, if the device if flipped upside down, the z axis will read -0.5, therefore
 *          causing this to falsely be true;
 *
 * Fix:    Use a gyroscope in addtion to an accelerometer. The combination will allow you to know
 *          what direction the device is facing and determine if it's face down, or actually falling
 *
 */
uint8_t ADC_device_is_falling(struct accel_data* a_curr, struct accel_data* a_prev)
{
    // Check for fall detection
    if ((a_curr->z < ACCEL_G_LIMIT) && (a_prev->z < ACCEL_G_LIMIT)) {
        return 1;
    }
    return 0;
}
/*
 * Blocking function to read z axis of accelerometer
 */
float ACCEL_read_z_axis()
{
    // ADC handle and value initialization
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    float adc_val_g;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC11, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    // store accelerometer value in adc_val; status is in res
    res = ADC_convert(adc, &adc_val);

    // if conversion failed
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    // convert to g forces
    adc_val_g = ACCEL_convert_to_g(adc, adc_val);

    ADC_close(adc);
    return adc_val_g;
}

/*
 * Blocking function to read y axis of accelerometer
 */
float ACCEL_read_y_axis()
{
    // ADC handle and value initialization
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    float adc_val_g;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC13, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    // store accelerometer value in adc_val; status is in res
    res = ADC_convert(adc, &adc_val);

    // if conversion failed
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    // convert to g forces
    adc_val_g = ACCEL_convert_to_g(adc, adc_val);

    ADC_close(adc);
    return adc_val_g;
}

/*
 * Blocking function to read x axis of accelerometer
 */
float ACCEL_read_x_axis()
{
    // ADC handle and value initialization
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    float adc_val_g;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC14, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    // store accelerometer value in adc_val; status is in res
    res = ADC_convert(adc, &adc_val);

    // if conversion failed
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    // convert to g forces
    adc_val_g = ACCEL_convert_to_g(adc, adc_val);

    ADC_close(adc);
    return adc_val_g;
}

/*
 * Converts adc_val to g's
 * Sensitivity in datasheet was 660 mV / g
 */
float ACCEL_convert_to_g(ADC_Handle handle, uint16_t adc_val)
{
    float adc_val_g;
    //adc_val_g = ((( (float)(adc_val * ACCEL_REF_VOL) / ADC_PRECISION) - ACCEL_0G_OFFSET) / ACCEL_SENSITIVITY);

    // convert ADC value back to volts
    adc_val_g = (float)(adc_val * ACCEL_REF_VOL) / ADC_PRECISION;

    // subtract the 0G offset found in data sheet
    adc_val_g = adc_val_g - ACCEL_0G_OFFSET;

    // divide by the sensitivity of accelerometer (in volts)
    adc_val_g = adc_val_g / ACCEL_SENSITIVITY;

    return adc_val_g;
}

/*************************************************************/
/*              Button Callbacks                             */
/*************************************************************/

/*
 * Called when you press button S2 on the booster pack
 */
Void BTN2_BP_Callback()
{
    Semaphore_post(SEMHDL_update_temp);
}

/*************************************************************/
/*              Temp Sensor                                  */
/*************************************************************/

/*
 * This task is responsible for updating the temperature sensor.
 * It also sets the flag to update the max value on the display since that too
 * should be done on a button request per professor's instructions
 *
 * Runs once upon configuration for initial values.
 * Every subsequent time it runs is because of BTN2_BP_Callback
 */
Void TSK_process_temp_sensor()
{
    while (1) {
        // wait for float temperature to become available
        Semaphore_pend(SEMHDL_update_temp, BIOS_WAIT_FOREVER);
        Semaphore_pend(SEMHDL_temperature, BIOS_WAIT_FOREVER);

        // disable hwi so we're not interrupted
        UInt key = Hwi_disable();
        temperature = TMP006_getTemp();
        // restore hwi
        Hwi_restore(key);
        // free resource
        Semaphore_post(SEMHDL_temperature);

        Semaphore_pend(SEMHDL_disp_flags, BIOS_WAIT_FOREVER);
        disp_flags.disp_accel_max = 1;
        disp_flags.disp_temp = 1;
        Semaphore_post(SEMHDL_disp_flags);
    }
}

/*************************************************************/
/*              Update LCD Funcs                             */
/*************************************************************/

/*
 * This task only updates the LCD display
 * Waits for Semaphore to be posted from either the button press or periodic clock
 *
 * Flags control what is updated on the screen.
 *
 * Only the values that change are constantly rewritten to improve performance.
 * In other words, the labels, "Temperature", "accelerometer [g]", "Current", "Max", etc
 * are only drawn once. That's in LCD_draw_labels()
 */
Void TSK_update_LCD()
{
    /*
     * Minimum time for SEMHDL_update_LCD to post the first time is 5 seconds
     * After these 5 seconds, draw the labels
     */
    Semaphore_pend(SEMHDL_update_LCD, BIOS_WAIT_FOREVER);
    LCD_draw_labels();

    while (1) {
        // wait for SEMHDL_update_LCD to be posted from button press
        Semaphore_pend(SEMHDL_update_LCD, BIOS_WAIT_FOREVER);

        // wait for disp_flags to be available
        Semaphore_pend(SEMHDL_disp_flags, BIOS_WAIT_FOREVER);

        if (disp_flags.disp_accel_max) {
            LCD_draw_accel_max();
            disp_flags.disp_accel_max = 0;
        }

        if (disp_flags.disp_accel_curr) {
            LCD_draw_curr_accel();
            disp_flags.disp_accel_curr = 0;
        }

        if (disp_flags.disp_temp) {
            LCD_draw_temperature();
            disp_flags.disp_temp = 0;
        }
        Semaphore_post(SEMHDL_disp_flags);
    }
}


/*
 * Draws the accel_max values to the screen
 */
void LCD_draw_accel_max()
{
    static char disp_str[10];
    Semaphore_pend(SEMHDL_accel_max, BIOS_WAIT_FOREVER);

    UInt key = Hwi_disable();
    LCD_set_style_acceleration();

    // print X: XX.XX
    sprintf(disp_str, "%.2f", accel_max.x);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, MAX_X_OFFSET, X_y_OFFSET, OPAQUE_TEXT);

    // print Y: YY.YY
    sprintf(disp_str, "%.2f", accel_max.y);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, MAX_X_OFFSET, Y_y_OFFSET, OPAQUE_TEXT);

    // print Z: ZZ.ZZ

    sprintf(disp_str, "%.2f", accel_max.z);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, MAX_X_OFFSET, Z_y_OFFSET, OPAQUE_TEXT);

    LCD_set_style_default();
    Hwi_restore(key);
    Semaphore_post(SEMHDL_accel_max);

}

/*
 * Draws the accel_curr values to the screen
 */
void LCD_draw_curr_accel()
{
    static char disp_str[10];
    Semaphore_pend(SEMHDL_accel_curr, BIOS_WAIT_FOREVER);

    UInt key = Hwi_disable();
    LCD_set_style_acceleration();
    // print X: XX.XX
    sprintf(disp_str, "%.2f", accel_current.x);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, CURR_X_OFFSET, X_y_OFFSET, OPAQUE_TEXT);

    // print Y: YY.YY
    sprintf(disp_str, "%.2f", accel_current.y);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, CURR_X_OFFSET, Y_y_OFFSET, OPAQUE_TEXT);

    // print Z: ZZ.ZZ

    sprintf(disp_str, "%.2f", accel_current.z);
    Graphics_drawString(&g_sContext, (int8_t *)disp_str,   5, CURR_X_OFFSET, Z_y_OFFSET, OPAQUE_TEXT);

    LCD_set_style_default();
    Hwi_restore(key);
    Semaphore_post(SEMHDL_accel_curr);

}

/*
 * Draws temperature sensor value to the screen
 */
void LCD_draw_temperature()
{
    // declared static because there's no use in waiting for reallocation if this runs all the time
    static char disp_str[10];

    Semaphore_pend(SEMHDL_temperature, BIOS_WAIT_FOREVER);

    UInt key = Hwi_disable();
    // write temp to disp_str
    sprintf(disp_str, "%.2f", temperature);

    // set temperatue style for display
    LCD_set_style_temperature();

    Graphics_drawStringCentered(&g_sContext, (int8_t *)disp_str,   5, 64, 40, OPAQUE_TEXT);

    // go back to default style
    LCD_set_style_default();

    Hwi_restore(key);
    Semaphore_post(SEMHDL_temperature);
}

/*
 * Draws the labels on the screen.
 * Roughly will look like what's below
 * **********************************
 * *                                *
 * *       Temperature [*F]         *
 * *                                *
 * *           96.8                 *
 * *                                *
 * *                                *
 * *       Accelerometer [g]        *
 * *                                *
 * *     Current         Max        *
 * *  X:                            *
 * *  Y:                            *
 * *  Z:                            *
 * *                                *
 * **********************************
 */
void LCD_draw_labels()
{
    UInt key = Hwi_disable();
    Graphics_clearDisplay(&g_sContext);
    Graphics_drawStringCentered(&g_sContext, (int8_t *)"Temperature   [�F]",    19,     64, 20, OPAQUE_TEXT);
    Graphics_drawStringCentered(&g_sContext, (int8_t *)"Accelerometer [g]",     18,     64, 60, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)"Current",                       7,      CURR_X_OFFSET, 70, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)"Max",                           3,      MAX_X_OFFSET, 70, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)"X:",                            2,      0, X_y_OFFSET, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)"Y:",                            2,      0, Y_y_OFFSET, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)"Z:",                            2,      0, Z_y_OFFSET, OPAQUE_TEXT);
    Hwi_restore(key);
}

/*
 * Sets default style. This is the style used by the labels.
 */
void LCD_set_style_default()
{
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
}

/*
 * Sets style for when drawing temperature.
 * Big red numbers.
 */
void LCD_set_style_temperature()
{
    GrContextFontSet(&g_sContext, &g_sFontCmss18b);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
}

/*
 * Sets the style for drawing acceleration
 * Same font as normal, but is red to make it easier to distinguis.
 */
void LCD_set_style_acceleration()
{
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
}
