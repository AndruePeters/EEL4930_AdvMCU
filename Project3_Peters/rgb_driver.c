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
 *
 *
 *
 * Setting outputs and port mapping is up to the user. The purpose of this small
 * driver is to keep my homework code cleaner, organized, and less complicated for
 * repeated tasks like controlling LED intensity.
 *
 * More features will be added on a need by need basis.
*/

#include <rgb_driver.h>

/* Sets the port, pin, and intensity for the red led
 * In the future, this should have a static assert instead of return, but TI
 * compiler does not work with standard static assert methods
 *
 * Returns ERR_PORT_OUT_OF_RANGE when port does not exist
 * Returns ERR_PIN_OUT_OF_RANGE when pin does not exist
 * Returns 1 if everything is good
 */
int set_red_led(struct rgb_driver *self, uint32_t port, uint32_t pin, uint32_t intensity)
{
if (port > 8) {
    return ERR_PORT_OUT_OF_RANGE;
  }
  if (pin > 7) {
    return ERR_PIN_OUT_OF_RANGE;
  }

    self->red_led_port = port;
    self->red_led_pin = pin;
    set_intensity(self, RGB_DRIVER_RED, intensity);
    return RGB_DRIVER_SUCCESS;
}

/* Sets the port, pin, and intensity for the green led
 * In the future, this should have a static assert instead of return, but TI
 * compiler does not work with standard static assert methods
 *
 * Returns ERR_PORT_OUT_OF_RANGE when port does not exist
 * Returns ERR_PIN_OUT_OF_RANGE when pin does not exist
 * Returns 1 if everything is good
 */
int set_green_led(struct rgb_driver *self, uint32_t port, uint32_t pin, uint32_t intensity)
{
  if (port > 8) {
    return ERR_PORT_OUT_OF_RANGE;
  }
  if (pin > 7) {
    return ERR_PIN_OUT_OF_RANGE;
  }

  self->green_led_port = port;
  self->green_led_pin = pin;
  set_intensity(self, RGB_DRIVER_GREEN, intensity);
  return RGB_DRIVER_SUCCESS;
}

/* Sets the port, pin, and intensity for the blue led
 * In the future, this should have a static assert instead of return, but TI
 * compiler does not work with standard static assert methods
 *
 * Returns ERR_PORT_OUT_OF_RANGE when port does not exist
 * Returns ERR_PIN_OUT_OF_RANGE when pin does not exist
 * Returns 1 if everything is good
 */
int set_blue_led(struct rgb_driver *self,uint32_t port, uint32_t pin, uint32_t intensity)
{
  if (port > 8) {
    return ERR_PORT_OUT_OF_RANGE;
  }
  if (pin > 7) {
    return ERR_PIN_OUT_OF_RANGE;
  }

  self->blue_led_port = port;
  self->blue_led_pin = pin;
  set_intensity(self, RGB_DRIVER_BLUE, intensity);
  return RGB_DRIVER_SUCCESS;
}


/*  Sets the intensity of the LED by changing the duty cycle */
int set_intensity(struct rgb_driver *self, rgb_led_color color, uint32_t intensity)
{
  switch(color) {
    case RGB_DRIVER_RED:
      self->red_pwm_config->dutyCycle = map_intensity(self, intensity);
      Timer_A_generatePWM(TIMER_A0_BASE, self->red_pwm_config);
      break;

    case RGB_DRIVER_GREEN:
      self->green_pwm_config->dutyCycle = map_intensity(self, intensity);
      Timer_A_generatePWM(TIMER_A0_BASE, self->red_pwm_config);
      break;

    case RGB_DRIVER_BLUE:
      self->green_pwm_config->dutyCycle = map_intensity(self, intensity);
      Timer_A_generatePWM(TIMER_A0_BASE, self->red_pwm_config);
      break;

    default:
      return ERR_COLOR_DOES_NOT_EXIST;
  }

  return RGB_DRIVER_SUCCESS;
}

int set_duty_cycle_pct(struct rgb_driver *self, rgb_led_color color, uint32_t pct)
{
  if (pct > 100)
    return ERR_PCT_GREATER_100;

  uint32_t dc = self->timer_period * (float)(1/pct);
  switch (color) {
    case RGB_DRIVER_RED:
      self->red_pwm_config->dutyCycle = dc;
      break;

    case RGB_DRIVER_GREEN:
      self->green_pwm_config->dutyCycle = dc;
      break;

    case RGB_DRIVER_BLUE:
      self->blue_pwm_config->dutyCycle = dc;
      break;

    default:
      return ERR_COLOR_DOES_NOT_EXIST;
  }
  return RGB_DRIVER_SUCCESS;
}

/* Sets the period */
void set_period(struct rgb_driver *self, uint32_t pd)
{
  self->timer_period = pd;
}

/* Maps range [0, 255] to [0, timer_period] so user does not have to worry about details
 * Based off of the standard mapping algorithm:
 * output = (x * in_min) * (out_max - out_min) / (in_max - in_min) + out_min
 * In this case, in_min = out_min = 0
*/
uint32_t map_intensity(struct rgb_driver *self, uint32_t intensity)
{
  if (intensity > 255)
    intensity = 255;
  return (intensity) * (self->timer_period) / 255 + self->timer_period;
}
