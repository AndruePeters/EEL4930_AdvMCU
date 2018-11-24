
#ifndef TOUCH_H_
#define TOUCH_H_

/*
 * SW1 pin definitions.
 */
#define TOUCH_SW1_PORT          GPIO_PORT_P1
#define TOUCH_SW1_PIN           GPIO_PIN1

/* X+ definitions. ---> PIn 24 on LaunchPad ---> P4.0, A13 on MSp432*/

#define TOUCH_X_PLUS_PORT       GPIO_PORT_P4
#define TOUCH_X_PLUS_PIN        GPIO_PIN0
#define TOUCH_X_PLUS_INPUT      ADC_INPUT_A13
#define TOUCH_X_PLUS_MEMORY     ADC_MEM1
#define TOUCH_X_PLUS_IFG        ADC_INT1

/* Y+ definitions. ----> PIn 23 on LaunchPad ---> P6.1, A14 on MSP432*/
#define TOUCH_Y_PLUS_PORT       GPIO_PORT_P6
#define TOUCH_Y_PLUS_PIN        GPIO_PIN1
#define TOUCH_Y_PLUS_INPUT      ADC_INPUT_A14
#define TOUCH_Y_PLUS_MEMORY     ADC_MEM0
#define TOUCH_Y_PLUS_IFG        ADC_INT0

/* X- definitions. --> Pin 31 on LaunchPad --> P3.7 on MSP432*/
#define TOUCH_X_MINUS_PORT      GPIO_PORT_P3
#define TOUCH_X_MINUS_PIN       GPIO_PIN7

/* Y- definitions. --> Pin 11 on LaunchPad  --> P3.6 on MSP432*/
#define TOUCH_Y_MINUS_PORT      GPIO_PORT_P3
#define TOUCH_Y_MINUS_PIN       GPIO_PIN6

/* Threshold for detecting if there is a touch. */
#define TOUCH_THRESHOLD 15000

/* Touch screen calibration value. */
#define TOUCH_X_MINIMUM (750 << 2)
#define TOUCH_X_MAXIMUM (3500 << 2)
#define TOUCH_Y_MINIMUM (1130 << 2)
#define TOUCH_Y_MAXIMUM (3400 << 2)

#define TOUCH_OVERSAMPLE               8
#define TOUCH_AVERAGE_DIVISOR          3

#define TOUCH_CALIBRATION_KEY       0xA5A5A5A5

/*
 * Radius of calibration circles.
 */
#define TOUCH_CALIBRATION_RADIUS    16

/*
 * Typedef for touch context structure.
 */
typedef struct touch_context
{
    bool touch;
    uint16_t x;
    uint16_t y;
} touch_context;

typedef struct touch_calibration
{
    uint16_t xMin;
    uint16_t xMax;
    uint16_t yMin;
    uint16_t yMax;
    uint32_t key;
} touch_calibration;

extern touch_context touch_currentTouch;

/* Function prototypes. */
extern void touch_initInterface(void);
extern void touch_updateCurrentTouch(touch_context *data);
extern void touch_calibrate(void);

#endif /* TOUCH_H_ */
