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
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>


void Setup();

int main(void)
{
    Setup();

    // represents speed LED will blink
    // the smaller the number, the faster
    const uint32_t LED1_RATE = 10000;
    const uint32_t RGB_RED_RATE = 5000;
    const uint32_t RGB_GREEN_RATE = 7500;
    const uint32_t RGB_BLUE_RATE = 10000;

    // counts up to the RATE
    uint32_t led1Counter = 0;
    uint32_t rgbRedCounter = 0;
    uint32_t rgbGreenCounter = 0;
    uint32_t rgbBlueCounter = 0;





    while(true)
    {
        if ( led1Counter == LED1_RATE)
        {
            GPIO_toggleOutputOnPin (GPIO_PORT_P1, GPIO_PIN0);
            led1Counter = 0;
        }

        if ( rgbRedCounter == RGB_RED_RATE)
        {
            GPIO_toggleOutputOnPin (GPIO_PORT_P2, GPIO_PIN0);
            rgbRedCounter = 0;
        }

        if ( rgbGreenCounter == RGB_GREEN_RATE)
        {
            GPIO_toggleOutputOnPin ( GPIO_PORT_P2, GPIO_PIN1);
            rgbGreenCounter = 0;
        }

        if ( rgbBlueCounter == RGB_BLUE_RATE)
        {
            GPIO_toggleOutputOnPin ( GPIO_PORT_P2, GPIO_PIN2);
            rgbBlueCounter == 0;
        }


        // count
        ++led1Counter;
        ++rgbRedCounter;
        ++rgbGreenCounter;
        ++rgbBlueCounter;
    }
}

void Setup()
{
    /* Stop Watchdog  */
    MAP_WDT_A_holdTimer();

    /* Pin Setups */
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0); // LED1 as output
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2); // set RGB_RED, RGB_Green, and RGB_BLUE pins as output

    /* Turn off all LEDs */
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
}
