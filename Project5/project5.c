/*
 * Andrue Peters
 * 11/13/18
 *
 */
/*
 *  ======== empty.c ========
 */

#include "project5.h"

/* Graphic library context */
Graphics_Context g_sContext;






/*
 *  ======== main ========
 */
int main(void)
{

    /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    Board_initADC();
   // Board_initPWM();
    // Board_initI2C();

    LCD_init();

    Error_Block eb;
    Error_init(&eb);

    /* Constructs a one-shot clock instance to show splash screen */
    Clock_Params clk_params;
    Clock_Params_init(&clk_params);
    clk_params.period = 0;
    clk_params.startFlag = TRUE;
    Clock_construct(&clock_splash_scrn_struct, (Clock_FuncPtr)CLK_TSK_LCD_draw_splash_screen,
                    1, &clk_params);


    /* Periodic clock to check accelerometer values */
    clk_params.period = Clock_tickPeriod/10;
    clk_params.startFlag = FALSE;
    //Clock_construct(&clock_accel_struct, (Clock_FuncPtr)CLK_TSK_read_accelerometer, Clock_tickPeriod*5, &clk_params);
    CLK_HDL_accel = Clock_create(CLK_TSK_read_accelerometer, clk_params.period, &clk_params, &eb);

    /* Create PWM */

    init_buzzer(10000, TIMER_A0_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_4);


    /* Configure Semaphores */
    Semaphore_Params sem_params;
    sem_params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;
    Semaphore_Params_init(&sem_params);

    Semaphore_construct(&SEMSTRUCT_update_LCD, 1, &sem_params);
    SEMHDL_update_LCD = Semaphore_handle(&SEMSTRUCT_update_LCD);

    Semaphore_construct(&SEMSTRUCT_update_accel, 1, &sem_params);
    SEMHDL_update_accel = Semaphore_handle(&SEMSTRUCT_update_accel);

    Semaphore_construct(&SEMSTRUCT_update_temp, 1, &sem_params);
    SEMHDL_update_temp = Semaphore_handle(&SEMSTRUCT_update_temp);


    /*Task_Struct adc_task_struct, update_lcd_task_struct, update_temp_task_struct;
    Char adc_task_stack[TASKSTACKSIZE], update_lcd_task_stack[TASKSTACKSIZE], update_temp_stack[TASKSTACKSIZE];
*/
    /* Initialize Tasks */
    Task_Params task_params;
    Task_Params_init(&task_params);
    task_params.stackSize = TASKSTACKSIZE;
    task_params.priority = 1;

    // init adc task
    task_params.stack = &TSK_STK_accel;
    TSK_HDL_adc = Task_create(TSK_process_accelerometer, &task_params, &eb);
   // Task_construct(&adc_task_struct, (Task_FuncPtr)TSK_read_accelerometer, &task_params, NULL);

    // init




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
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_clearDisplay(&g_sContext);



    /* Turn on user LED */
    GPIO_write(Board_LED0, Board_LED_OFF);
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

    UInt32 ticks = Clock_getTicks();
    while((Clock_getTicks() - ticks) < 500)
    {

    }
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
 * Waits on SEMHDL_update_accel
 * Also disables Hwi's, Swi's, and tasks until critical section is completed
 */
Void TSK_process_accelerometer()
{
    // data structures to hold accelerometer data
    static struct accel_data accel_current;
    static struct accel_data accel_prev;
    static struct accel_data accel_max;

    static const uint32_t OVERFLOW_CTR_LIMIT = 5;
    static uint8_t device_is_falling = 0;
    static uint32_t buzzer_overflow_ctr = 0;

    // initialize these structs with first values
    ADC_read_accelerometer(&accel_current);
    accel_prev = accel_current;
    accel_max = accel_current;


    while(1) {
        // wait for resource to be available
        Semaphore_pend(SEMHDL_update_accel, BIOS_WAIT_FOREVER);
       // UInt key = Hwi_disable();
        // update accel prev
        accel_prev = accel_current;

        // update accel_current
        ADC_read_accelerometer(&accel_current);

        // update accel_max
        ADC_update_max(&accel_current, &accel_max);

        // device_is_falling is set this way so that it continues for the set period even
        // if it was just a slight jerk
        // prolonged high acceleration will keep resetting buzzer_overflow_ctr, thereby increasing its duration
        // this is intentional
        if (ADC_device_is_falling(&accel_current, &accel_prev)) {
            device_is_falling = 1;
            buzzer_overflow_ctr = 0;
            set_intensity_buzzer(200);
            start_buzzer();
        }

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


        System_printf("X: %d\t", accel_current.x);
        System_printf("Y: %d\t", accel_current.y);
        System_printf("Z: %d\n", accel_current.z);
        System_flush();
    //    Hwi_restore(key);
    }
}

/*
 * Read values from ADC and store then in accel
 */
void ADC_read_accelerometer(struct accel_data* accel)
{
    accel->x = ADC_read_x_axis();
    accel->y = ADC_read_y_axis();
    accel->z = ADC_read_z_axis();
}

/*
 * Compare a_curr to a_max
 * If a_curr is greater than a_max, then update a_max
 */
Void ADC_update_max(struct accel_data* a_curr, struct accel_data* a_max)
{
    // update accel max values
    if (a_curr->z > a_max->z)
        a_max->z = a_curr->z;

    if (a_curr->y > a_max->y)
        a_max->y = a_curr->y;

    if (a_curr->x > a_max->x)
        a_max->x = a_curr->x;
}

uint8_t ADC_device_is_falling(struct accel_data* a_curr, struct accel_data* a_prev)
{
    // Check for fall detection
    if (a_curr->z > 10000) {
        return 1;
    }
    return 0;
}
/*
 * Blocking function to read z axis of accelerometer
 */
uint16_t ADC_read_z_axis()
{
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC11, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    res = ADC_convert(adc, &adc_val);
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    ADC_close(adc);
    return adc_val;
}

/*
 * Blocking function to read y axis of accelerometer
 */
uint16_t ADC_read_y_axis()
{
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC13, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel y\n");
    }

    res = ADC_convert(adc, &adc_val);
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    ADC_close(adc);
    return adc_val;
}

/*
 * Blocking function to read x axis of accelerometer
 */
uint16_t ADC_read_x_axis()
{
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC14, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel x\n");
    }

    res = ADC_convert(adc, &adc_val);
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    ADC_close(adc);
    return adc_val;
}
/*************************************************************/
/*              Button Callbacks                             */
/*************************************************************/

