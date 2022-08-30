#ifndef TEMP_H
#define TEMP_H

#include <stdint.h>

typedef enum {
    CELSIUS, 
    FAHRENHEIT,
    KELVIN
} Unit_t;

typedef struct {
    float temperature;
    Unit_t units;
} Temp_t;

void temp_set(Temp_t* temp, float value, Unit_t unit);
void temp_print(const Temp_t* temp, Unit_t unit);



#endif