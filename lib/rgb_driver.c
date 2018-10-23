#include <rgb_driver.h>

/* Struct to hold rgb information */
struct rgb_driver {
    /* timer to use  */
    uint32_t timer;

    /* This is tick count used for configuring the main timer */
    uint32_t timer_period;

    /* Pointers to structs for respective timer config */
    Timer_A_PWMConfig red_pwm_config;
    Timer_A_PWMConfig green_pwm_config;
    Timer_A_PWMConfig blue_pwm_config;

    /* Used to keep track of which rgb is selected: board or booster pack */
    uint32_t rgb_set;

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
};

/* Actual struct used for code */
struct rgb_driver _rgb_driver_;

/* port2 mapping information */
uint8_t port2_mapping[] =
{
 PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE , PM_NONE
};

/* port 5 mapping information (might not actually work for my purposes) */
uint8_t port5_mapping[] =
{
 PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE, PM_NONE , PM_NONE
};


/* Prototypes for helper funcs*/
static void set_ports();
static void set_pins();
static void set_port_map();
static void set_as_output();
static uint32_t map_intensity(uint32_t intensity);
static void init_timer_defaults();

/*
 * rgb_set can be RGB_BOOSTER_PACK or RGB_EVAL_BOARD
 * pd can be any value, but make sure it's the same as your main timer config period
 * timer doesn't really matter right now, but only use TIMER_A0_BASE, in future this will be configurable
 *
 * Returns 1 if everything is good, otherwise returns ERR_RGB_SET_NOT_EXIST
 */
int rgb_init_rgb_driver(uint32_t rgb_set, uint32_t pd, uint32_t timer)
{
    /* exit if the right led set isn't selected */
    if ((rgb_set != RGB_EVAL_BOARD) && (rgb_set != RGB_BOOSTER_PACK))
        return ERR_RGB_SET_NOT_EXIST;

    rgb_set_period(pd);
    init_timer_defaults();
    _rgb_driver_.timer = timer;
    _rgb_driver_.rgb_set = rgb_set;

    /* set port and pins for leds */
    set_ports();
    set_pins();

    /* now set pins as output */
    set_as_output();

    /* configure port mapping */
    set_port_map();

    /* initialize all to 0 duty cycle */
    rgb_set_duty_cycle(RGB_DRIVER_ALL, 0);
    rgb_start(RGB_DRIVER_ALL);

    return 1;
}

/* Takes input 0 to 255 and then maps the value to the [0, period]
 * Use like Arduino analogWrite
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
int rgb_set_intensity(rgb_led_color color, uint32_t intensity)
{
    if ( (color != RGB_DRIVER_RED) && (color != RGB_DRIVER_GREEN) && (color != RGB_DRIVER_BLUE))
        return ERR_COLOR_DOES_NOT_EXIST;

    uint32_t dc = map_intensity(intensity);
    rgb_set_duty_cycle(color, dc);
    return 1;
}

/*
 * Sets the duty cycle in percentages.
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
int rgb_set_duty_cycle_pct(rgb_led_color color, uint32_t pct)
{
    if (pct > 100)
        pct = 100;
    uint32_t dc = (_rgb_driver_.timer_period / 100) * pct;
    return rgb_set_duty_cycle(color, dc);
}

/*
 * Sets the duty cycle directly to dc
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
int rgb_set_duty_cycle(rgb_led_color color, uint32_t dc)
{
    switch(color) {
    case RGB_DRIVER_RED:
        _rgb_driver_.red_pwm_config.dutyCycle = dc;
        break;

    case RGB_DRIVER_GREEN:
        _rgb_driver_.green_pwm_config.dutyCycle = dc;
        break;

    case RGB_DRIVER_BLUE:
        _rgb_driver_.blue_pwm_config.dutyCycle = dc;
        break;

    case RGB_DRIVER_ALL:
        _rgb_driver_.red_pwm_config.dutyCycle = dc;
        _rgb_driver_.green_pwm_config.dutyCycle = dc;
        _rgb_driver_.blue_pwm_config.dutyCycle = dc;
        break;

    default:
        return ERR_COLOR_DOES_NOT_EXIST;
    }
    return 1;
}

/*
 * Starts the respective led
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
int rgb_start(rgb_led_color color)
{
    switch(color) {
    case RGB_DRIVER_RED:
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.red_pwm_config);
        break;

    case RGB_DRIVER_GREEN:
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.green_pwm_config);
        break;

    case RGB_DRIVER_BLUE:
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.blue_pwm_config);
        break;

    case RGB_DRIVER_ALL:
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.red_pwm_config);
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.green_pwm_config);
        Timer_A_generatePWM(_rgb_driver_.timer, &_rgb_driver_.blue_pwm_config);
        break;

    default:
        return ERR_COLOR_DOES_NOT_EXIST;
    }
    return 1;
}

/*
 * Turns off the selected led
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
int rgb_stop(rgb_led_color color)
{
    rgb_set_duty_cycle(color, 0);
    return rgb_start(color);
}

/*
 * Sets the period for _rgb_driver_ and all timers
 * Returns true if the correct rgb_led_color value was inserted otherwise returns ERR_COLOR_DOES_NOT_EXIST
 */
void rgb_set_period(uint32_t pd)
{
    _rgb_driver_.timer_period = pd;
    _rgb_driver_.red_pwm_config.timerPeriod = pd;
    _rgb_driver_.green_pwm_config.timerPeriod = pd;
    _rgb_driver_.blue_pwm_config.timerPeriod = pd;
}

/*
 * Sets the ports for the configured board
 */
static void set_ports()
{
    if (_rgb_driver_.rgb_set == RGB_EVAL_BOARD) {
        _rgb_driver_.red_led_port   = GPIO_PORT_P2;
        _rgb_driver_.green_led_port = GPIO_PORT_P2;
        _rgb_driver_.blue_led_port  = GPIO_PORT_P2;
    } else if (_rgb_driver_.rgb_set == RGB_BOOSTER_PACK) {
        _rgb_driver_.red_led_port   = GPIO_PORT_P2; // pin 6
        _rgb_driver_.green_led_port = GPIO_PORT_P2; // pin 4
        _rgb_driver_.blue_led_port  = GPIO_PORT_P5; // pin 6
    }
}

/*
 * sets the pins for the respected board
 */
static void set_pins()
{
    if (_rgb_driver_.rgb_set == RGB_EVAL_BOARD) {
        _rgb_driver_.red_led_pin   = GPIO_PIN0;
        _rgb_driver_.green_led_pin = GPIO_PIN1;
        _rgb_driver_.blue_led_pin  = GPIO_PIN2;
    } else if (_rgb_driver_.rgb_set == RGB_BOOSTER_PACK) {
        _rgb_driver_.red_led_pin   = GPIO_PIN6;
        _rgb_driver_.green_led_pin = GPIO_PIN4;
        _rgb_driver_.blue_led_pin  = GPIO_PIN6;
    }
}

/*
 * Configure port mapping for the respective board
 *
 * *** Does not work for Port 5, so need to reconfigure for BOOSTER Pack
 */
static void set_port_map()
{
    if (_rgb_driver_.rgb_set == RGB_EVAL_BOARD) {
        port2_mapping[0] = PM_TA0CCR1A;
        port2_mapping[1] = PM_TA0CCR2A;
        port2_mapping[2] = PM_TA0CCR3A;

        MAP_PMAP_configurePorts((const uint8_t *) port2_mapping, PMAP_P2MAP, 1,
            PMAP_DISABLE_RECONFIGURATION);

    } else if (_rgb_driver_.rgb_set == RGB_BOOSTER_PACK) {
        port2_mapping[6] = PM_TA0CCR1A;
        port2_mapping[4] = PM_TA0CCR2A;
        port5_mapping[6] = PM_TA0CCR3A;

        MAP_PMAP_configurePorts((const uint8_t *) port2_mapping, PMAP_P2MAP, 1,
            PMAP_DISABLE_RECONFIGURATION);

        MAP_PMAP_configurePorts((const uint8_t *) port5_mapping, PMAP_P5MAP, 1,
            PMAP_DISABLE_RECONFIGURATION);

    }
}

/*
 * Set the pins as output for the respective board
 */
static void set_as_output()
{
    if (_rgb_driver_.rgb_set == RGB_EVAL_BOARD) {
        MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
           _rgb_driver_.red_led_pin | _rgb_driver_.green_led_pin | _rgb_driver_.blue_led_pin,
           GPIO_PRIMARY_MODULE_FUNCTION);
    } else if (_rgb_driver_.rgb_set == RGB_BOOSTER_PACK) {
        MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
           _rgb_driver_.red_led_pin | _rgb_driver_.green_led_pin,
           GPIO_PRIMARY_MODULE_FUNCTION);

        MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P5,
           _rgb_driver_.blue_led_pin, GPIO_PRIMARY_MODULE_FUNCTION);
    }
}

/*
 * Function to actually do the mapping.
 * Maps values [0, 255] to [0, timer_period]
 */
static uint32_t map_intensity(uint32_t intensity)
{
  if (intensity > 255)
      intensity = 255;
  return ( (intensity - 0) * (_rgb_driver_.timer_period - 0) ) / 255;
}

/*
 * Configure default timer parameters
 * default_timer is used as a quick and dirty way to configue the timer because
 * I have written a couple thousand lines of driver code and need to finish homework
 */
static void init_timer_defaults()
{
    Timer_A_PWMConfig default_timer =
    {
            TIMER_A_CLOCKSOURCE_SMCLK,
            TIMER_A_CLOCKSOURCE_DIVIDER_1,
            _rgb_driver_.timer_period,          // roughly 10ms period with SMCLK = 3MHz
            TIMER_A_CAPTURECOMPARE_REGISTER_1,
            TIMER_A_OUTPUTMODE_RESET_SET,
            0 //
    };

    /* crude and easy way of setting default values */
    _rgb_driver_.red_pwm_config = default_timer;
    _rgb_driver_.green_pwm_config = default_timer;
    _rgb_driver_.blue_pwm_config = default_timer;

    _rgb_driver_.red_pwm_config.compareRegister = TIMER_A_CAPTURECOMPARE_REGISTER_1;
    _rgb_driver_.green_pwm_config.compareRegister = TIMER_A_CAPTURECOMPARE_REGISTER_2;
    _rgb_driver_.blue_pwm_config.compareRegister = TIMER_A_CAPTURECOMPARE_REGISTER_3;
}
