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
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>


void Setup();

int main(void)
{
    Setup();


    while(true)
    {
        // if button 1 depressed then turn off light else turn it on
        if ( GPIO_getInputPinValue( GPIO_PORT_P1, GPIO_PIN1) == 0)
        {
            GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
        }
        else
        {
            GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
        }

        if ( GPIO_getInputPinValue( GPIO_PORT_P1, GPIO_PIN4) == 0)
        {
            GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
        }
        else
        {
            GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
        }



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
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
}
