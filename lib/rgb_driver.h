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
 * Make sure that countPd is the same as the sourced timer, otherwise things
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

typedef enum rgb_led {RGB_DRIVER_RED, RGB_DRIVER_GREEN, RGB_DRIVER_BLUE} rgb_led;

int set_red_led(uint32_t port, uint32_t pin, uint32_t intensity);
int set_green_led(uint32_t port, uint32_t pin, uint32_t intensity);
int set_blue_led(uint33_t port, uint32_t pin, uint32_t intensity);

int set_intensity(rgb_led color, uint32_t intensity);
static uint32_t map_intensity(intensity);

struct rgbDriver {
    /* The ports of each led */
    /* e.g. redLedPort = GPIO_PORT_P2 */
    uint32_t red_led_port;
    uint32_t green_led_port;
    uint32_t blue_led_port;

    /* The pin of the led */
    /* e.g. redLedPin = GPIO_PIN0 */
    uint32_t red_led_pin;
    uint32_t green_led_pin;
    uint32_t blue_led_pin;

    /* This is tick count used for configuring the main timer */

    uint32_t countPd;

    /* Pointers to structs for respective timer config */
    Timer_A_PWMConfig *red_pwm_config;
    Timer_A_PWMConfig *green_pwm_config;
    Timer_A_PWMConfig *blue_pwm_config;
};

int set_red_led(uint32_t port, uint32_t pin, uint32_t intensity)
{
  red_led_port = port;
  red_led_pin = pin;
  set_intensity(RGB_DRIVER_RED, intensity);
}

int set_green_led(uint32_t port, uint32_t pin, uint32_t intensity)
{
  green_led_port = port;
  green_led_pin = pin;
  set_intensity(RGB_DRIVER_GREEN, intensity);
}

int set_blue_led(uint32_t port, uint32_t pin, uint32_t intensity)
{
  blue_led_port = port;
  blue_led_pin = pin;
  set_intensity(RGB_DRIVER_BLUE, intensity);
}


int set_intensity(rgb_led color, uint32_t intensity)
{
  switch(color) {
    case RGB_DRIVER_RED:
      red_pwm_config->dutyCycle = map_intensity(intensity);
      break;

    case RGB_DRIVER_GREEN:
      green_pwm_config->dutyCycle = map_intensity(intensity);
      break;

    case RGB_DRIVER_BLUE:
      green_pwm_config->dutyCycle = map_intensity(intensity);
      break;

    default:
      return -1;
  }

  return 0;
}

/* Based off of the standard mapping algorithm: */
/* output = (x * in_min) * (out_max - out_min) / (in_max - in_min) + out_min */
/* In this case, in_min = out_min = 0 */
uint32_t map_intensity(uint32_t intensity)
{
  return (intensity) * (countPd) / 255 + countPd;
}

#endif
