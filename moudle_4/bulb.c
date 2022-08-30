#include <stdint.h>
#include <stdio.h>

#include "bulb.h"

static uint32_t selling[256]= {0};

Bulb_t bulb_sellModel(uint8_t model)
{ 
    Bulb_t i = {model, selling[model]};
    selling[model]++;
    return i;
}

void bulb_display(Bulb_t bulb)
{
    printf("Model %d, SN%06d\n", bulb.model, bulb.serial_num);
}

uint64_t bulb_numSold(uint8_t model)
{
    return selling[model];
}
