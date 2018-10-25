/*
 * Andrue Peters
 * 10/3/18
 *
 *  Project 2B: Quiz
 *
 *  LED Pins
 *  P1.0 - LED1
 *  P2.0 - RGB_RED      - TIMER_A_CAPTURECOMPARE_REGISTER_1
 *  P2.1 - RGB_GREEN    - TIMER_A_CAPTURECOMPARE_REGISTER_2
 *  P2.2 - RGB_BLUE     - TIMER_A_CAPTURECOMPARE_REGISTER_3
 *
 *  J4.33 - P3.5 - S2
 *  J4.32 - P5.1 - S1
 *  j1.5  - P4.1 - JS_Button
 *  J4.40 - P2.7 - Buzzer
 * Resolution of board is 128x128
 *
 *
 *  Ambient Light Sensor Notes
 *      LUX VALUES
 *      -------------------------------------------
 *      |Description                    | Lux value|
 *      --------------------------------------------
 *      Flashlight directly on:         131040
 *      Light 6 inches above:           1100-1300
 *      Light about 1.5ft above:        300
 *      Dimly lit room in overcast day: 145
 *      Bright room w/ fluorescent:     980
 *
 *
 * All LEDs are on TIMER_A0_BASE
 * Buzzer is on TIMER_A1_BASE
 *
 *
 */

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include "LcdDriver/HAL_MSP_EXP432P401R_Crystalfontz128x128_ST7735.h"
#include <stdio.h>
#include <math.h>
#include <rgb_driver.h>
#include <accelerometer_driver.h>
#include <buzzer_driver.h>
#include <driverlib_aux.h>



/******************************************************************************/
/*                          Global Constants / Defines                        */
/******************************************************************************/
#define TIMER_A0_PERIOD 200
#define TIMER_A1_PERIOD 10000
#define TIMER_A2_PERIOD 1500 // 1ms period


/******************************************************************************/
/*                          Global Variables                                  */
/******************************************************************************/
struct flags_t  {
    uint32_t draw_x_max: 1;
    uint32_t draw_y_max: 1;
    uint32_t draw_z_max: 1;
    uint32_t update_display: 1;
    uint32_t process_accel_data: 1;
    uint32_t device_is_falling: 1;
    uint32_t accel_prev_initialized: 1;
    uint32_t process_light_sensor: 1;
    uint32_t buffer: 24;
};

struct flags_t flags;

/* lcd buffer */
char lcd_buffer[15];

/* Graphic library context */
Graphics_Context g_sContext;

/* store value from light sensor - OPT3001 */
volatile uint32_t lux;
volatile float filteredLux;


/* Store results from accelerometer */
volatile struct accelerometer *curr_accel;
volatile struct accelerometer accel_prev; // used for fall timer
volatile struct accelerometer accel_buffer; // essentially the current struct
volatile struct accelerometer accel_max;

/* used for timing buzzer duration in TIMER A2 */
uint32_t buzzer_overflow_counter;

uint32_t buzzer_duty_cycle = 50;


/******************************************************************************/
/*                          Timer Config                                      */
/******************************************************************************/
/* Timer_A Up Configuration Parameter */
const Timer_A_UpModeConfig sensorCheckTimer =
{
        TIMER_A_CLOCKSOURCE_SMCLK,               // ACLK Clock SOurce
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // ACLK/1 = 3MHz
        TIMER_A2_PERIOD,                                    // 200 tick period
        TIMER_A_TAIE_INTERRUPT_ENABLE,         // Enable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_DISABLE,    // Disable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};

const Timer_A_UpModeConfig timer_A1 =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/1 = 3MHz
        TIMER_A1_PERIOD,                                  //
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_DISABLE ,    // disable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};

Timer_A_PWMConfig lcdPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_A0_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_4,
        TIMER_A_OUTPUTMODE_RESET_SET,
        0       // 50% duty cycle to start
};


/******************************************************************************/
/*                           Function Prototypes                              */
/******************************************************************************/
void init_hardware();
void init_clock();
void init_lcd();
void init_light_sensor();
void init_timers();

void update_lux();
void adjust_lcd_backlight();
void adjust_rgb_duty_cycle();

void draw_curr_accel_data();
inline void draw_accel_x_max();
inline void draw_accel_y_max();
inline void draw_accel_z_max();

static uint32_t map_accel(uint32_t accel_cord);
/* Functions to set flags */
void adc_interrupt_func();
void set_draw_accel_flag();
void set_process_accel_data_flag();

void process_accelerometer();


/*
 * Main function
 */
int main(void)
{
    /*  Halt WDT and disable master interrupts */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();


    /* Initialize hardware */
    init_hardware();
    Interrupt_disableSleepOnIsrExit();
    while(1)
    {
       //
        if (flags.process_accel_data) {
            process_accelerometer();
            adjust_rgb_duty_cycle();
            flags.process_accel_data = 0;
        }

        if (flags.update_display) {
            draw_curr_accel_data();
            flags.update_display = 0;
        }

        if (flags.device_is_falling) {

        }

        if (flags.process_light_sensor) {
            adjust_lcd_backlight();
            update_lux();
            flags.process_light_sensor = 0;
        }

        start_accelerometer();
        MAP_Interrupt_enableInterrupt(INT_TA2_N);
        MAP_Timer_A_startCounter(TIMER_A2_BASE, TIMER_A_UP_MODE);
        MAP_Interrupt_enableMaster();
        MAP_PCM_gotoLPM0();
    }
}


void update_lux()
{
    filteredLux += floor((0.1)*(lux - filteredLux));
    lux = OPT3001_getLux();
}

void adjust_lcd_backlight()
{
    /* Adjust LCD Backlight */
    if (filteredLux < 2000)
        lcdPWMConfig.dutyCycle = 210 - ((2000*0.1) + (filteredLux*0.9))/2000 * 200;
    else
        lcdPWMConfig.dutyCycle = (TIMER_A0_PERIOD * 0.05);
    Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);
}

void process_accelerometer()
{
    if (accel_buffer.x > accel_max.x) {
        accel_max.x = accel_buffer.x;
        flags.draw_x_max = 1;
    }
    if (accel_buffer.y > accel_max.y) {
        accel_max.y = accel_buffer.y;
        flags.draw_y_max = 1;
    }
    if (accel_buffer.z > accel_max.z) {
        accel_max.z = accel_buffer.z;
        flags.draw_z_max = 1;
    }
}

void adjust_rgb_duty_cycle()
{
    rgb_set_duty_cycle(RGB_DRIVER_RED,   map_accel(accel_buffer.x));
    rgb_set_duty_cycle(RGB_DRIVER_GREEN, map_accel(accel_buffer.y));
    rgb_set_duty_cycle(RGB_DRIVER_BLUE,  map_accel(accel_buffer.z));
    rgb_start(RGB_DRIVER_ALL);
}

void adc_interrupt_func()
{
    accel_buffer = (*curr_accel);
    flags.process_accel_data = 1;
    flags.update_display = 1;
    flags.process_light_sensor = 1;

    if (!flags.accel_prev_initialized) {
        accel_prev = accel_buffer;
        flags.accel_prev_initialized = 1;
    }
}




void draw_curr_accel_data()
{

        sprintf(lcd_buffer, "X: %5d", accel_buffer.x);
        Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 8, 64, 20, OPAQUE_TEXT);

        sprintf(lcd_buffer, "Y: %5d", accel_buffer.y);
        Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 8, 64, 30, OPAQUE_TEXT);

        sprintf(lcd_buffer, "Z: %5d", accel_buffer.z);
        Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 8, 64, 40, OPAQUE_TEXT);

        /* Only draw the max if we need to */
        /* testing shows this greatly impacts performance */
        if (flags.draw_x_max) {
            draw_accel_x_max();
            flags.draw_x_max = 0;
        }
        if (flags.draw_y_max) {
            draw_accel_y_max();
            flags.draw_y_max = 0;
        }
        if (flags.draw_z_max) {
            draw_accel_z_max();
            flags.draw_z_max = 0;
        }
}

void draw_accel_x_max()
{
    sprintf(lcd_buffer, "Max X: %5d", accel_max.x);
    Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 13, 64, 60, OPAQUE_TEXT);
}
void draw_accel_y_max()
{
    sprintf(lcd_buffer, "Max Y: %5d", accel_max.y);
    Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 13, 64, 70, OPAQUE_TEXT);
}
void draw_accel_z_max()
{
    sprintf(lcd_buffer, "Max Z: %5d", accel_max.z);
    Graphics_drawStringCentered(&g_sContext, (int8_t *)lcd_buffer, 13, 64, 80, OPAQUE_TEXT);
}


/*
 * The ADC is configured with a 14bit precision, so the max value is 16383
 * The lowest value I've seen is 5500, so I'll drop it down to 5000
 * Using  affine transformation
 */
static uint32_t map_accel(uint32_t accel_cord)
{
    if (accel_cord < 5000)
        accel_cord = 5000;
    else if (accel_cord > 12000)
        accel_cord = 12000;
    return (accel_cord - 5000) * (float)(rgb_get_period() - 0) / (12000 - 7000);

}





/******************************************************************************/
/*                          Initialize                                        */
/******************************************************************************/
void init_hardware()
{
    init_clock();
    init_lcd();
    init_timers();
    init_accelerometer();
    start_accelerometer();
    set_func_pointer(adc_interrupt_func);
    curr_accel = get_accel_data();


    /* Configure port mapping for Port 2 */
    PMAP_configurePort( GPIO_PIN6, PM_TA0CCR4A, PMAP_P2MAP, PMAP_ENABLE_RECONFIGURATION);

    /* Configure PIN 6 for LCD backlight */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
             GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);
    Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);



    rgb_init_rgb_driver(RGB_EVAL_BOARD, TIMER_A0_PERIOD, TIMER_A0_BASE);
    rgb_set_duty_cycle_pct(RGB_DRIVER_ALL,50);
    rgb_start(RGB_DRIVER_ALL);

    init_buzzer(TIMER_A1_PERIOD, TIMER_A1_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_1);
    init_light_sensor();
    __delay_cycles(100000);


}

void init_clock()
{
    /* Set the core voltage level to VCORE1 */
    MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);

    /* Set 2 flash wait states for Flash bank 0 and 1*/
    MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
    MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);

    /* Set clocks */
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_48);
    MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);


}

void init_lcd()
{
    /* Initializes display */
    Crystalfontz128x128_Init();

    /* Set default screen orientation */
    Crystalfontz128x128_SetOrientation(0);

    /* Initializes graphics context */
    Graphics_initContext(&g_sContext, &g_sCrystalfontz128x128, &g_sCrystalfontz128x128_funcs);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_clearDisplay(&g_sContext);
    //Graphics_drawStringCentered(&g_sContext, (int8_t *)"Light Sensor:", AUTO_STRING_LENGTH, 64, 30, OPAQUE_TEXT);
}



void init_light_sensor()
{
    /* Initialize I2C comm */
    Init_I2C_GPIO();
    I2C_init();

    /* Initialize OPT3001 digital ambient light sensor */
    OPT3001_init();

    __delay_cycles(100000);
}

void init_timers()
{
    /* Configure PWM for LCD display */
    Timer_A_generatePWM(TIMER_A0_BASE, &lcdPWMConfig);
    MAP_Timer_A_configureUpMode(TIMER_A2_BASE, &sensorCheckTimer);
    MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &timer_A1);
    MAP_Timer_A_startCounter(TIMER_A2_BASE, TIMER_A_UP_MODE);
    MAP_Interrupt_enableInterrupt(INT_TA2_N);
}



/*
 * Update lux and use a simple low pass filter
 */


/******************************************************************************/
/*                      Interrupt Handlers                                    */
/******************************************************************************/

/*
 *  Timer A2 is used to check the light sensor and accelerometer for fall detection
 */

void TA2_N_IRQHandler(void)
{
    Timer_A_clearInterruptFlag(TIMER_A2_BASE);

    /* Control Buzzer Time */
    /* Buzzer is set to buzz for 0.5 seconds
     * The clock is at 3MHz
     * 1/3MHz * 1500 = 0.0005
     */
    if (flags.device_is_falling) {
        if (buzzer_overflow_counter == 0) {
            set_duty_cycle_pct_buzzer(80);
            start_buzzer();
            buzzer_overflow_counter = 1;
        } else if (buzzer_overflow_counter == 100) {
            buzzer_duty_cycle = 50;
            buzzer_overflow_counter = 0;
            stop_buzzer();
            flags.device_is_falling = 0;
        } else {
            ++buzzer_overflow_counter;
            set_duty_cycle_pct_buzzer(80);
            start_buzzer();
        }

    }


    /* evaluate acceleration if accel_prev has been initialized */
    /* the values of +- 3000 were chosen by experimentation */
    /* the case of 12000 is there because a value that large is a result of large acceleration
     * and the device Z axis rests at 10000 or so
     */
    if (flags.accel_prev_initialized) {
        if ((accel_buffer.x > accel_prev.x + 3000) || (accel_buffer.x < accel_prev.x - 3000) || (accel_buffer.x > 12000)) {
            flags.device_is_falling = 1;
        }

        if ((accel_buffer.y > accel_prev.y + 3000) || (accel_buffer.y < accel_prev.y - 3000) || (accel_buffer.y > 12000)) {
            flags.device_is_falling = 1;
        }

        if ((accel_buffer.z > accel_prev.z + 3000) || (accel_buffer.z < accel_prev.z - 3000) || (accel_buffer.z > 12000)) {
            flags.device_is_falling = 1;
        }
        accel_prev = accel_buffer;
    }





    MAP_Interrupt_disableInterrupt(INT_TA2_N);
    MAP_Interrupt_disableMaster();
}


