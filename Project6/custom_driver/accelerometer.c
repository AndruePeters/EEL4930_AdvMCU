/*
 * Implementation file for accelerometer.h
 */

#include <xdc/runtime/Error.h>
#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include "accelerometer.h"


/*
 * Stores the current value of the accelerometer
 */
struct accelerometer a;

/*
 * Internal function prototypes
 */
float ACCEL_convert_to_g(ADC_Handle handle, uint16_t adc_val);
float ACCEL_read_z_axis();
float ACCEL_read_y_axis();
float ACCEL_read_x_axis();


void ACCEL_init()
{

}

struct accelerometer ACCEL_get()
{
    a.x = ACCEL_read_x_axis();
    a.y = ACCEL_read_y_axis();
    a.z = ACCEL_read_z_axis();
    return a;
}



float ACCEL_read_z_axis()
{
    // ADC handle and value initialization
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    float adc_val_g;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC11, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    // store accelerometer value in adc_val; status is in res
    res = ADC_convert(adc, &adc_val);

    // if conversion failed
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    // convert to g forces
    adc_val_g = ACCEL_convert_to_g(adc, adc_val);

    ADC_close(adc);
    return adc_val_g;
}



float ACCEL_read_y_axis()
{
   // ADC handle and value initialization
   ADC_Handle   adc;
   ADC_Params   params;
   uint16_t adc_val;
   float adc_val_g;
   int_fast16_t res;

   ADC_Params_init(&params);
   adc = ADC_open(Board_ADC13, &params);

   if (adc == NULL) {
      System_abort("Error initializing ADC channel z\n");
   }

   // store accelerometer value in adc_val; status is in res
   res = ADC_convert(adc, &adc_val);

   // if conversion failed
   if (res == ADC_STATUS_ERROR) {
      adc_val = 0;
   }

   // convert to g forces
   adc_val_g = ACCEL_convert_to_g(adc, adc_val);

   ADC_close(adc);
   return adc_val_g;
}


/*
 * Blocking function to read x axis of accelerometer
 */
float ACCEL_read_x_axis()
{
    // ADC handle and value initialization
    ADC_Handle   adc;
    ADC_Params   params;
    uint16_t adc_val;
    float adc_val_g;
    int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC14, &params);

    if (adc == NULL) {
       System_abort("Error initializing ADC channel z\n");
    }

    // store accelerometer value in adc_val; status is in res
    res = ADC_convert(adc, &adc_val);

    // if conversion failed
    if (res == ADC_STATUS_ERROR) {
       adc_val = 0;
    }

    // convert to g forces
    adc_val_g = ACCEL_convert_to_g(adc, adc_val);

    ADC_close(adc);
    return adc_val_g;
}

/*
 * Converts adc_val to g's
 * Sensitivity in datasheet was 660 mV / g
 */
float ACCEL_convert_to_g(ADC_Handle handle, uint16_t adc_val)
{
    float adc_val_g;
    //adc_val_g = ((( (float)(adc_val * ACCEL_REF_VOL) / ADC_PRECISION) - ACCEL_0G_OFFSET) / ACCEL_SENSITIVITY);

    // convert ADC value back to volts
    adc_val_g = (float)(adc_val * ACCEL_REF_VOL) / ADC_PRECISION;

    // subtract the 0G offset found in data sheet
    adc_val_g = adc_val_g - ACCEL_0G_OFFSET;

    // divide by the sensitivity of accelerometer (in volts)
    adc_val_g = adc_val_g / ACCEL_SENSITIVITY;

    return adc_val_g;
}
