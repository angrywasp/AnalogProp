#ifndef __analogprop_H
#define __analogprop_H

#include "simplei2c.h"

#include "./drivers/AD7812.h"
#include "./refs.h"

#define ADC_DIN 2
#define ADC_DOUT 3
#define ADC_SCLK 1
#define ADC_CONVST 0

typedef struct
{
    volatile ad7812_context_t* adc;
    volatile i2c *i2c;
} analogprop_context_t;

void init_io();
ad7812_context_t* init_adc();
analogprop_context_t* analogprop_init();

#endif