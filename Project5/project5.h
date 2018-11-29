/*
 * project5.h
 *
 *  Created on: Nov 27, 2018
 *      Author: druep
 *
 *      The program does the following. More specific details can be found in README.md and comments
 *      1) First thing to happen is the splash screen pop up. Nothing else can happen until 5 seconds later.
 *      1A) After the 5 seconds, the screen changes and shows sensor values. Temperature updated automatically
 *          only this once. All other updates to temperature happen at the press of a button described in 2).
 *
 *      2) Pressing booster pack button S2 causes the temperature to be updated and drawn on the screen.
 *          Also causes the "max" values to be shown on the screen.
 *
 *      3) AFter the 5 seconds, the accelerometer values are periodically read at a rate of 50Hz.
 *
 *      4) Buzzer sounds when device is found to be falling.
 *
 *      5) When the buzzer is sounded, the current accelerometer is stored into accel_max.
 */

#ifndef PROJECT5_H_
#define PROJECT5_H_

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Timestamp.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Semaphore.h>



#include <driverlib.h>
#include <ti/drivers/GPIO.h>
#include <ti/drivers/ADC.h>
#include <ti/drivers/PWM.h>
// #include <ti/drivers/I2C.h>

/* Graphics library stuff */
#include <grlib.h>
#include <stdio.h> // sprintf
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include "LcdDriver/HAL_MSP_EXP432P401R_Crystalfontz128x128_ST7735.h"

// image for splash screen
#include <img/lotr_tree_splash_screen.h>

/* Board Header file */
#include "Board.h"

/* Custom Buzzer Driver */
#include "buzzer_driver.h"

/* TMP006 Driver */
#include "HAL_I2C.h"
#include "HAL_TMP006.h"

// analysis shows no task needs more than 1000 bytes
#define TASKSTACKSIZE   1000

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

/*************************************************************/
/*              Global Shared Variables                      */
/*************************************************************/

// stores accelerometer data
struct accel_data {
    float x;
    float y;
    float z;
};

// flags to update display
struct display_flags {
    uint8_t disp_accel_max: 1;
    uint8_t disp_accel_curr: 1;
    uint8_t disp_temp: 1;
};


struct display_flags disp_flags = {0, 0, 0};
struct accel_data accel_max;
struct accel_data accel_current;
float temperature; // device temperature

/*************************************************************/
/*              Global Semaphores                            */
/*************************************************************/
// used for updating LCD
// posted: CLK_TSK_read_accelerometer(), and TSK_process_temp_sensor()
// locked: TSK_update_LCD(),
Semaphore_Struct SEMSTRUCT_update_LCD;
Semaphore_Handle SEMHDL_update_LCD;

// used for updating accelerometer
// posted by: LCD_draw_curr_accel()
// locked: TSK_process_accelerometer(),
Semaphore_Struct SEMSTRUCT_update_accel;
Semaphore_Handle SEMHDL_update_accel;

// used for access to  temperature
// posted: TSK_process_temp_sensor(), TSK_process_temp_sensor(), LCD_draw_temperature()
// locked: TSK_process_temp_sensor(), LCD_draw_temperature(),
Semaphore_Struct SEMSTRUCT_temperature;
Semaphore_Handle SEMHDL_temperature;

// used for access to task to update the temperature
// posted: BTN2_BP_Callback()
// locked: TSK_process_temp_sensor()
Semaphore_Struct SEMSTRUCT_update_temp;
Semaphore_Handle SEMHDL_update_temp;

// used for accel_max resource
// posted: ADC_update_max(), LCD_draw_accel_max(),
// locked: ADC_update_max(), LCD_draw_accel_max(),
Semaphore_Struct SEMSTRUCT_accel_max;
Semaphore_Handle SEMHDL_accel_max;

// used for curr resource
// posted: ADC_read_accelerometer(), LCD_draw_curr_accel()
// locked: ADC_read_accelerometer(), LCD_draw_curr_accel()
Semaphore_Struct SEMSTRUCT_accel_curr;
Semaphore_Handle SEMHDL_accel_curr;

// used for accel_max resource
// posted: TSK_process_accelerometer(), TSK_process_temp_sensor(), TSK_update_LCD()
// locked: TSK_process_accelerometer(), TSK_process_temp_sensor(), TSK_update_LCD()
Semaphore_Struct SEMSTRUCT_disp_flags;
Semaphore_Handle SEMHDL_disp_flags;



/*************************************************************/
/*              Task Properties                              */
/*************************************************************/

/*
 * Variables for respective tasks
 * TSK_HDL_adc attached to TSK_process_accelerometer()
 * TSK_HDL_temp attached to TSK_update_LCD()
 * TSK_HDL_process_temp attached to TSK_process_temp_sensor()
 *
 */
Task_Struct TSK_STRCT_process_accel, TSK_STRCT_update_lcd, TSK_STRCT_process_temp;
Task_Handle TSK_HDL_adc, TSK_HDL_lcd, TSK_HDL_temp, TSK_HDL_process_temp;
Char TSK_STK_accel[TASKSTACKSIZE], TSK_STK_lcd[TASKSTACKSIZE], TSK_STK_process_temp[TASKSTACKSIZE];




/*************************************************************/
/*              Hardware Config                              */
/*************************************************************/

// initialize LCD screen
Void LCD_init();

/*************************************************************/
/*              Clock Tasks                                  */
/*************************************************************/
/* Clock Stuff */

// for oneshot clock. There was no need to dynamically allocate with Clock_create
// since it only runs once
Clock_Struct clock_splash_scrn_struct;

// for periodic task to update accelerometer
Clock_Handle CLK_HDL_accel;

// called single time to display custom image for 5 seconds
Void CLK_TSK_LCD_draw_splash_screen();

// updates accelerometer values periodically
Void CLK_TSK_read_accelerometer();



/*************************************************************/
/*              ADC Funcs                                    */
/*************************************************************/
// task that reads and updates accelerometer
Void TSK_process_accelerometer();

// read current accelerometer values and store in accel
// in only threadsafe for accel_curr
Void ADC_read_accelerometer(struct accel_data* accel);

// updates max display by setting comparing to a_curr
Void ADC_update_max(struct accel_data* a_curr, struct accel_data* a_max);

// returns 1 if device is falling, otherwise 0
uint8_t ADC_device_is_falling(struct accel_data* a_curr, struct accel_data* a_prev);

// reads x axis for accelerometer and returns results in g's
float ACCEL_read_x_axis();

// reads y axis for accelerometer and returns results in g's
float ACCEL_read_y_axis();

// reads z axis for accelerometer and returns results in g's
float ACCEL_read_z_axis();

// takes in raw ADC value and converts it to g's
float ACCEL_convert_to_g(ADC_Handle handle, uint16_t adv_val);


/*************************************************************/
/*              Button Callbacks                             */
/*************************************************************/
// attached to booster pack button s2 as an interrupt routine
// posts SEMHDL_update_temp
Void BTN2_BP_Callback();


/*************************************************************/
/*              Temp Sensor                                  */
/*************************************************************/

// main task for updating temperature sensor
Void TSK_process_temp_sensor();

/*************************************************************/
/*              Update LCD Funcs                             */
/*************************************************************/

// main task for drawing LCD
Void TSK_update_LCD();

// draws accel_max values on LCD
void LCD_draw_accel_max();

// draws accel_curr values on LCD
void LCD_draw_curr_accel();

// draws temperature on LCD
void LCD_draw_temperature();

// draws labels on LCD
void LCD_draw_labels();

// LCD Style

// Black foreground, white background, and smallest font possible
void LCD_set_style_default();

// Red foreground, white background, big numbers
void LCD_set_style_temperature();

// red foreground, white background, smallest font possible
void LCD_set_style_acceleration();


#endif /* PROJECT5_H_ */
