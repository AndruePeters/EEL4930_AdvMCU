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
 * How to Play Game:
 * Click the top button to play the game.
 * Once the game has started, the top button acts as a skip.
 * The button button does a soft reset.
 * Use the joystick to switch answer choices, and press the joystick to select the choice.
 * Once the game is over, your score will be shown.
 *
 * Joysticks are only enabled after the game has been started
 */

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>
#include <question.h>

/******************************************************************************/
/*                          Global Constants / Defines                        */
/******************************************************************************/
#define MCLK_FREQUENCY  3000000;
#define TIMER_PWM_PERIOD 32000  // period used for pwm
#define DutyCycle_1Pct (TIMER_PWM_PERIOD / 100) // duty cycle of 1% of TIMER_PWM_PERIOD
#define JS_SysTickPd 4500000
#define BUZZER_SysTickPd 5000
#define BUZZER_PWM_PD 28000


// this port mapping is required to use these pins for PWM
// the first few are for RGB LEDs, and the last one is for the buzzer
const uint8_t portP2_mapping[] =
{
 PM_TA0CCR1A, PM_TA0CCR2A, PM_TA0CCR3A, PM_NONE, PM_NONE, PM_NONE,PM_NONE , PM_TA0CCR4A
};



/******************************************************************************/
/*                          Custom Types                                      */
/******************************************************************************/

/* keeps track of the  LED being changed */
typedef enum {COLOR_RED, COLOR_GREEN, COLOR_BLUE} color_t;

/* DC means duty cycle. DC_X means X percent duty cycle. DC_10 is 10 percent duty cycle */
typedef enum {DC_0 = 0, DC_10 = 10, DC_20 = 20, DC_30 = 30, DC_40 = 40, DC_50 = 50, DC_60 = 60, DC_70 = 70, DC_80 = 80, DC_90 = 90, DC_100 = 100} dutyCycle_t;


/******************************************************************************/
/*                          Timer Config                                      */
/******************************************************************************/
const Timer_A_UpModeConfig upConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/1 = 3MHz
        45000,                                  // 15ms debounce period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE ,    // Enable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};

// these timers are used for PWM
Timer_A_PWMConfig redPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,          // roughly 10ms period with SMCLK = 3MHz
        TIMER_A_CAPTURECOMPARE_REGISTER_1,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*0 //
};

Timer_A_PWMConfig greenPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_2,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*0
};

Timer_A_PWMConfig bluePWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        TIMER_PWM_PERIOD,
        TIMER_A_CAPTURECOMPARE_REGISTER_3,
        TIMER_A_OUTPUTMODE_RESET_SET,
        DutyCycle_1Pct*0
};

Timer_A_PWMConfig buzzerPWMConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,
        TIMER_A_CLOCKSOURCE_DIVIDER_1,
        BUZZER_PWM_PD,               // roughly 9ms period with SMCLK = 3MHz
        TIMER_A_CAPTURECOMPARE_REGISTER_4,
        TIMER_A_OUTPUTMODE_RESET_SET,
        BUZZER_PWM_PD*0.5       // 50% duty cycle
};




/******************************************************************************/
/*                          Global Mutables                                   */
/******************************************************************************/
volatile bool   GameState = 0;      // 0 for off, 1 for on, and -1 for over
volatile uint32_t quizScore = 0;
Question questions[10];             // array of questions
volatile uint32_t currQ = 0;        // current question

// colorState switches the color we're changing the intensity of
volatile color_t colorState = COLOR_RED;

// dutyCycle_t is the duty cycle (DC) of each color
volatile dutyCycle_t redDC = DC_10;
volatile dutyCycle_t greenDC = DC_10;
volatile dutyCycle_t blueDC = DC_10;

// states used to debounce
volatile unsigned s1ButtonDebounce = 0;
volatile unsigned s2ButtonDebounce = 0;
volatile unsigned jsDebounce = 0;       // used to slow joystick
volatile unsigned jsButtonDebounce = 0; // joystick button press
volatile int jsDirection = 0; // 0 is don't move, 1 is move up, -1 is move down

// used to control SysTick
volatile bool buzzerSysTickInterrupt = 0; // if 1 and SysTickInterrupt is enabled, then it stops SysTick
volatile bool jsSysTickInterrupt = 0;     // if 1 and SysTickInterrupt is enabled, then it stops SysTick

// used to keep track of current selection (AKA selected answer choice)
volatile selection_t selection = OP1;

/* Graphic library context */
Graphics_Context g_sContext;

/* ADC results buffer */
static uint16_t resultsBuffer[2];

/******************************************************************************/
/*                           Function Prototypes                              */
/******************************************************************************/
void init_clock();
void InitADC();
void InitTimer();
void InitDisplay();
void init_hardware();
void InitQuestions();
void ShowGreeting();

// changes selection_t selection
// selections here refer to the answer choice
void ChangeSelection();
void SelectionUp();
void SelectionDown();

// the following are responsible for changing RGB LED color and brightness
inline void ChangeColor();
volatile dutyCycle_t* GetDutyCycle();
inline void CycleIntensity(volatile dutyCycle_t* dc);

void ShowScore();



/*
 * Main function
 */
int main(void)
{
    InitQuestions();
    init_hardware();
    ShowGreeting();

    while(1)
    {
        // clear current interrupts
        MAP_GPIO_clearInterruptFlag(GPIO_PORT_P5, GPIO_PIN1);
        MAP_GPIO_clearInterruptFlag(GPIO_PORT_P4, GPIO_PIN1);
        MAP_GPIO_clearInterruptFlag(GPIO_PORT_P3, GPIO_PIN6);

        MAP_Interrupt_enableInterrupt(INT_PORT3);
        MAP_Interrupt_enableInterrupt(INT_PORT4);
        MAP_Interrupt_enableInterrupt(INT_PORT5);
        MAP_Interrupt_enableInterrupt(INT_TA1_0);

        MAP_Interrupt_enableMaster();
        MAP_PCM_gotoLPM0();
    }
}

/******************************************************************************/
/*                          Initialize                                        */
/******************************************************************************/

// initializes hardware
void init_hardware()
{
    /* Halting WDT and disabling master interrupts */
      MAP_WDT_A_holdTimer();
      MAP_Interrupt_disableMaster();

      /* Set the core voltage level to VCORE1 */
      MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);

      /* Set 2 flash wait states for Flash bank 0 and 1*/
      // these seem to be required for the joystick to update
      MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
      MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);

      init_clock();
      InitDisplay();


      /* GPIO Setup for the RGB LED PINS2.0-2 */
      MAP_PMAP_configurePorts((const uint8_t *) portP2_mapping, PMAP_P2MAP, 1,
          PMAP_DISABLE_RECONFIGURATION);

      /* Set these pins as output */
      MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
               GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2 | GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);


      /* Configure S1 and S2 as input and enable interrupts */
      MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P3, GPIO_PIN6); // s2
      MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P4, GPIO_PIN1); // JS button
      MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P5, GPIO_PIN1); // s1



     // clear current interrupts
      MAP_GPIO_clearInterruptFlag(GPIO_PORT_P5, GPIO_PIN1);
      MAP_GPIO_clearInterruptFlag(GPIO_PORT_P4, GPIO_PIN1);
      MAP_GPIO_clearInterruptFlag(GPIO_PORT_P3, GPIO_PIN5);

      // enable interrupts
      MAP_GPIO_enableInterrupt(GPIO_PORT_P5, GPIO_PIN1);
      MAP_GPIO_enableInterrupt(GPIO_PORT_P4, GPIO_PIN1);
      MAP_GPIO_enableInterrupt(GPIO_PORT_P3, GPIO_PIN5);

      // select low transition
      MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P5, GPIO_PIN1, GPIO_HIGH_TO_LOW_TRANSITION);
      MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P4, GPIO_PIN1, GPIO_HIGH_TO_LOW_TRANSITION);
      MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P3, GPIO_PIN5, GPIO_HIGH_TO_LOW_TRANSITION);


      /* Generate PWM on these pins */
      Timer_A_generatePWM(TIMER_A0_BASE, &redPWMConfig);
      Timer_A_generatePWM(TIMER_A0_BASE, &greenPWMConfig);
      Timer_A_generatePWM(TIMER_A0_BASE, &bluePWMConfig);

      MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &upConfig);
}

// initializes clock
// frequency is set to 6MHz for the scrolling effect as seen on Gameboys
void init_clock()
{
    /* Initializes Clock System */
      MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_6);
      MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
      MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
      MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
      MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
}

// initializes the display
void InitDisplay()
{
    /* Initializes display */
      Crystalfontz128x128_Init();

      /* Set default screen orientation */
      Crystalfontz128x128_SetOrientation(LCD_ORIENTATION_UP);

      /* Initializes graphics context */
      Graphics_initContext(&g_sContext, &g_sCrystalfontz128x128, &g_sCrystalfontz128x128_funcs);
      Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
      Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
      GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
      Graphics_clearDisplay(&g_sContext);
}

// initializes the adc
void InitADC()
{
    /* Configures Pin 6.0 and 4.4 as ADC input */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P6, GPIO_PIN0, GPIO_TERTIARY_MODULE_FUNCTION);
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P4, GPIO_PIN4, GPIO_TERTIARY_MODULE_FUNCTION);

    /* Initializing ADC (ADCOSC/64/8) */
    MAP_ADC14_enableModule();
    MAP_ADC14_initModule(ADC_CLOCKSOURCE_ADCOSC, ADC_PREDIVIDER_64, ADC_DIVIDER_8, 0);

    /* Configuring ADC Memory (ADC_MEM0 - ADC_MEM1 (A15, A9)  with repeat)
     * with internal 2.5v reference */
     MAP_ADC14_configureMultiSequenceMode(ADC_MEM0, ADC_MEM1, true);
     MAP_ADC14_configureConversionMemory(ADC_MEM0,
                ADC_VREFPOS_AVCC_VREFNEG_VSS,
                ADC_INPUT_A15, ADC_NONDIFFERENTIAL_INPUTS);

     MAP_ADC14_configureConversionMemory(ADC_MEM1,
                ADC_VREFPOS_AVCC_VREFNEG_VSS,
                ADC_INPUT_A9, ADC_NONDIFFERENTIAL_INPUTS);

    /* Enabling the interrupt when a conversion on channel 1 (end of sequence)
     *  is complete and enabling conversions */
    MAP_ADC14_enableInterrupt(ADC_INT1);

    /* Enabling Interrupts */
    MAP_Interrupt_enableInterrupt(INT_ADC14);
    MAP_Interrupt_enableMaster();

    /* Setting up the sample timer to automatically step through the sequence
     * convert.
     */
    MAP_ADC14_enableSampleTimer(ADC_AUTOMATIC_ITERATION);

    /* Triggering the start of the sample */
    MAP_ADC14_enableConversion();
    MAP_ADC14_toggleConversionTrigger();

}


// initializes the questions
void InitQuestions()
{
    BuildQuestion(&questions[0], "Bball playr who codes:",  "a) Chris Bosh",        "b) Lebron James",      "c) Dwayne Wade", 1);
    BuildQuestion(&questions[1], "Creator of Linux: ",      "a) Bill Gates",        "b) Steve Jobs",        "c) Linus Torvalds", 3);
    BuildQuestion(&questions[2], "Actor invented wifi:",    "a) Hedy Lamarr",       "b) Marylin Monroe",    "c) John Wayne", 1);
    BuildQuestion(&questions[3], "Year Linux created: ",    "a) 1979",              "b) 1991",              "c) 1983", 2);
    BuildQuestion(&questions[4], "Year Unix created: " ,    "a) 1979",              "b) 1983",              "c) 1984", 1);
    BuildQuestion(&questions[5], "Year OSX Created: ",      "a) 1984",              "b) 1983",              "c) 1979", 1);
    BuildQuestion(&questions[6], "Year of 1 multicore",     "a) 1996",              "b) 2001",              "c) 2005", 2);
    BuildQuestion(&questions[7], "Year of 1st IC: ",        "a) 1955",              "b) 1969",              "c) 1960", 3);
    BuildQuestion(&questions[8], "Cmputer inventor name",   "a) Charles Babbage",   "b) Hendry Ford",       "c) Nikola Tesla", 1);
    BuildQuestion(&questions[9], "Year of 1st progammer",   "a) 1960",              "b) 1957",              "c) 1837", 3);
}

// shows the opening page
void ShowGreeting()
{
    Graphics_drawString(&g_sContext, (int8_t *)("Welcm 2 quiz"), AUTO_STRING_LENGTH, 25, QUESTION_Y_OFFSET, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)("Mispllng is inten"), AUTO_STRING_LENGTH, 5, QUESTION_Y_OFFSET+15, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)("Top button = next"), AUTO_STRING_LENGTH, 5, QUESTION_Y_OFFSET+30, OPAQUE_TEXT);
    Graphics_drawString(&g_sContext, (int8_t *)("Bottom button = rst"), AUTO_STRING_LENGTH, 5, QUESTION_Y_OFFSET+45, OPAQUE_TEXT);
}

/******************************************************************************/
/*                          Helper Funcs                                      */
/******************************************************************************/
//
//  Returns a pointer to the dutyCycle variable associated with colorState
//  This is used for CycleIntensity()
//
volatile dutyCycle_t* GetDutyCycle()
{
    switch(colorState)
    {
    case COLOR_RED:     return &redDC;
    case COLOR_GREEN:   return &greenDC;
    case COLOR_BLUE:    return &blueDC;
    default: return 0;
    }
}

//
//  Cycles colorState.
//  This function should only be called on S1 press
//
void ChangeColor()
{
    // cycle colorstate
    switch ( selection)
    {
    case OP1: colorState = COLOR_RED; break;
    case OP2: colorState = COLOR_GREEN; break;
    case OP3: colorState = COLOR_BLUE; break;
    default:colorState = COLOR_RED; break;
    }

}

//
// Changes the intensity of the light
//
void CycleIntensity(volatile dutyCycle_t* dc)
{
    // cycles the intesnity flag
    switch(*dc)
    {
    case DC_0:  (*dc) = DC_10; break;
    case DC_10: (*dc) = DC_20; break;
    case DC_20: (*dc) = DC_30; break;
    case DC_30: (*dc) = DC_40; break;
    case DC_40: (*dc) = DC_50; break;
    case DC_50: (*dc) = DC_60; break;
    case DC_60: (*dc) = DC_70; break;
    case DC_70: (*dc) = DC_80; break;
    case DC_80: (*dc) = DC_90; break;
    case DC_90: (*dc) = DC_100; break;
    case DC_100: (*dc) = DC_0; break;
    default: (*dc) = DC_10; break;
    }

    // updates PWMConfig dutycycle and generates the PWM
    switch ( colorState )
    {
    case COLOR_RED:
    {
        redPWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &redPWMConfig);
        break;
    }
    case COLOR_GREEN:
    {
        greenPWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &greenPWMConfig);
        break;
    }
    case COLOR_BLUE:
    {
        bluePWMConfig.dutyCycle = DutyCycle_1Pct * (int)(*dc);
        Timer_A_generatePWM(TIMER_A0_BASE, &bluePWMConfig);
        break;
    }
    default:
    {
        redPWMConfig.dutyCycle =      0;
        greenPWMConfig.dutyCycle =    0;
        bluePWMConfig.dutyCycle =     0;
        break;
    }
    }
} // end CycleIntensity

// changes selection up or down
void ChangeSelection()
{
    EraseCursor(&g_sContext, selection);
    switch(jsDirection)
    {
    case -1:    SelectionDown(); break;
    case 0:     break;
    case 1:     SelectionUp();  break;
    default: break;
    }
    DrawCursor(&g_sContext, selection);
}

// moves selection down
void SelectionDown()
{
    switch(selection)
    {
    case OP1:   selection = OP2; break;
    case OP2:   selection = OP3; break;
    case OP3:   selection = OP1; break;
    default:    selection = OP1; break;
    }
}

// moves selection up
void SelectionUp()
{
    switch(selection)
    {
    case OP1:   selection = OP3; break;
    case OP2:   selection = OP1; break;
    case OP3:   selection = OP2; break;
    default:    selection = OP1; break;
    }
}

// displays final score
void ShowScore()
{
    char string[20];
    sprintf(string, "Final Score:  %5d", quizScore);
    Graphics_clearDisplay(&g_sContext);
    Graphics_drawString(&g_sContext, (int8_t *)string, AUTO_STRING_LENGTH, QUESTION_X_OFFSET, QUESTION_Y_OFFSET, OPAQUE_TEXT);

}
/******************************************************************************/
/*                      Interrupt Handlers                                    */
/******************************************************************************/

//
// Handles S2
// When pressed, a soft reset is performed
//
//
void PORT3_IRQHandler(void)
{
    uint32_t status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P3);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P3, status);

    /* Handles S1 button press */
    if ( status & GPIO_PIN5)
    {
        if ( s1ButtonDebounce == 0)
        {
            s1ButtonDebounce = 1;
            ResetCtl_initiateSoftReset();
            MAP_Interrupt_disableInterrupt(INT_PORT3);
            MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }
    }
}

//
// Handles Joystick Button
// If the game is "on", gameState == 1, then it submits and checks the answer
void PORT4_IRQHandler(void)
{
    uint32_t status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P4);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P4, status);

    /* Handles JS button press */
    if ( status & GPIO_PIN1)
    {
        if ( jsButtonDebounce == 0)
        {
            jsButtonDebounce = 1;
            if ( GameState )
            {
                // go through all the questions
                // less than 9 is chosen, because of how currQ increments. An out of bounds issue will occur because
                // with currQ < 10, ++currQ makes currQ = 10. Then it will try to display the question at questions[10], which is out of bounds
                if ( currQ < 9)
                {
                    if ( GetOption(&questions[currQ], selection) == questions[currQ].ans)
                    {
                        ChangeColor();
                        CycleIntensity(GetDutyCycle());
                        ++quizScore;
                    }
                    else
                    {
                        buzzerSysTickInterrupt = 1;
                        buzzerPWMConfig.dutyCycle = BUZZER_PWM_PD*.5;
                        Timer_A_generatePWM(TIMER_A0_BASE, &buzzerPWMConfig);
                        MAP_SysTick_setPeriod(BUZZER_SysTickPd);
                        MAP_SysTick_enableModule();
                        MAP_SysTick_enableInterrupt();
                    }
                    ++currQ;
                    DisplayQuestion(&questions[currQ], &g_sContext);
                    selection = OP1;
                }
                else
                // the match is now over
                {
                    ShowScore();
                }
            }
            MAP_Interrupt_disableInterrupt(INT_PORT4);
            MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }
    }
}

//
//  S1 Button Debounce
//  When S1 is used to cycle the questions and submit the answers
void PORT5_IRQHandler(void)
{
    uint32_t status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P5);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P5, status);

    /* Handles S1 button press */
    if ( status & GPIO_PIN1)
    {
        if ( s1ButtonDebounce == 0)
        {
            s1ButtonDebounce = 1;

            // start the game and prevent it from going any farther
            if ( GameState == 0 )
            {
                GameState = 1;
                DisplayQuestion(&questions[currQ], &g_sContext);
                InitADC();
            }
            else if ( currQ < 9)
            {
                // skip question
                ++currQ;
                DisplayQuestion(&questions[currQ], &g_sContext);
                selection = OP1;

            }
            else
            {
                ShowScore();
            }
            MAP_Interrupt_disableInterrupt(INT_PORT5);
            MAP_Timer_A_startCounter(TIMER_A1_BASE, TIMER_A_UP_MODE);
        }
    }

}

/*
 * Timer A1 interrupt handler. This handler determines whether to reset button
 * debounce after debounce timer expires.
 */
void TA1_0_IRQHandler(void)
{
    // s1
    if (P5IN & GPIO_PIN1)
    {
        s1ButtonDebounce = 0;
    }
    //s1
    if (P3IN & GPIO_PIN5)
    {
        s2ButtonDebounce = 0;
    }
    // js button
    if (P4IN & GPIO_PIN1)
    {
        jsButtonDebounce = 0;
    }

    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A1_BASE,
                TIMER_A_CAPTURECOMPARE_REGISTER_0);
}


/* This interrupt is fired whenever a conversion is completed and placed in
 * ADC_MEM1. This signals the end of conversion and the results array is
 * grabbed and placed in resultsBuffer */
void ADC14_IRQHandler(void)
{

    uint64_t status;

    status = MAP_ADC14_getEnabledInterruptStatus();
    MAP_ADC14_clearInterruptFlag(status);

    /* ADC_MEM1 conversion completed */
    if(status & ADC_INT1)
    {
        /* Store ADC14 conversion results */
    	resultsBuffer[0] = ADC14_getResult(ADC_MEM0);
    	resultsBuffer[1] = ADC14_getResult(ADC_MEM1);

    	if ( jsDebounce == 0)
    	{
    	    // if the joystick is pushed far enough up
            if ( resultsBuffer[1] > 10000)
            {
                jsDebounce = 1;
                jsDirection = 1;
                ChangeSelection();
                jsSysTickInterrupt = 1;
                MAP_SysTick_setPeriod(JS_SysTickPd);
                MAP_SysTick_enableModule();
                MAP_SysTick_enableInterrupt();
            }
            // if the joystick is pushed far enough down
            else if ( resultsBuffer[1] < 6000)
            {
                jsDebounce = 1;
                jsDirection = -1;
                ChangeSelection();
                jsSysTickInterrupt = 1;

                MAP_SysTick_setPeriod(JS_SysTickPd);
                MAP_SysTick_enableModule();
                MAP_SysTick_enableInterrupt();
            }
            else
            {
                jsDirection = 0;
            }
    	}

    }
}

//
// responsible for slowing down the joystick scrolling and limiting the time of the buzzer
void SysTick_Handler()
{

   if ( jsSysTickInterrupt == 1)
   {
        if ( jsDebounce == 1)
        {
                jsSysTickInterrupt = 0;
                jsDebounce = 0;
                MAP_SysTick_disableInterrupt();
        }
   }

    if ( buzzerSysTickInterrupt == 1)
    {
        buzzerSysTickInterrupt = 0;
        buzzerPWMConfig.dutyCycle = 0;
        Timer_A_generatePWM(TIMER_A0_BASE, &buzzerPWMConfig);
        MAP_SysTick_disableInterrupt();
    }
}
