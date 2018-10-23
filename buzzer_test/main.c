

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "HAL_I2C.h"
#include "HAL_OPT3001.h"
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>
#include <buzzer_driver.h>


const Timer_A_UpModeConfig upConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/1 = 3MHz
        2500,                                  // 15ms debounce period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_DISABLE ,    // Enable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};



int main()
{
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();
    init_buzzer(upConfig.timerPeriod, TIMER_A1_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_3);
    MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &upConfig);
    MAP_Interrupt_enableMaster();
    set_intensity_buzzer(255);
    start_buzzer();

    uint32_t counter = 0;
    uint8_t dc = 0;
    while(1)
    {
        if (counter == 2500) {
            ++dc;
            set_duty_cycle_pct_buzzer(dc);
            start_buzzer();
            counter = 0;
        }
        ++counter;
    }
}
