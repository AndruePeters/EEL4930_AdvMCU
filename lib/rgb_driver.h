/*
 * Andrue Peters
 * 10/15/18
 * Advanced topics in Microcontrollers
 *
 *
 * This is being designed because manually dealing with the ins and outs out of
 * handling PWM with rgb leds is starting to make the code difficult to manage
 * and read.
 *
 *
 *
 * There are some very important things to be noted when using this library.
 * Make sure that timer_period is the same as the sourced timer, otherwise things
 * can go awry. I'm not completely sure what will happen if your dutyCycle period
 * is greater than the sourced timer period, but I will find out for fun later. My
 * guess is that nothing will happen and no interrupt will be serviced.
 *
 * I am making this similar to the arduino library where the user only has to
 * enter a value 0 to 255 for the intensity with 0 being off and 255 being the brightest
 *
 * If the port is 0, then this will not attempt to do anything
*/
#ifndef _RGB_DRIVER_H
#define _RGB_DRIVER_H

#include <assert.h>
#define ERR_PORT_OUT_OF_RANGE (1)
#define ERR_PIN_OUT_OF_RANGE  (2)
#define ERR_COLOR_DOES_NOT_EXIST (1)
#define ERR_PCT_GREATER_100 (1)
#define RGB_DRIVER_SUCCESS (1)



typedef enum rgb_led_color {RGB_DRIVER_RED, RGB_DRIVER_GREEN, RGB_DRIVER_BLUE} rgb_led_color;



struct rgb_driver {
    /* The ports of each led */
    /* e.g. red_led_port = GPIO_PORT_P2 */
    uint32_t red_led_port;
    uint32_t green_led_port;
    uint32_t blue_led_port;

    /* The pin of the led */
    /* e.g. red_led_pin = GPIO_PIN0 */
    uint32_t red_led_pin;
    uint32_t green_led_pin;
    uint32_t blue_led_pin;

    /* This is tick count used for configuring the main timer */
    uint32_t timer_period;

    /* Pointers to structs for respective timer config */
    Timer_A_PWMConfig *red_pwm_config;
    Timer_A_PWMConfig *green_pwm_config;
    Timer_A_PWMConfig *blue_pwm_config;
};

int set_red_led(struct rgb_driver *self, uint32_t port, uint32_t pin, uint32_t intensity);
int set_green_led(struct rgb_driver *self, uint32_t port, uint32_t pin, uint32_t intensity);
int set_blue_led(struct rgb_driver *self, uint33_t port, uint32_t pin, uint32_t intensity);

int set_intensity(struct rgb_driver *self, rgb_led_color color, uint32_t intensity);
int set_duty_cycle_pct(struct rgb_driver *self,rgb_led_color color, uint32_t pct);
void set_period(struct rgb_driver *self, uint32_t pd);
static uint32_t map_intensity(struct rgb_driver *self, uint32_t intensity);

#endif
