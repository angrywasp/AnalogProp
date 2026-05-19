#include "./AnalogProp.h"
#include "./refs.h"
#include "./drivers/AD7812.h"

void init_io()
{
    //default all IO pins to low output
    for (int i = 4; i < 27; i++)
    {
        lo(i);
        dir_out(i);
    }
}

ad7812_context_t* init_adc()
{
    return ad7812_init(ADC_DIN, ADC_DOUT, ADC_SCLK, ADC_CONVST);
}

analogprop_context_t* analogprop_init()
{
    analogprop_context_t* b = (analogprop_context_t*)malloc(sizeof(analogprop_context_t));

    init_io();

    b->adc = init_adc();

    return b;
}

