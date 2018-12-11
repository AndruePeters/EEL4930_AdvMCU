

#ifndef _JOYSTICK_H_
#define _JOYSTICK_H_
#include <ti/drivers/ADC.h>
#include <driverlib.h>
#include "../board_config/Board.h"
struct JS {
    uint8_t x;
    uint8_t y;
};

/*
 * Initializes joystick
 */
void JS_init();

/*
 * Returns struct containing joystick values
 */

struct JS JS_get();


#endif
