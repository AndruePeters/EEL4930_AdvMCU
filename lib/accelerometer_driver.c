#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <accelerometer_driver.h>



/* holds accelerometer data */
struct accelerometer _accel_ = {0,0,0};

/* function pointer to insert at end of interrupt */
void (*p_func)();

/* Sets the function pointer */
void set_func_pointer(void (*func)())
{
    p_func = func;
}

/* Returns constant pointer to _accel_ */
 struct accelerometer* get_accel_data()
{
    return &_accel_;
}

/* Initialize ADC14 and accelerometer pins */
void init_accelerometer()
{
    /* Configures Pin 4.0, 4.2, and 6.1 as ADC input */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P4, GPIO_PIN0 | GPIO_PIN2, GPIO_TERTIARY_MODULE_FUNCTION);
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P6, GPIO_PIN1, GPIO_TERTIARY_MODULE_FUNCTION);

    /* Initializing ADC (ADCOSC/64/8) */
    MAP_ADC14_enableModule();
    MAP_ADC14_initModule(ADC_CLOCKSOURCE_ADCOSC, ADC_PREDIVIDER_64, ADC_DIVIDER_8, 0);

    /* Configuring ADC Memory (ADC_MEM0 - ADC_MEM2 (A11, A13, A14)  with no repeat)
         * with internal 2.5v reference */
    MAP_ADC14_configureMultiSequenceMode(ADC_MEM0, ADC_MEM2, true);
    MAP_ADC14_configureConversionMemory(ADC_MEM0,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A14, ADC_NONDIFFERENTIAL_INPUTS);

    MAP_ADC14_configureConversionMemory(ADC_MEM1,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A13, ADC_NONDIFFERENTIAL_INPUTS);

    MAP_ADC14_configureConversionMemory(ADC_MEM2,
            ADC_VREFPOS_AVCC_VREFNEG_VSS,
            ADC_INPUT_A11, ADC_NONDIFFERENTIAL_INPUTS);
}

/* Enables interrupts and conversions to start interrupt */
void start_accelerometer()
{
    /* Enabling the interrupt when a conversion on channel 2 (end of sequence)
     *  is complete and enabling conversions */
    MAP_ADC14_enableInterrupt(ADC_INT2);

   /* Enabling Interrupts */
   MAP_Interrupt_enableInterrupt(INT_ADC14);

   MAP_ADC14_enableSampleTimer(ADC_AUTOMATIC_ITERATION);

   /* Triggering the start of the sample */
   MAP_ADC14_enableConversion();
   MAP_ADC14_toggleConversionTrigger();
}

/* Pauses conversionand interrupts to stop accelerometer */
void stop_accelerometer()
{
   MAP_ADC14_disableInterrupt(ADC_INT2);
   MAP_Interrupt_disableInterrupt(INT_ADC14);
   MAP_ADC14_disableSampleTimer();
   MAP_ADC14_disableConversion();
}


/*  Stores accelerometer values in _accel_ */
void ADC14_IRQHandler(void)
{
    uint64_t status;

    status = MAP_ADC14_getEnabledInterruptStatus();
    MAP_ADC14_clearInterruptFlag(status);

    /* ADC_MEM2 conversion completed */
    if(status & ADC_INT2)
    {
        /* Store ADC14 conversion results */
        _accel_.x = ADC14_getResult(ADC_MEM0);
        _accel_.y = ADC14_getResult(ADC_MEM1);
        _accel_.z = ADC14_getResult(ADC_MEM2);
    }
     if (p_func != 0)
         (*p_func)();
}
