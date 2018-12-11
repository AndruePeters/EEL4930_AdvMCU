/*
 * project5.h
 *

 */

#ifndef PROJECT6_H_
#define PROJECT6_H_

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
#include <ti/grlib/grlib.h>
#include <stdio.h> // sprintf
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include "LcdDriver/HAL_MSP_EXP432P401R_Crystalfontz128x128_ST7735.h"

// image for splash screen
#include <img/lotr_tree_splash_screen.h>

/* Board Header file */
#include "board_config/Board.h"

/* Custom Buzzer Driver */
#include "custom_driver/accelerometer.h"
#include "custom_driver/buzzer_driver.h"
#include "custom_driver/joystick.h"

/* TMP006 Driver */
#include "custom_driver/HAL_I2C.h"
#include "custom_driver/HAL_TMP006.h"

// analysis shows no task needs more than 1000 bytes
#define TASKSTACKSIZE   1000

Void tsk_accel_test();
Task_Handle TSK_HDL_test;
char tsk_accel_test_stack[TASKSTACKSIZE];




#endif /* PROJECT6_H_ */
