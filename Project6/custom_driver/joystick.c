/*
 * Implementation file for joystick .h
 */

#include <xdc/runtime/Error.h>
#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include "joystick.h"

struct JS js_;

uint8_t JS_map();
uint8_t JS_get_x();
uint8_t JS_get_y();

void JS_init() {

}


struct JS JS_get()
{
    js_.x = JS_get_x();
    js_.y = JS_get_y();

    return js_;
}

uint8_t JS_get_x()
{
    ADC_Handle adc;
    ADC_Params params;
    uint16_t adc_val;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC15, &params);

    if (adc == NULL) {
        System_abort("Error initializing ADC channel 15\n");
    }

    ADC_convert(adc, &adc_val);
    ADC_close(adc);
    return adc_val;
}

uint8_t JS_get_y()
{
    ADC_Handle adc;
    ADC_Params params;
    uint16_t adc_val;

    ADC_Params_init(&params);
    adc = ADC_open(Board_ADC9, &params);

    if (adc == NULL) {
        System_abort("Error initializing ADC channel 15\n");
    }

    ADC_convert(adc, &adc_val);
    ADC_close(adc);
    return adc_val;
}
