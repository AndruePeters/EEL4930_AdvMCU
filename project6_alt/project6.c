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

    Task_Params tp;
    Task_Params_init(&tp);

    /*
     * Task properties for to read sensors
     */
    tp.stackSize = SENSOR_TSK_SIZE;
    tp.stack = &TSK_STK_read_sensors;
    tp.priority = 1;
    TSK_HDL_read_sensors = Task_create(TSK_read_sensors, &tp, NULL);

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


    Mailbox_Params mbx_params;
    Mailbox_Params_init(&mbx_params);
    mbx_params.buf = (Ptr)mbx_sensor_buff;
    mbx_params.bufSize = sizeof(mbx_sensor_buff);
    Mailbox_construct(&MBX_STR_sensors, sizeof(struct MsgSensorObj), NUM_MSGS, &mbx_params, NULL);

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
    Graphics_clearDisplay(&g_sContext);
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
/*              Main Game Logic                              */
/*************************************************************/
Void TSK_play_game()
{
    static struct MsgSensorObj msg_sensors;

    while (1) {

        // if the mailbox is ready then process input
        if (Mailbox_pend(MBX_HDL_sensors, &msg_sensors, BIOS_NO_WAIT)) {

        }
    }
}



/*************************************************************/
/*              Display Task                                 */
/*************************************************************/
Void TSK_draw_screen()
{

}
