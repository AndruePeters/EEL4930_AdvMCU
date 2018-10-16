

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>

/******************************************************************************/
/*                          Custom Types                                      */
/******************************************************************************/
typedef struct flags_t
{
    uint32_t updateLux:     1;
    uint32_t updateAccel:   1;
    uint32_t fallDetection: 1;
    uint32_t raw:           29;
} flags_t;

typedef struct accel_t
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
} accel_t;


/******************************************************************************/
/*                          Global Variables                                  */
/******************************************************************************/
/* Graphic library context */
Graphics_Context g_sContext;

/* store value from light sensor - OPT3001 */
static volatile float lux;

/* Store flags for system */
volatile static flags_t flags;

/* Store results from accelerometer */
static volatile accel_t accel;

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

// these timers are used for PWM
static Timer_A_PWMConfig redPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,          // roughly 10ms period with SMCLK = 3MHz
        TIMER_A_CAPTURECOMPARE_REGISTER_1,
        TIMER_A_OUTPUTMODE_RESET_SET,
        0 //
};

static Timer_A_PWMConfig greenPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_2,
        TIMER_A_OUTPUTMODE_RESET_SET,
        0
};

static Timer_A_PWMConfig bluePWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_3,
        TIMER_A_OUTPUTMODE_RESET_SET,
        0
};

static Timer_A_PWMConfig lcdPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,               // roughly 9ms period with SMCLK = 3MHz
        TIMER_A_CAPTURECOMPARE_REGISTER_4,
        TIMER_A_OUTPUTMODE_RESET_SET,
        0     // 50% duty cycle
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

        if (flags.updateAccel)
        {
            flags.updateAccel = 0;
        }

        if (flags.fallDetection)
        {

        }


        MAP_Interrupt_enableInterrupt(INT_TA1_0);
        MAP_Interrupt_enableInterrupt(INT_TA1_N);
        MAP_Interrupt_enableMaster();
      //  MAP_PCM_gotoLPM0();
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

void initAccelerometer()
{
    /* Configures Pin 4.0, 4.2, and 6.1 as ADC input */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P4, GPIO_PIN0 | GPIO_PIN2, GPIO_TERTIARY_MODULE_FUNCTION);
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P6, GPIO_PIN1, GPIO_TERTIARY_MODULE_FUNCTION);

    /* Initializing ADC (ADCOSC/64/8) */
    MAP_ADC14_enableModule();
    MAP_ADC14_initModule(ADC_CLOCKSOURCE_ADCOSC, ADC_PREDIVIDER_64, ADC_DIVIDER_8,
            0);

    /* Configuring ADC Memory (ADC_MEM0 - ADC_MEM2 (A11, A13, A14)  with no repeat)
         * with internal 2.5v reference */
    MAP_ADC14_configureMultiSequenceMode(ADC_MEM0, ADC_MEM2, true);
    MAP_ADC14_configureConversionMemory(ADC_MEM0,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A14, ADC_NONDIFFERENTIAL_INPUTS);

    MAP_ADC14_configureConversionMemory(ADC_MEM1,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A13, ADC_NONDIFFERENTIAL_INPUTS);

    MAP_ADC14_configureConversionMemory(ADC_MEM2,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A11, ADC_NONDIFFERENTIAL_INPUTS);

    /* Enabling the interrupt when a conversion on channel 2 (end of sequence)
     *  is complete and enabling conversions */
    MAP_ADC14_enableInterrupt(ADC_INT2);

    /* Enabling Interrupts */
    MAP_Interrupt_enableInterrupt(INT_ADC14);
    MAP_Interrupt_enableMaster();

    /* Setting up the sample timer to automatically step through the sequence
     * convert.
     */
    MAP_ADC14_enableSampleTimer(ADC_AUTOMATIC_ITERATION);

    /* Triggering the start of the sample */
    MAP_ADC14_enableConversion();
    MAP_ADC14_toggleConversionTrigger();
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

/* This interrupt is fired whenever a conversion is completed and placed in
 * ADC_MEM2. This signals the end of conversion and the results array is
 * grabbed and placed in resultsBuffer */
void ADC14_IRQHandler(void)
{
    uint64_t status;

    status = MAP_ADC14_getEnabledInterruptStatus();
    MAP_ADC14_clearInterruptFlag(status);

    /* ADC_MEM2 conversion completed */
    if(status & ADC_INT2)
    {
        /* Store ADC14 conversion results */
        accel.x = ADC14_getResult(ADC_MEM0);
        accel.y = ADC14_getResult(ADC_MEM1);
        accel.z = ADC14_getResult(ADC_MEM2);
     }
}
