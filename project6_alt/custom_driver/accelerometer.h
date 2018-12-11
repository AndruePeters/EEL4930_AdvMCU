#ifndef _ACCELEROMETER_H_
#define _ACCELEROMETER_H_


#include <ti/drivers/ADC.h>
#include <driverlib.h>
#include "../board_config/Board.h"


// values for calculating and evaluating ADC and g forces from accelerometer
#define ACCEL_SENSITIVITY   (0.660) // in Volts / g
#define ACCEL_0G_OFFSET     (1.65) // in volts
#define ACCEL_REF_VOL       (3.3)  // in volts
#define ADC_PRECISION       (16384.0) // 2^14
#define ACCEL_G_LIMIT       (0.3)

#define X_y_OFFSET          (85)
#define Y_y_OFFSET          (100)
#define Z_y_OFFSET          (115)
#define CURR_X_OFFSET       (12)
#define MAX_X_OFFSET        (80)


struct accelerometer {
    float x;
    float y;
    float z;
};


/*
 * Initializes accelerometer
 */
void ACCEL_init();

/*
 * Returns a struct containing current accelerometer information.
 * Returning a copy means there's no need for resource mutexes.
 * Disables other hardware interrupts to run until copmletion.
 */
struct accelerometer ACCEL_get();

/*
 *
 */

#endif
