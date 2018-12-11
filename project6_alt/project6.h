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
#include <ti/sysbios/knl/Mailbox.h>



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
#define SENSOR_TSK_SIZE   1000
#define GAME_TSK_SIZE 1000
#define NUM_MSGS 1
/*
 * Mailbox stuff
 */
struct MsgSensorObj {
    struct accelerometer ac;
    struct JS js;
    float temp;
};

Mailbox_Struct MBX_STR_sensors;
Mailbox_Handle MBX_HDL_sensors;
struct MsgSensorObj mbx_sensor_buff[NUM_MSGS];
/* Task stuff */

/*
 * Update Sensor Task
 */
Task_Handle TSK_HDL_read_sensors;
char TSK_STK_read_sensors[SENSOR_TSK_SIZE];

/*
 * This is the actual thread for the sensor task.
 * Responsible for reading temperatures and then sending them to the game logic.
 */
Void TSK_read_sensors();


/*
 * Retrieves the temperature from the TMP006 module
 */
float TEMP_get();


/*
 * Game Logic Task
 */

Task_Handle TSK_HDL_pet_game;
char TSK_STK_pet_game[GAME_TSK_SIZE];

Void TSK_play_game();
/*
 * Update Display Task
 */

/*
 * Mailboxes
 */



#endif /* PROJECT6_H_ */
