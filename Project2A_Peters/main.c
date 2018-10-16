/*********************************************/
/*  Andrue Peters
 *  9/12/18
 *
 *  Project 2A: Use the left button
 * *  J4.33 - P5.1 - S1
 *  J4.32 - P3.6 - S2
 *
 *  J4.40 - P2.7 - Buzzer
 * Resolution of board is 128x128
 *  LED Pins
 *  P1.0 - LED1
 *  P2.0 - RGB_RED      - TIMER_A_CAPTURECOMPARE_REGISTER_1
 *  P2.1 - RGB_GREEN    - TIMER_A_CAPTURECOMPARE_REGISTER_2
 *  P2.2 - RGB_BLUE     - TIMER_A_CAPTURECOMPARE_REGISTER_3
 *
 *  P1.1 - S1
 *  P1.4 - S2
 *
 *  This program changes the intensity of each LED in the RGB LED.
 *  Press S2 to change the intensity. It starts off with a duty cycle of 10%, and
 *  each subsequent press of S2 increases the duty cycle by 10%.
 *
 *  There are three duty cycle variables stored as an enum type dutyCycle_t: redDC, greenDC, blueDC;
 *  There are 11 possible different values per channel - off to 100% -, so there are 11^3 possible color
 *  combinations.
 *
 *  Press S1 to change the color the user is editing.
 *  The current color the user is editing is stored in colorState of type color_t. Possible values are
 *  COLOR_RED, COLOR_GREEN, COLOR_BLUE. LED1 is flashed once when transitioning from blue to red,
 *  twice from red to green, and thrice from green to blue.
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/******************************************************************************/
/*                          Global Constants                                  */
/******************************************************************************/
#define MCLK_FREQUENCY  3000000;

#define TIMER_PWM_PERIOD 32000  // period used for pwm
#define DutyCycle_1Pct (TIMER_PWM_PERIOD / 100) // duty cycle of 1% of TIMER_PWM_PERIOD

// These are the number of times the red light will toggle to change colors
// the number of flashes is COLOR_TOGGLE_COUNT / 2
#define COUNT_PD 450000
#define RED_TOGGLE_COUNT    2
#define GREEN_TOGGLE_COUNT  4
#define BLUE_TOGGLE_COUNT   6

volatile uint32_t led1Count = 0;

// this port mapping is required to
const uint8_t portP2_mapping[] =
{
 PM_TA0CCR1A, PM_TA0CCR2A, PM_TA0CCR3A, PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE
};

/* keeps track of the  LED being changed */
typedef enum {COLOR_RED, COLOR_GREEN, COLOR_BLUE} color_t;

/* DC means duty cycle. DC_X means X percent duty cycle. DC_10 is 10 percent duty cycle */
typedef enum {DC_0 = 0, DC_10 = 10, DC_20 = 20, DC_30 = 30, DC_40 = 40, DC_50 = 50, DC_60 = 60, DC_70 = 70, DC_80 = 80, DC_90 = 90, DC_100 = 100} dutyCycle_t;

/******************************************************************************/
/*                          Global Mutables                                   */
/******************************************************************************/
// colorState switches the color we're changing the intensity of
volatile color_t colorState = COLOR_RED;

// dutyCycle_t is the duty cycle (DC) of each color
volatile dutyCycle_t redDC = DC_10;
volatile dutyCycle_t greenDC = DC_10;
volatile dutyCycle_t blueDC = DC_10;

// states used to debounce
volatile unsigned s1ButtonDebounce = 0;
volatile unsigned s2ButtonDebounce = 0;

/*  Configure Timers */
// used for debounce
const Timer_A_UpModeConfig upConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/1 = 3MHz
        45000,                                  // 15ms debounce period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE ,    // Enable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};

// these timers are used for PWM
Timer_A_PWMConfig redPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,          // roughly 1ms period with SMCLK = 3MHz
        TIMER_A_CAPTURECOMPARE_REGISTER_1,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*10 // 10% duty clock
};

Timer_A_PWMConfig greenPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_2,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*10
};

Timer_A_PWMConfig bluePWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_3,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*10
};

/******************************************************************************/
/*                           Function Prototypes                              */
/******************************************************************************/
void Init();
inline void CycleColor();
volatile dutyCycle_t* GetDutyCycle();
inline void CycleIntensity(volatile dutyCycle_t* dc);

int main(void)
{
    Init();

    while(1)
    {
        MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
        MAP_Interrupt_enableInterrupt(INT_PORT1);
        MAP_Interrupt_enableInterrupt(INT_TA1_0);
        MAP_Interrupt_enableMaster();
        MAP_PCM_gotoLPM0();
    }

}

/******************************************************************************/
/*                      Helper Functions                                      */
/******************************************************************************/

//
// Sets clock frequency sourced by MCLK to 3MHz
// Port maps P2.0-2 to TA0 CCR1, CCR2, and CCR3
// Sets P2.0-2 as output
// Sets S1 and S2 as inputs and enables their interrupts
// Configures timer A1 for button debounce
//
void Init()
{
    /* Stop Watchdog  and disable master interrupts */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();


    /*  Initialize main clock to 3Mhz   */
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_3);
    MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);

    /* GPIO Setup for the RGB LED PINS2.0-2 */
    MAP_PMAP_configurePorts((const uint8_t *) portP2_mapping, PMAP_P2MAP, 1,
        PMAP_DISABLE_RECONFIGURATION);

    /* Set these pins as output */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
             GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2, GPIO_PRIMARY_MODULE_FUNCTION);
   GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);

    /* Configure S1 and S2 as input and enable interrupts */
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4, GPIO_HIGH_TO_LOW_TRANSITION);

    /* Generate PWM on these pins */
    Timer_A_generatePWM(TIMER_A0_BASE, &redPWMConfig);
    Timer_A_generatePWM(TIMER_A0_BASE, &greenPWMConfig);
    Timer_A_generatePWM(TIMER_A0_BASE, &bluePWMConfig);

    MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &upConfig);




} // end init

//
//  Returns a pointer to the dutyCycle variable associated with colorState
//  This is used for CycleIntensity()
//
volatile dutyCycle_t* GetDutyCycle()
{
    switch(colorState)
    {
    case COLOR_RED:     return &redDC;
    case COLOR_GREEN:   return &greenDC;
    case COLOR_BLUE:    return &blueDC;
    default: return 0;
    }
}

//
//  Cycles colorState.
//  This function should only be called on S1 press
//
void CycleColor()
{
    // cycle colorstate
    switch ( colorState)
    {
    case COLOR_RED:
    {
        colorState = COLOR_GREEN;
        led1Count = GREEN_TOGGLE_COUNT;
        break;
    }
    case COLOR_GREEN:
    {
        colorState = COLOR_BLUE;
        led1Count = BLUE_TOGGLE_COUNT;
        break;
    }
    case COLOR_BLUE:
    {
        colorState = COLOR_RED;
        led1Count = RED_TOGGLE_COUNT;
        break;
    }
    default:
        colorState = COLOR_RED;
        break;
    }


    // Set SysTick stuff
    MAP_SysTick_setPeriod(COUNT_PD);
    MAP_SysTick_enableModule();
    MAP_SysTick_enableInterrupt();


}

//
// Changes the intensity of the light
//
void CycleIntensity(volatile dutyCycle_t* dc)
{
    // cycles the intesnity flag
    switch(*dc)
    {
    case DC_0:  (*dc) = DC_10; break;
    case DC_10: (*dc) = DC_20; break;
    case DC_20: (*dc) = DC_30; break;
    case DC_30: (*dc) = DC_40; break;
    case DC_40: (*dc) = DC_50; break;
    case DC_50: (*dc) = DC_60; break;
    case DC_60: (*dc) = DC_70; break;
    case DC_70: (*dc) = DC_80; break;
    case DC_80: (*dc) = DC_90; break;
    case DC_90: (*dc) = DC_100; break;
    case DC_100: (*dc) = DC_0; break;
    default: (*dc) = DC_10; break;
    }

    // updates PWMConfig dutycycle and generates the PWM
    switch ( colorState )
    {
    case COLOR_RED:
    {
        redPWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &redPWMConfig);
        break;
    }
    case COLOR_GREEN:
    {
        greenPWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &greenPWMConfig);
        break;
    }
    case COLOR_BLUE:
    {
        bluePWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &bluePWMConfig);
        break;
    }
    default:
    {
        redPWMConfig.dutyCycle =      0;
        greenPWMConfig.dutyCycle =    0;
        bluePWMConfig.dutyCycle =     0;
        break;
    }
    }
}

/******************************************************************************/
/*                      Interrupt Handlers                                    */
/******************************************************************************/
void PORT1_IRQHandler(void)
{
    uint32_t status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, status);

    /* Handles S1 button press */
    if ( status & GPIO_PIN1)
    {
        if ( s1ButtonDebounce == 0)
        {
            s1ButtonDebounce = 1;
            MAP_Interrupt_disableInterrupt(INT_PORT1);
            CycleColor();
            MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }
    }

    /* Handles S2 button press */
    if (status & GPIO_PIN4)
    {
        if ( s2ButtonDebounce == 0)
        {
            s2ButtonDebounce = 1;
            MAP_Interrupt_disableInterrupt(INT_PORT1);
            CycleIntensity(GetDutyCycle());
            MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }
    }
}

/*
 * Timer A1 interrupt handler. This handler determines whether to reset button
 * debounce after debounce timer expires.
 */
void TA1_0_IRQHandler(void)
{
    if (P1IN & GPIO_PIN1)
    {
        s1ButtonDebounce = 0;
    }
    if (P1IN & GPIO_PIN4)
    {
        s2ButtonDebounce = 0;
    }

    if ((P1IN & GPIO_PIN1) && (P1IN & GPIO_PIN4))
    {
        MAP_Timer_A_stopTimer(TIMER_A1_BASE);
    }
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A1_BASE,
                TIMER_A_CAPTURECOMPARE_REGISTER_0);
}

void SysTick_Handler()
{
    // this special case is used to stop the SysTick
    if ( led1Count == 1)
    {
        --led1Count;
        GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
        MAP_SysTick_disableInterrupt();
    }
    else if ( led1Count  > 0)
    {
        GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
        --led1Count;
    }

}
