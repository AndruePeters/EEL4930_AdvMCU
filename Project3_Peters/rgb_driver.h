/*
 * Andrue Peters
 * 10/15/18
 * Advanced topics in Microcontrollers
 *
 * This library currently does not have configurable interrupts for the eval board or booster pack.
 * TIMER_A0_BASE and CCR1-3 are used for the RGB led 2.0-2.2 respectively.
 *
 * First call rgb_init_rgb_driver() with RGB_BOOSTER_PACK and RGB_EVAL_BOARD for rgb_set. These select
 * the pin configuration for the board or booster pack. Pass in the period of the configured timer, and
 * also pass in the timer base in form TIMER_AX_BASE. This feature will be used in the future.
 *
 * When you make any changes, rgb_start() must be called afterwards to update the timer and show changes.
 * So, if you call  rgb_set_intensity(rgb_led_color color, uint32_t intensity), rgb_start() must be called
 * to make changes take affect.
 *
 * If a function requires rgb_led_color, then appropriate values are in the enum. This selects the
 * the color to be edited.
 *
*/
#ifndef _RGB_DRIVER_H
#define _RGB_DRIVER_H
#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>

/* set up errors */
#define ERR_RGB_SET_NOT_EXIST       (-1)
#define ERR_COLOR_DOES_NOT_EXIST    (1)
#define ERR_PCT_GREATER_100         (1)
#define RGB_DRIVER_SUCCESS          (1)

/* use these two for rgb_set */
#define RGB_BOOSTER_PACK            (2)
#define RGB_EVAL_BOARD              (1)



typedef enum rgb_led_color {RGB_DRIVER_RED, RGB_DRIVER_GREEN, RGB_DRIVER_BLUE, RGB_DRIVER_ALL} rgb_led_color;




/* Initializes and sets board pin configuration. */
/* Use above defines for rgb_set, and TIMER_AX_BASE for timer */
int rgb_init_rgb_driver(uint32_t rgb_set, uint32_t pd, uint32_t timer);

/* Calls generatePWM, making changes take affect */
int rgb_start(rgb_led_color color);

/* Sets duty cycle to 0 and then updates causing lights to go off */
int rgb_stop(rgb_led_color color);

/* Use like Arduino analogWrite(), with intensity being value 0 - 255 */
int rgb_set_intensity(rgb_led_color color, uint32_t intensity);

/* Set the duty cycle in percentage form */
int rgb_set_duty_cycle_pct(rgb_led_color color, uint32_t pct);

/* Set the actual duty cycle */
int rgb_set_duty_cycle(rgb_led_color color, uint32_t dc);

/* update the period of all timer modules */
void rgb_set_period(uint32_t pd);

uint32_t rgb_get_period();


#endif
