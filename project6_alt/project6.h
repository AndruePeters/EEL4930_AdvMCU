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
#include <img/broken_bulb.h>
#include <img/bulb_inverse.h>
#include <img/lightbulb.h>

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
#define GAME_TSK_SIZE 2000
#define DISP_TSK_SIZE 2000
#define NUM_MSGS 2



/*
 * Holds general information for a "pet"
 */

struct pet {
    int32_t health;
    int32_t health_max;

    Graphics_Image* pet_img;
    Graphics_Image* pet_inverse_img;

    uint8_t img_ht;
    uint8_t img_wdt;
    uint8_t x_coord;
    uint8_t y_coord;
};

struct pet_flags {
    uint8_t feed_pet;
    uint8_t water_pet;
    uint8_t subtract_health;
    uint8_t game_won;
    uint8_t too_hot;
};


/*
 * Mailbox stuff
 */
struct MsgSensorObj {
    struct accelerometer ac;
    struct JS js;
    float temp;
};

struct MsgDispObj {
    int32_t health;
    char comment[40];
};

struct MailboxSenMsgObj {
    Mailbox_MbxElem elem;
    struct MsgSensorObj msg;
};

struct MailboxDispMsgObj {
    Mailbox_MbxElem elem;
    struct MsgDispObj msg;
};







Mailbox_Struct MBX_STR_sensors, MBX_STR_pet;
Mailbox_Handle MBX_HDL_sensors, MBX_HDL_pet;
struct MailboxSenMsgObj mbx_sensor_buff[NUM_MSGS];
struct MailboxDispMsgObj mbx_disp_buff[NUM_MSGS];
/* Task stuff */

/*************************************************************/
/*              Sensor Task                                  */
/*************************************************************/
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


/*************************************************************/
/*              Main Game Logic                              */
/*************************************************************/
struct pet_flags pflags;
struct pet pet_bulb;

uint32_t game_counter;
Task_Handle TSK_HDL_pet_game;
char TSK_STK_pet_game[GAME_TSK_SIZE];

Void TSK_play_game();

Clock_Handle CLK_HDL_game_timer;
Void CLK_TSK_game_timer();

Void BTN1_BP_Callback();
Void BTN2_BP_Callback();

/*************************************************************/
/*              Display Task                                 */
/*************************************************************/
Task_Handle TSK_HDL_draw_screen;
char TSK_STK_draw_screen[DISP_TSK_SIZE];

Clock_Handle CLK_HDL_disp_timer;
Void CLK_TSK_disp_timer();

Semaphore_Struct SEMSTRUCT_update_LCD;
Semaphore_Handle SEMHDL_update_LCD;

/*
 * Responsible for drawing to the screen
 */
Void TSK_draw_screen();

/*
 * Draws HUD
 */
void draw_HUD();
void draw_bubble();
void draw_pet();
Void LCD_init();


#endif /* PROJECT6_H_ */
