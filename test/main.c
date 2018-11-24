#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>

#define MCLK_FREQUENCY 3000000
#define PWM_PERIOD (MCLK_FREQUENCY/5000)
volatile unsigned int brightnessSelect = 0;


/* TimerA UpMode Configuration Parameter */
const Timer_A_UpModeConfig upConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // SMCLK/1 = 3MHz
        45000,                                  // 15ms debounce period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE ,    // Enable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};


const Timer_A_UpModeConfig TA2upConfig =
{
        TIMER_A_CLOCKSOURCE_SMCLK,              // SMCLK Clock Source
        TIMER_A_CLOCKSOURCE_DIVIDER_64,         // SMCLK/64 ~ 46.9 kMHz
        46875,                                  // 1s timer period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE ,    // Enable CCR0 interrupt
        TIMER_A_DO_CLEAR                        // Clear value
};

/* Port mapper configuration register */    //////?????????????????????????????? What does this do
const uint8_t port_mapping[] =
{
    //Port P2:
    PM_TA0CCR1A, PM_TA0CCR2A, PM_TA0CCR3A, PM_NONE, PM_TA1CCR1A, PM_NONE, PM_NONE, PM_NONE
};


/* Graphic library context */
Graphics_Context g_sContext;

/* ADC results buffer */
static uint16_t resultsBuffer;

volatile int8_t QuestionSelect = 0;
volatile int8_t Location = 0;
volatile int8_t clear = 0;
volatile int8_t question = 0;
volatile int8_t score = 0;
volatile int8_t answerTrigger = 0;
volatile unsigned int ii = 0;
volatile float currentBrightness = 0;
char array[50][21], finalScore[16], skipString[10], scoreString[10];
uint8_t answerArray[] = {2, 2, 1, 2, 2, 2, 0, 1, 2, 1};



Graphics_Rectangle selA = {
    1,
    33,
    7,
    27
};

Graphics_Rectangle selB = {
    1,
    53,
    7,
    47
};

Graphics_Rectangle selC = {
    1,
    73,
    7,
    67
};




/*
 * Main function
 */
int main(void)
{

    /* Initialize main clock to 3MHz */
        MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_3);
        MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1 );
        MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1 );
        MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1 );


        GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN0);//RED LED set as output
        //GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN2);//BLUE RGB LED set as output
        //GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN0);//RED RGB LED set as output

        MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0);
        MAP_GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN0); // RED
        MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN2);
        MAP_GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN2); // BLUE
        MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN1);
        MAP_GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN1); // GREEN

        /* GPIO Setup for Pins 2.0-2.2 */
        MAP_PMAP_configurePorts((const uint8_t *) port_mapping, PMAP_P2MAP, 1,
            PMAP_DISABLE_RECONFIGURATION);

        MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P2,
            GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2, GPIO_PRIMARY_MODULE_FUNCTION);

        /* Confinguring P1.1 & P1.4 as an input and enabling interrupts */
        MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
        MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
        MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4);
        MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P1, GPIO_PIN1 | GPIO_PIN4, GPIO_HIGH_TO_LOW_TRANSITION);

        //GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1,GPIO_PIN1);//S1 set as Input
        //GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1,GPIO_PIN4);//S2 set as Input

        /* Configure TimerA0 without Driverlib (CMSIS style register access) */
           TIMER_A0->CCR[0] = PWM_PERIOD;
           TIMER_A0->CCTL[1] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR1 reset/set
           TIMER_A0->CCR[1] = PWM_PERIOD * (255/255);         // CCR1 PWM duty cycle
           TIMER_A0->CCTL[2] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR2 reset/set
           TIMER_A0->CCR[2] = PWM_PERIOD * (0/255);           // CCR2 PWM duty cycle
           TIMER_A0->CCTL[3] = TIMER_A_CCTLN_OUTMOD_7;                      // CCR3 reset/set
           TIMER_A0->CCR[3] = PWM_PERIOD * (0/255);           // CCR3 PWM duty cycle
           TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_MC__UP | TIMER_A_CTL_CLR;  // SMCLK, up mode, clear TAR

       /* Configuring TimerA1 and TimerA2 for Up Mode  using Driverlib*/
       MAP_Timer_A_configureUpMode(TIMER_A1_BASE, &upConfig);

    /* Halting WDT and disabling master interrupts */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();

    /* Set the core voltage level to VCORE1 */
    MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);

    /* Set 2 flash wait states for Flash bank 0 and 1*/
    MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
    MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);

    /* Initializes Clock System */
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_48);
    MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);

    /* Initializes display */
    Crystalfontz128x128_Init();

    /* Set default screen orientation */
    Crystalfontz128x128_SetOrientation(LCD_ORIENTATION_UP);

    /* Initializes graphics context */
    Graphics_initContext(&g_sContext, &g_sCrystalfontz128x128, &g_sCrystalfontz128x128_funcs);
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_WHITE);
    GrContextFontSet(&g_sContext, &g_sFontFixed6x8);
    Graphics_clearDisplay(&g_sContext);

    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN7); // SET BUZZER AS OUTPUT

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

    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0);

    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN2);

    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN1);

// Turn off all LED's:
    TIMER_A0->CCR[1] = PWM_PERIOD * (0/255);              // CCR1 PWM duty cycle
    TIMER_A0->CCR[2] = PWM_PERIOD * (0/255);                // CCR2 PWM duty cycle
    TIMER_A0->CCR[3] = PWM_PERIOD * (0/255);                // CCR3 PWM duty cycle

    questionArray();
    while(1)
    {
        MAP_PCM_gotoLPM0();
    }
}

/* This interrupt is fired whenever a conversion is completed and placed in
 * ADC_MEM1. This signals the end of conversion and the results array is
 * grabbed and placed in resultsBuffer */
void ADC14_IRQHandler(void)
{
    answerTrigger = 0; // prevents infinite loop
    uint64_t status;

    status = MAP_ADC14_getEnabledInterruptStatus();
    MAP_ADC14_clearInterruptFlag(status);

    /* ADC_MEM1 conversion completed */
    if(status & ADC_INT1)
    {
        /* Store ADC14 conversion results */
        resultsBuffer = ADC14_getResult(ADC_MEM1);

        /* BUTTON ONE */
        if(!(P5IN & BIT1)){
            question++;
            //answerTrigger = 0;
            Location = 0;

            Graphics_clearDisplay(&g_sContext);
        }

        /* BUTTON TWO */
        if(!(P3IN & BIT5)){
            question = 0;
            score = 0;
            //answerTrigger = 0;
            Location = 0;

            Graphics_clearDisplay(&g_sContext);
        }

        char string[10];
        if(resultsBuffer < 3000){
            Location++;
            clear = 1;
            if(Location > 2){
                Location = 0;
            }
        }
        else if(resultsBuffer > 14000){
            Location--;
            clear = 1;
            if(Location < 0){
                Location = 2;
            }
        }

        if(clear == 1){
            Graphics_clearDisplay(&g_sContext);
            clear = 0;
        }

        if(Location == 0){
            Graphics_drawRectangle(&g_sContext,
                                      &selA);
        }
        else if(Location == 1){
            Graphics_drawRectangle(&g_sContext,
                                      &selB);
        }
        else if(Location == 2){
            Graphics_drawRectangle(&g_sContext,
                                      &selC);
        }

        if(question < 10){

                    Graphics_drawStringCentered(&g_sContext,
                                                    (int8_t *)&array[4*question][0],
                                                    AUTO_STRING_LENGTH,
                                                    60,
                                                    10,
                                                    OPAQUE_TEXT);

                    Graphics_drawStringCentered(&g_sContext,
                                                    (int8_t *)&array[4*question + 1][0],
                                                    AUTO_STRING_LENGTH,
                                                    60,
                                                    30,
                                                    OPAQUE_TEXT);

                    Graphics_drawStringCentered(&g_sContext,
                                                   (int8_t *)&array[4*question + 2][0],
                                                   AUTO_STRING_LENGTH,
                                                   60,
                                                   50,
                                                   OPAQUE_TEXT);

                    Graphics_drawStringCentered(&g_sContext,
                                                   (int8_t *)&array[4*question + 3][0],
                                                   AUTO_STRING_LENGTH,
                                                   60,
                                                   70,
                                                   OPAQUE_TEXT);


                    sprintf(scoreString, "Score: %d", score);
                    Graphics_drawStringCentered(&g_sContext,
                                                   (int8_t *)scoreString,
                                                   AUTO_STRING_LENGTH,
                                                   35,
                                                   100,
                                                   OPAQUE_TEXT);

                    if(Location == 0){
                        Graphics_drawRectangle(&g_sContext,
                                                  &selA);
                    }
                    else if(Location == 1){
                        Graphics_drawRectangle(&g_sContext,
                                                  &selB);
                    }
                    else if(Location == 2){
                        Graphics_drawRectangle(&g_sContext,
                                                  &selC);
                    }

                }
                else if(question > 9){

                    sprintf(finalScore, "Final score: %d", score);
                    Graphics_drawStringCentered(&g_sContext,
                                                   (int8_t *)finalScore,
                                                   AUTO_STRING_LENGTH,
                                                   60,
                                                   50,
                                                   OPAQUE_TEXT);
                }

                if(!(P4IN & GPIO_PIN1 && answerTrigger == 0)){
                    answerTrigger = 1;

                    if(Location == answerArray[question]){
                        score++;

                        brightnessSelect++;
                        switch(brightnessSelect)
                        {
                            case 0:
                                currentBrightness = .005;
                                break;
                            case 1:
                                currentBrightness = .05;
                                break;
                            case 2:
                                currentBrightness = .2;
                                break;
                            case 3:
                                currentBrightness = .6;
                                break;
                            case 4:
                                currentBrightness = 1;
                                break;
                            default:
                                currentBrightness = 0;
                                brightnessSelect = 0;
                                break;
                        }
                        switch(answerArray[question]){
                                     case 0:  // Red
                                         //GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2); // Turns OFF B LED
                                         //GPIO_toggleOutputOnPin(GPIO_PORT_P2,GPIO_PIN0); // Turns OFF R LED
                                         TIMER_A0->CCR[1] = PWM_PERIOD * currentBrightness;              // CCR1 PWM duty cycle
                                         TIMER_A0->CCR[2] = PWM_PERIOD * (0/255);                // CCR2 PWM duty cycle
                                         TIMER_A0->CCR[3] = PWM_PERIOD * (0/255);                // CCR3 PWM duty cycle
                                         break;
                                     case 1:  // Green
                                         //GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0); // Turns OFF R LED
                                         //GPIO_toggleOutputOnPin(GPIO_PORT_P2,GPIO_PIN1); // Toggle G LED
                                         TIMER_A0->CCR[1] = PWM_PERIOD * (0/255);                // CCR1 PWM duty cycle
                                         TIMER_A0->CCR[2] = PWM_PERIOD * currentBrightness;           // CCR2 PWM duty cycle
                                         TIMER_A0->CCR[3] = PWM_PERIOD * (0/255);                // CCR3 PWM duty cycle
                                         break;
                                     case 2:  // Blue
                                       //GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN1); // Turns OFF G LED
                                       //GPIO_toggleOutputOnPin(GPIO_PORT_P2,GPIO_PIN2); // Toggle OFF B LED
                                       TIMER_A0->CCR[1] = PWM_PERIOD * (0/255);                // CCR1 PWM duty cycle
                                       TIMER_A0->CCR[2] = PWM_PERIOD * (0/255);                // CCR2 PWM duty cycle
                                       TIMER_A0->CCR[3] = PWM_PERIOD * currentBrightness;             // CCR3 PWM duty cycle
                                       break;
                                     default:
                                                         break;
                        }

                    }
                    else{ // question is wrong ring the buzzy
                        MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN7);
                        for(ii=0; ii<80000;ii++){}
                        MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN7);
                    }

                    question++;
                    Graphics_clearDisplay(&g_sContext);
                }

    }
}

void questionArray(){
    /////////////////////////////1//////////////////////////////////////
    char * temp = &array[0][0];
    sprintf(temp, "1. This class hard?");
    temp = &array[1][0];
    sprintf(temp, "A. Easy");
    temp = &array[2][0];
    sprintf(temp, "B. Not easy");
    temp = &array[3][0];
    sprintf(temp, "C. Very not easy");
    //////////////////////////////2////////////////////////////////////
    temp = &array[4][0];
    sprintf(temp, "2. Time to for proj?");
    temp = &array[5][0];
    sprintf(temp, "A. An hour");
    temp = &array[6][0];
    sprintf(temp, "B. A day");
    temp = &array[7][0];
    sprintf(temp, "C. Four days");
    ///////////////////////////////3///////////////////////////////////
    temp = &array[8][0];
    sprintf(temp, "3. Is class fun?");
    temp = &array[9][0];
    sprintf(temp, "A. No");
    temp = &array[10][0];
    sprintf(temp, "B. Yes");
    temp = &array[11][0];
    sprintf(temp, "C. When things work");
    /////////////////////////////////4///////////////////////////////
    temp = &array[12][0];
    sprintf(temp, "4. Who is Kanye?");
    temp = &array[13][0];
    sprintf(temp, "A. Next President");
    temp = &array[14][0];
    sprintf(temp, "B. A god");
    temp = &array[15][0];
    sprintf(temp, "C. Idk, Who Kanye?");
    //////////////////////////////5///////////////////////////////////
    temp = &array[16][0];
    sprintf(temp, "5. Should you vote?");
    temp = &array[17][0];
    sprintf(temp, "A. Yes");
    temp = &array[18][0];
    sprintf(temp, "B. Yes x2");
    temp = &array[19][0];
    sprintf(temp, "C. Yes x3");
    /////////////////////////////6/////////////////////////////////////
    temp = &array[20][0];
    sprintf(temp, "6. 9+10?");
    temp = &array[21][0];
    sprintf(temp, "A. 21");
    temp = &array[22][0];
    sprintf(temp, "B. 22");
    temp = &array[23][0];
    sprintf(temp, "C. 19");
    /////////////////////////////7////////////////////////////////////
    temp = &array[24][0];
    sprintf(temp, "7. 2+2?");
    temp = &array[25][0];
    sprintf(temp, "A. 4");
    temp = &array[26][0];
    sprintf(temp, "B. fish");
    temp = &array[27][0];
    sprintf(temp, "C. salmon");
    /////////////////////////////8////////////////////////////////////
    temp = &array[28][0];
    sprintf(temp, "8. 2+3?");
    temp = &array[29][0];
    sprintf(temp, "A. 6");
    temp = &array[30][0];
    sprintf(temp, "B. 5");
    temp = &array[31][0];
    sprintf(temp, "C. Snoop Dog");
    //////////////////////////////9////////////////////////////////////
    temp = &array[32][0];
    sprintf(temp, "9. What year we in?");
    temp = &array[33][0];
    sprintf(temp, "A. 2023");
    temp = &array[34][0];
    sprintf(temp, "B. 1995");
    temp = &array[35][0];
    sprintf(temp, "C. 2018");
    /////////////////////////10////////////////////////////////////
    temp = &array[36][0];
    sprintf(temp, "10. 2x2?");
    temp = &array[37][0];
    sprintf(temp, "A. Pork Chop");
    temp = &array[38][0];
    sprintf(temp, "B. 4");
    temp = &array[39][0];
    sprintf(temp, "C. Yea");
}
