/*
 * Andrue Peters
 * 10/18/18
 * Advanced topics in Microcontrollers
 *
 * This abstracts away the details of working with the accelerometer.
 *
 * To Use:
 *      Call init_accelerometer()
 *      Call start_accelerometer()
 *      Set a pointer to accelerometer equal to get_acce_data()
 *
 *      To pause accelerometer, call stop_accelerometer()
 *
 *      You can do your own thing in the ADC14_IRQHandler by calling
 *      set_func_pointer() and passing it in a void function. This is the
 *      last thing that is called in the interrupt. It is up to the
 *      user not to abuse this. The purpose was to make it so that this
 *      driver didn't "hog" the ADC14 IRQ.
 *
 * Implementation details:
 *      Uses ADC14
 *      Pins 4.0, 4.2, and 6.1 as input for accelerometer
 *      Can't use ADC14_IRQHandler
 *
 *
 */

#ifndef _ACCELEROMETER_DRIVER_H
#define _ACCELEROMETER_DRIVER_H

#include <stdint.h>
struct accelerometer {
    uint16_t x;
    uint16_t y;
    uint16_t z;
};


/* Set function pointer to have function run in ADC14_IRQ */
void set_func_pointer(void (*func)());

/* initialize accelerometer */
void init_accelerometer();

/* stop the accelerometer */
void stop_accelerometer();

/* start the accelerometer */
void start_accelerometer();

/* returns pointer to accelerometer data */
struct accelerometer* get_accel_data();

#endif
