/*********************************************/
/*  Andrue Peters
 *  9/12/18
 *
 *  Project 1A: Flash all LEDs at different rates
 *
 *  There are technically 4 different LEDs on the board
 *  P1.0 - LED1
 *  P2.0 - RGB_RED
 *  P2.1 - RGB_GREEN
 *  P2.2 - RGB_BLUE
 *
 *  P1.1 - Left Button  - Button 1
 *  P1.4 - Right Button - Button 2
 *
 *Press S1 to toggle rate of flashing led1, this also control the rate for flashing led2 (rgbLed)
 *  It goes from Slow -> Medium -> Fast -> Off -> Slow
 *Press S2 to toggle the on/off status and color of the rgbLed
 *  It goes from OFF -> Blue -> Green -> Aqua -> Red -> Magenta -> Yellow -> White -> Off
 *
 *  This design uses a counting scheme instead of a modulus to reduce clock cycles used.
 *
 *  Some functions are inlined in order to reduce the function call overhead
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

// speed and color settings for the LEDs
typedef enum {SLOW, MEDIUM, FAST, SPEED_OFF} SPEED;
typedef enum {COLOR_OFF, BLUE, GREEN, AQUA, RED, MAGENTA, YELLOW, WHITE} COLOR;

// speed periods
const uint32_t SLOW_PD = 20000;
const uint32_t MED_PD = 10000;
const uint32_t FAST_PD = 2000;


// keeps track of the flashing speed for the LEDs
// led1Period always equals rgbPeriod
volatile SPEED speed = SLOW;
volatile uint32_t led1Period = 0;
volatile uint32_t rgbPeriod = 0;

// keeps track of color for RGB LED
volatile COLOR color = COLOR_OFF;
volatile uint32_t rgbPowerState = 0;

// number of cycles for period
volatile uint32_t cycles = 0;

// used to reset cycles
// makes it so led1 and rgbLed can flash at same time
volatile bool cycleReset = false;

// Set up pins and init values
void Setup();

// changes the variable speed
void CycleSpeed();

// changes led1Period and rgbPeriod
void SetPeriod();

// cycles through the colors for the RGB LED
void CycleColor();




/* Software Abstraction Functions */
inline void TurnOnLED1();
inline void TurnOffLED1();
inline void ToggleLed1();
inline void TurnOffRGBLED();
inline void ToggleRGBLED();
inline void InputDelay();
bool Button1Pressed();
bool Button2Pressed();

int main(void)
{
    Setup();

    while(true)
    {
        /************************************/
        /*  Process Inputs */
        if ( Button1Pressed() )
        {
            CycleSpeed();
            SetPeriod();
            InputDelay();
        }

        // if button 2 pressed
        if ( Button2Pressed() )
        {
            // toggle the power state
            if ( rgbPowerState == 1)
                rgbPowerState = 0;
            else
            {
                rgbPowerState = 1;
                CycleColor();
            }
            InputDelay();
        }

        /* Toggle LED1 State */
        if ( speed == SPEED_OFF)
        {
            TurnOffLED1();
        }
        else
        {
            // trigger reset and toggle LED
            if ( cycles == led1Period)
            {
                ToggleLed1();
                cycleReset = true;
            }
        }

        /* Toggle RGB State */
        if ( rgbPowerState == 0)
            TurnOffRGBLED();
        else
        {
            // trigger reset and toggle led
            if ( cycles == rgbPeriod )
            {
                ToggleRGBLED();
                cycleReset = true;
            }
        }


        // reset cycles = 0 if we need to
        if ( cycleReset == true)
        {
            cycleReset = false;
            cycles = 0;
        }

        // if the LED is off, then cycles never resets causing it to appear the program is hanging
        // this is an issue because I did not want to use modulus due to speed constraints

        cycles > SLOW_PD ? cycles = 0 : ++cycles;
    }
}

void Setup()
{
    /* Stop Watchdog  */
    MAP_WDT_A_holdTimer();

    /* Pin Setups */
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0); // LED1 as output
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2); // set RGB_RED, RGB_Green, and RGB_BLUE pins as output

    /*  Set buttons as input on P1.1 and P1.4 */
    GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);

    /* Turn off all LEDs */
    TurnOffLED1();
    TurnOffRGBLED();

    speed = SLOW;
    led1Period = SLOW_PD;
    rgbPeriod = led1Period;
}

/*
 * CycleSpeed()
 * Moves speed to the next rate in the cycle. Slow -> Medium
 *                                            Medium -> Fast
 *                                            Fast -> Off
 *                                            Off -> Slow
 */
void CycleSpeed()
{
    switch (speed)
    {
    case SLOW:
        speed = MEDIUM;
        break;

    case MEDIUM:
        speed = FAST;
        break;

    case FAST:
        speed = SPEED_OFF;
        break;

    case SPEED_OFF:
        speed = SLOW;
        break;

    default:
        speed = SPEED_OFF;
        break;
    }
}

/*
 * SetPeriod()
 * Changes the value of period to be the respective number for the speed
 */
void SetPeriod()
{
    switch ( speed )
    {
    case SLOW:
        led1Period = SLOW_PD;
        rgbPeriod = led1Period;
        break;
    case MEDIUM:
        led1Period = MED_PD;
        rgbPeriod = led1Period;
        break;

    case FAST:
        led1Period = FAST_PD;
        rgbPeriod = led1Period;
        break;

    case SPEED_OFF:
        led1Period = 0;
        break;

    default:
        led1Period = 0;
        break;
    }

}

inline void TurnOnLED1()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
}

inline void TurnOffLED1()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
}

inline void TurnOffRGBLED()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
}

inline void ToggleRGBLED()
{
    switch( color )
    {

    case COLOR_OFF:
        GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
        break;

    case BLUE:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN2);
        break;

    case GREEN:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN1);
        break;

    case AQUA:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2,  GPIO_PIN1 | GPIO_PIN2 );
        break;

    case RED:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN0);
        break;

    case MAGENTA:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN2);
        break;

    case YELLOW:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1);
        break;

    case WHITE:
        GPIO_toggleOutputOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
        break;

    default:
        GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
        break;
    }
}

inline void CycleColor()
{
    switch( color )
    {
    case COLOR_OFF:
        color = BLUE;
        break;

    case BLUE:
        color = GREEN;
        break;

    case GREEN:
        color = AQUA;
        break;

    case AQUA:
        color = RED;
        break;

    case RED:
        color = MAGENTA;
        break;

    case MAGENTA:
        color = YELLOW;
        break;

    case YELLOW:
        color = WHITE;
        break;

    case WHITE:
        color = COLOR_OFF;
        break;

    default:
        color = COLOR_OFF;
        break;
    }
}


void ToggleLed1()
{
    GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
}

inline void InputDelay()
{
    volatile uint32_t i = 0;
    for ( i = 0; i < 50000; ++i);
}

bool Button1Pressed()
{
    return ( GPIO_getInputPinValue( GPIO_PORT_P1, GPIO_PIN1) == 0);
}

bool Button2Pressed()
{
    return ( GPIO_getInputPinValue( GPIO_PORT_P1, GPIO_PIN4) == 0);
}
