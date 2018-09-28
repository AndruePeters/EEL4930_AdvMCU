/*********************************************/
/*  Andrue Peters
 *  9/12/18
 *
 *  Project 2A: Use the left button
 *
 *  LED Pins
 *  P1.0 - LED1
 *  P2.0 - RGB_RED
 *  P2.1 - RGB_GREEN
 *  P2.2 - RGB_BLUE
 *
 *  P1.1 - S1
 *  P1.4 - S2
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/******************************************************************************/
/*                          Global Constants                                  */
/******************************************************************************/
const unsigned MCLK_FREQUENCY = 3000000;
const unsigned PWM_PERIOD = MCLK_FREQUENCY/5000;

const uint8_t port_mapping[] =
{
    //Port P2:
    PM_TA0CCR1A, PM_TA0CCR2A, PM_TA0CCR3A, PM_NONE, PM_TA1CCR1A, PM_NONE, PM_NONE, PM_NONE
};

/******************************************************************************/
/*                          Global Mutables                                   */
/******************************************************************************/
volatile int32_t periods[4]; // led blink periods for each color state


/*              Timer A UpMode Configuration Parameter                        */
const Timer_A_UpModeConfig upConfig =
{
 TIMER_A_CLOCKSOURCE_SMCLK,         // SMCLK Clock Source
 TIMER_A_CLOCKSOURCE_DIVIDER_1,     // SMCLK/1 = 3MHz
 45000,                             // 15ms debounce period
 TIMER_A_TAIE_INTERRUPT_DISABLE,
 TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE, // enable CCR0 interrupt
 TIMER_A_DO_CLEAR                    // Clear value
};

const Timer_A_UpModeConfig TA2upConfig =
{
 TIMER_A_CLOCKSOURCE_SMCLK,         // SCMCLK Clock Source
 TIMER_A_CLOCKSOURCE_DIVIDER_64,    // SMCLK/64 ~ 46.9 kMHz
 46875,                             // 1s timer period
 TIMER_A_TAIE_INTERRUPT_DISABLE,
 TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE, // enable ccr0 interrupt
 TIMER_A_DO_CLEAR                   // clear value
};

/******************************************************************************/
/*                           Function Prototypes                              */
/******************************************************************************/
void Init();

int main(void)
{
    Init();

    return 0;
}


void Init()
{
    /* Stop Watchdog  and disable master interrupts */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();

    /* Default SysTick period for all 4 color states = 0.5s */
    periods[0] = 1500000;
    periods[1] = 1500000;
    periods[2] = 1500000;
    periods[3] = 1500000;

    /*  Initialize main clock to 3Mhz   */
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_3);
    MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);

    /* GPIO Setup for the RGB LED PINS2.0-2 */
    MAP_PMAP_configurePorts((const uint8_t *) port_mapping, PMAP_P2MAP, 1,
        PMAP_DISABLE_RECONFIGURATION);

    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
             GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2, GPIO_PRIMARY_MODULE_FUNCTION);

    /* Configure S1 and S2 as input and enable interrupts */
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
    MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4, GPIO_HIGH_TO_LOW_TRANSITION);

    /* Configure TimerA0 */
    TIMER_A0->CCR[0] = PWM_PERIOD;
        TIMER_A0->CCTL[1] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR1 reset/set
        TIMER_A0->CCR[1] = PWM_PERIOD * (RED/255);         // CCR1 PWM duty cycle
        TIMER_A0->CCTL[2] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR2 reset/set
        TIMER_A0->CCR[2] = PWM_PERIOD * (0/255);           // CCR2 PWM duty cycle
        TIMER_A0->CCTL[3] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR3 reset/set
        TIMER_A0->CCR[3] = PWM_PERIOD * (0/255);           // CCR3 PWM duty cycle
        TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_MC__UP | TIMER_A_CTL_CLR;  // SMCLK, up mode, clear TAR

    /* Configure TimerA1 and TimerA2 for Up Mode */
    MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &upConfig);
    MAP_Timer_A_configureUpMode(TIMER_A2_BASE, &TA2upConfig);

}
