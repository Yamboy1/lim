#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "temp.h"

void temp_set(Temp_t* temp, float value, Unit_t unit)
{
    temp->temperature=value;
    temp->units=unit;
}

static Temp_t convert(Temp_t temp, Unit_t toUnit)
{

    if (temp.units == CELSIUS) {
        if (toUnit == FAHRENHEIT) {
            temp.temperature = (9*temp.temperature/5 + 32);
        } else {
            temp.temperature = temp.temperature + 273.15;
        }
    } else if (temp.units == FAHRENHEIT) {
        if (toUnit == CELSIUS) {
            temp.temperature = (temp.temperature-32)*5/9;
        } else {
            temp.temperature = (temp.temperature-32)*5/9 + 273.15;
        }
    } else {
        if (toUnit == FAHRENHEIT) {
            temp.temperature = (9*(temp.temperature - 273.15)/5 + 32);
        } else {
            temp.temperature = temp.temperature - 273.15;
        }
    }
    return temp;
}

void temp_print(const Temp_t* temp, Unit_t unit)
{
    Temp_t i=*temp;
    if (unit != temp->units) {
        i = convert( *temp, unit);
    }
    if (unit == CELSIUS) {
        printf("%.2f deg C\n", i.temperature);
    } else if (unit == FAHRENHEIT) {
        printf("%.2f deg F\n", i.temperature);
    } else {
        printf("%.2f K\n", i.temperature);
    }
}



