/*
 * project5.h
 *
 *  Created on: Nov 27, 2018
 *      Author: druep
 */

#ifndef PROJECT5_H_
#define PROJECT5_H_

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>

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
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include "LcdDriver/HAL_MSP_EXP432P401R_Crystalfontz128x128_ST7735.h"
#include <img/lotr_tree_splash_screen.h>

/* Board Header file */
#include "Board.h"

/* Custom Buzzer Driver */
#include "buzzer_driver.h"

#define TASKSTACKSIZE   1000
/*************************************************************/
/*              Task Properties                              */
/*************************************************************/
Task_Struct TSK_STRCT_process_accel, TSK_STRCT_update_lcd, TSK_STRCT_update_temp;
Task_Handle TSK_HDL_adc, TSK_HDL_lcd, TSK_HDL_temp;
Char TSK_STK_accel[TASKSTACKSIZE], TSK_STK_lcd[TASKSTACKSIZE], TSK_STK_temp[TASKSTACKSIZE];

/*************************************************************/
/*              Global Semaphores                            */
/*************************************************************/
Semaphore_Struct SEMSTRUCT_update_LCD;
Semaphore_Handle SEMHDL_update_LCD;

Semaphore_Struct SEMSTRUCT_update_accel;
Semaphore_Handle SEMHDL_update_accel;

Semaphore_Struct SEMSTRUCT_update_temp;
Semaphore_Handle SEMHDL_update_temp;

/*************************************************************/
/*              Hardware Config                              */
/*************************************************************/

// initialize LCD screen
Void LCD_init();

/*************************************************************/
/*              Clock Tasks                                  */
/*************************************************************/
/* Clock Stuff */
//Clock_Struct clock_accel_struct, clock_splash_scrn_struct, clock_buzzer_struct;
Clock_Struct clock_splash_scrn_struct, clock_accel_struct;
Clock_Handle CLK_HDL_accel,  CLK_HDL_splsh_scrn;

// called single time to display custom image for 5 seconds
Void CLK_TSK_LCD_draw_splash_screen();

// updates accelerometer values periodically
Void CLK_TSK_read_accelerometer();



/*************************************************************/
/*              ADC Funcs                                    */
/*************************************************************/
struct accel_data {
    uint16_t x;
    uint16_t y;
    uint16_t z;
};

/*struct accel_data accel_current;
struct accel_data accel_prev;
struct accel_data accel_max;*/

Void TSK_process_accelerometer();
Void ADC_read_accelerometer(struct accel_data* accel);
Void ADC_update_max(struct accel_data* a_curr, struct accel_data* a_max);
uint8_t ADC_device_is_falling(struct accel_data* a_curr, struct accel_data* a_prev);
uint16_t ADC_read_x_axis();
uint16_t ADC_read_y_axis();
uint16_t ADC_read_z_axis();

/*************************************************************/
/*              Button Callbacks                             */
/*************************************************************/
Void BTN1_CB_update_screen();

/*************************************************************/
/*              PWM Info                                     */
/*************************************************************/
PWM_Handle PWM_HDL_buzzer;
#endif /* PROJECT5_H_ */
