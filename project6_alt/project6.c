/*
 * Andrue Peters
 * 11/13/18
 *
 * Read project5.h and README.MD
 */

#include <project6.h>

/* Graphic library context */
Graphics_Context g_sContext;








/*
 * main is only responsible for configuring all BIOS settings
 */
int main(void)
{
    Board_initGeneral();
    Board_initGPIO();
    Board_initADC();

    LCD_init();
    Init_I2C_GPIO();
    I2C_init();
    TMP006_init();

    Task_Params tp;
    Task_Params_init(&tp);



    /*
     * Task properties for the main game
     */
    tp.stackSize = GAME_TSK_SIZE;
    tp.stack = &TSK_STK_pet_game;
    tp.priority = 1;
    TSK_HDL_pet_game = Task_create(TSK_play_game, &tp, NULL);

    /*
     * Task properties for display task
     */
    tp.stackSize = DISP_TSK_SIZE;
    tp.stack = &TSK_STK_draw_screen;
    tp.priority = 1;
    TSK_HDL_draw_screen = Task_create(TSK_draw_screen, &tp, NULL);


    Clock_Params clk_params;
    Clock_Params_init(&clk_params);

    /*
     * Periodic game clock
     */
    clk_params.period = Clock_tickPeriod;
    clk_params.startFlag = TRUE;
    CLK_HDL_game_timer = Clock_create(CLK_TSK_game_timer, Clock_tickPeriod * 5, &clk_params, NULL);

    /*
     * Periodic clock to update the display
     */
    clk_params.period = 1000;
    clk_params.startFlag = FALSE;
    CLK_HDL_disp_timer = Clock_create(CLK_TSK_disp_timer, Clock_tickPeriod * 5, &clk_params, NULL);


    /*
     * Set up semaphores
     */
    Semaphore_Params sem_params;
    Semaphore_Params_init(&sem_params);
    sem_params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;

    // update LCD semaphore
    sem_params.instance->name = "update_LCD";
    Semaphore_construct(&SEMSTRUCT_update_LCD, 0, &sem_params);
    SEMHDL_update_LCD = Semaphore_handle(&SEMSTRUCT_update_LCD);

    Mailbox_Params mbx_params;
    Mailbox_Params_init(&mbx_params);

    /*
     * This mailbox flows from sensor task to game property task
     */
    mbx_params.buf = (Ptr)mbx_sensor_buff;
    mbx_params.bufSize = sizeof(mbx_sensor_buff);
    Mailbox_construct(&MBX_STR_sensors, sizeof(struct MsgSensorObj), NUM_MSGS, &mbx_params, NULL);
    MBX_HDL_sensors = Mailbox_handle(&MBX_STR_sensors);

    /*
     * This data flows from game task to display task
     */
    mbx_params.buf = (Ptr)mbx_disp_buff;
    mbx_params.bufSize = sizeof(mbx_disp_buff);
    Mailbox_construct(&MBX_STR_pet, sizeof(struct MsgDispObj), NUM_MSGS, &mbx_params, NULL);
    MBX_HDL_pet = Mailbox_handle(&MBX_STR_pet);




    BIOS_start();

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
    //LCD_set_style_default();
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
    Graphics_clearDisplay(&g_sContext);
}



/*************************************************************/
/*              Main Game Logic                              */
/*************************************************************/
Void TSK_play_game()
{
    /* initialize game properties */
    static struct MsgSensorObj msg_sensors;
    static struct MsgDispObj   msg_disp;

    GPIO_enableInt(Booster_BUTTON1);
    GPIO_enableInt(Booster_BUTTON2);
    GPIO_setCallback(Booster_BUTTON2, BTN2_BP_Callback);
    GPIO_setCallback(Booster_BUTTON1, BTN1_BP_Callback);

    pet_bulb.health_max = 99;
    pet_bulb.health = pet_bulb.health_max;
    pet_bulb.pet_img = &good_bulb;
    pet_bulb.pet_inverse_img = &bulb_inverse;

    /*
     * Task properties for to read sensors
     */
    Task_Params tp;
    Task_Params_init(&tp);
    tp.stackSize = SENSOR_TSK_SIZE;
    tp.stack = &TSK_STK_read_sensors;
    tp.priority = 1;
    TSK_HDL_read_sensors = Task_create(TSK_read_sensors, &tp, NULL);

    /*
     * Start the display timer
     */
    Clock_start(CLK_HDL_disp_timer);





    while (1) {

        // if the mailbox is ready then process input
        if (Mailbox_pend(MBX_HDL_sensors, &msg_sensors, BIOS_NO_WAIT)) {
            System_printf("Got message");
            System_flush();
        }

        if (pflags.feed_pet) {
            pet_bulb.health += 20;
            if(pet_bulb.health > pet_bulb.health_max)
                pet_bulb.health = pet_bulb.health_max;
            pflags.feed_pet = 0;
        }

        if (pflags.subtract_health) {
            if (pet_bulb.health > 0)
                --pet_bulb.health;
            pflags.subtract_health = 0;
        }

        if (pflags.water_pet) {
            pet_bulb.health = 0;
            pflags.water_pet = 0;
        }

        if (pflags.too_hot) {
            pflags.too_hot = 0;

        }
        msg_disp.health = pet_bulb.health;
        Mailbox_post(MBX_HDL_pet, &msg_disp, BIOS_NO_WAIT);
        Task_sleep(500);
    }
}

/*
 * Periodic timer responsible for losing health over time and increasing game counter
 */
Void CLK_TSK_game_timer()
{
    pflags.subtract_health = 1;
    ++game_counter;
}

/*
 * Feeds pet when you press this button.
 */
Void BTN1_BP_Callback()
{
    pflags.feed_pet = 1;
}

Void BTN2_BP_Callback()
{
    pflags.water_pet = 1;
}

Void CLK_TSK_disp_timer()
{
    Semaphore_post(SEMHDL_update_LCD);
}

/*************************************************************/
/*              Sensor Task                                  */
/*************************************************************/
Void TSK_read_sensors()
{
    static struct MsgSensorObj msg;

    while(1) {
        // update sensor values
        msg.ac = ACCEL_get();;
        msg.js = JS_get();
        msg.temp = TEMP_get();

        // will block if buffer is full
        Mailbox_post(MBX_HDL_sensors, &msg, BIOS_WAIT_FOREVER);
        Task_sleep(500);
    }
}

float TEMP_get()
{
    float t;
    UInt key = Hwi_disable();
    t = TMP006_getTemp();
    Hwi_restore(key);
    return t;
}

/*************************************************************/
/*              Display Task                                 */
/*************************************************************/
Void TSK_draw_screen()
{
    struct MsgDispObj msg;
    char health[5];
    Graphics_Rectangle blank = {0, 0, 99, 10};
    Graphics_Rectangle health = blank;
    Graphics_drawImage(&g_sContext, &lotr_tree_splash_screen_img, 0, 0);
    Task_sleep(5000);
    Graphics_clearDisplay(&g_sContext);

    while (1) {
        //Semaphore_pend(SEMHDL_update_LCD, BIOS_WAIT_FOREVER);
        Graphics_drawImage(&g_sContext, pet_bulb.pet_img, 32, 64);
        if (Mailbox_pend(MBX_HDL_pet, &msg, BIOS_NO_WAIT)) {
            sprintf(health, "%d", msg.health);
            Graphics_drawString(&g_sContext, (int8_t *)health,   3, 25, 25, OPAQUE_TEXT);
        }

        /*
         * Draw HUD
         */
        Graphics_fillRectangle()
        draw_HUD();
        draw_bubble();
        draw_pet();
        Task_sleep(500);
    }
}

/*
 * Height is 0 to 10 pixels
 * Width is full screen [ 0 , 127 ]
 */
void draw_HUD()
{

}

void draw_bubble()
{

}

void draw_pet()
{

}
