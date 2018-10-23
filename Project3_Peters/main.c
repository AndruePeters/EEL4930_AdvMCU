/*
 * Andrue Peters
 * 10/3/18
 *
 *  Project 2B: Quiz
 *
 *  LED Pins
 *  P1.0 - LED1
 *  P2.0 - RGB_RED      - TIMER_A_CAPTURECOMPARE_REGISTER_1
 *  P2.1 - RGB_GREEN    - TIMER_A_CAPTURECOMPARE_REGISTER_2
 *  P2.2 - RGB_BLUE     - TIMER_A_CAPTURECOMPARE_REGISTER_3
 *
 *  J4.33 - P3.5 - S2
 *  J4.32 - P5.1 - S1
 *  j1.5  - P4.1 - JS_Button
 *  J4.40 - P2.7 - Buzzer
 * Resolution of board is 128x128
 *
 *
 *  Ambient Light Sensor Notes
 *      LUX VALUES
 *      -------------------------------------------
 *      |Description                    | Lux value|
 *      --------------------------------------------
 *      Flashlight directly on:         131040
 *      Light 6 inches above:           1100-1300
 *      Light about 1.5ft above:        300
 *      Dimly lit room in overcast day: 145
 *      Bright room w/ fluorescent:     980
 *
 *
 */

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>
#include <rgb_driver.h>
#include <accelerometer.h>
#include <buzzer_driver.h>


/******************************************************************************/
/*                          Global Constants / Defines                        */
/******************************************************************************/



/******************************************************************************/
/*                          Global Variables                                  */
/******************************************************************************/
/* Graphic library context */
Graphics_Context g_sContext;

/* store value from light sensor - OPT3001 */
volatile float lux;


/* Store results from accelerometer */
volatile accel_t accel;

/******************************************************************************/
/*                          Timer Config                                      */
/******************************************************************************/
/* Timer_A Up Configuration Parameter */
const Timer_A_UpModeConfig sensorCheckTimer =
{
 TIMER_A_CLOCKSOURCE_SMCLK,               // ACLK Clock SOurce
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // ACLK/1 = 3MHz
        50000,                                    // 200 tick period
        TIMER_A_TAIE_INTERRUPT_ENABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_DISABLE,    // Disable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};



/******************************************************************************/
/*                           Function Prototypes                              */
/******************************************************************************/
void initHardware();
void initClock();
void initLCD();
void initAccelerometer();
void initLightSensor();
void initTimers();


/*
 * Main function
 */
int main(void)
{
    /*  Halt WDT and disable master interrupts */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();


    /* Initialize hardware */
    initHardware();
    MAP_Interrupt_disableSleepOnIsrExit();

    while(1)
    {
        MAP_Interrupt_disableMaster();
        if (flags.updateLux)
        {
            flags.updateLux = 0;
            lux = OPT3001_getLux();
            uint32_t dc = 0;
            /* Adjust LCD Backlight */
            if (lux < 2000)
            {
               dc = ((2000*0.1) + (lux*0.9))/2000 * 200;
            }
            else
            {
                dc = 200;
            }


            if (dc < lcdPWMConfig.dutyCycle)
            {
                for(; lcdPWMConfig.dutyCycle <= dc; ++lcdPWMConfig.dutyCycle)
                    Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);

            }
            else if (dc > lcdPWMConfig.dutyCycle)
            {

            }
            Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);
        }


        MAP_Interrupt_enableMaster();
    }
}

/******************************************************************************/
/*                          Initialize                                        */
/******************************************************************************/
void initHardware()
{
    /* Set 2 flash wait states for Flash bank 0 and 1*/
    MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
    MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);

    initClock();
    initLCD();
    initTimers();

    /* Configure port mapping for Port 2 */
    MAP_PMAP_configurePorts( (const uint8_t*) portP2_mapping, PMAP_P2MAP, 1, PMAP_DISABLE_RECONFIGURATION);

    /* Configure RGB LED and PIN 6 for LCD backlight */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
             GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2 | GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);

    initLightSensor();

    __delay_cycles(100000);


}

void initClock()
{
    /* Set the core voltage level to VCORE1 */
    MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);

    /* Set clocks */
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_48);
    MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);


}

void initLCD()
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
    //Graphics_drawStringCentered(&g_sContext, (int8_t *)"Light Sensor:", AUTO_STRING_LENGTH, 64, 30, OPAQUE_TEXT);
}



void initLightSensor()
{
    /* Initialize I2C comm */
    Init_I2C_GPIO();
    I2C_init();

    /* Initialize OPT3001 digital ambient light sensor */
    OPT3001_init();
}

void initTimers()
{
    /* Configure PWM for LCD display */
    Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);
    MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &sensorCheckTimer);
    MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
}


/******************************************************************************/
/*                      Interrupt Handlers                                    */
/******************************************************************************/

/*
 *  Timer A1 is used to check the light sensor and accelerometer
 */

void TA1_N_IRQHandler(void)
{
    flags.updateLux = 1;
    flags.updateAccel = 1;

    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A1_BASE,
                TIMER_A_CAPTURECOMPARE_REGISTER_0);
    MAP_Interrupt_disableInterrupt(INT_TA1_N);
}


