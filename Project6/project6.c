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
    tp.stackSize = TASKSTACKSIZE;
    tp.stack = &tsk_accel_test_stack;
    tp.priority = 1;
    //TSK_HDL_test = Task_create(tsk_accel_test, &tp, NULL);
    //TSK_HDL_test = Task_create(tsk_accel_test, &tp, NULL);
    tsk_accel_test();

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
/*              Clock Tasks                                  */
/*************************************************************/
Void tsk_accel_test()
{
    struct accelerometer ac;
    struct JS js;
    while(1) {
       // ac = ACCEL_get();
        js = JS_get();
        System_printf("X: %d\t\tY: %d\n", js.x, js.y);
        System_flush();
        //Task_sleep(10);

    }
}

