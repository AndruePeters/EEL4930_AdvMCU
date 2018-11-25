/*
 * Andrue Peters
 * 11/13/18
 *
 * This is an empty TI RTOS project with the settings for the graphics library.
 * Got the template from the empty project for the TIRTOS.
 * Added required files and folders for the graphics library.
 * Updated the incorrect include paths for the
 */
/*
 *  ======== empty.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Semaphore.h>

/* TI-RTOS Header files */
/*
 * You can either all a specific driver using #include <ti/drivers/GPIO.h>
 * Or the entire driverlib using #include <driverlib.h>
 *
 * I am not sure why, but #include <ti/drivers/driverlib.h> does not work. I checked the include paths and it should work.
 *
 * So, just stick to what I showed and you'll be good.
 */

#include <driverlib.h>
#include <ti/drivers/GPIO.h>
//#include <ti/drivers/DRIVERLIB.h>
// #include <ti/drivers/I2C.h>
// #include <ti/drivers/SDSPI.h>
// #include <ti/drivers/SPI.h>
// #include <ti/drivers/UART.h>
// #include <ti/drivers/Watchdog.h>
// #include <ti/drivers/WiFi.h>

/* Graphics library stuff */
#include <grlib.h>
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include "LcdDriver/HAL_MSP_EXP432P401R_Crystalfontz128x128_ST7735.h"
#include <img/lotr_tree_splash_screen.h>
#include <img/celtics_splash_screen.h>

/* Board Header file */
#include "Board.h"

/*
 * Headers to modularize specific board characteristics
 */

#include "clock.h"

/* Image files */
/* Graphic library context */
Graphics_Context g_sContext;

#define TASKSTACKSIZE   512

/* Clock Stuff */
Clock_Struct clock_accel_struct, clock_splash_scrn_struct;
Clock_Handle clk_handle; // not sure what this is used for yet

Void LCD_init()
{
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

Void LCD_draw_splash_screen()
{
    Graphics_drawImage(&g_sContext, &lotr_tree_splash_screen_img, 0, 0);
}

Void CLK_read_accelerometer()
{
    GPIO_toggle(Board_LED0);
}
/*
 *  ======== main ========
 */
int main(void)
{

    /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    // Board_initI2C();
    // Board_initSDSPI();
    // Board_initSPI();
    // Board_initUART();
    // Board_initWatchdog();
    // Board_initWiFi();
    LCD_init();

    /* Create one-shot clock for checking accelerometer values */
    Clock_Params clk_params;
    Clock_Params_init(&clk_params);
    clk_params.period = 0;
    clk_params.startFlag = TRUE;

    /* Constructs a one-shot clock instance */
    Clock_construct(&clock_splash_scrn_struct, (Clock_FuncPtr)LCD_draw_splash_screen,
                    400000/Clock_tickPeriod, &clk_params);

    /* Periodic stuff now */
    clk_params.period = 400000 / Clock_tickPeriod;
    clk_params.startFlag = TRUE;
    Clock_construct(&clock_accel_struct, (Clock_FuncPtr)CLK_read_accelerometer, Clock_tickPeriod*5, &clk_params);







    System_printf("Starting the example\nSystem provider is set to SysMin. "
                  "Halt the target to view any SysMin contents in ROV.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();


    /* Start BIOS */
    BIOS_start();

    return (0);
}
