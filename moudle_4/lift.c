#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "lift.h"

Lift_t lift_init(uint8_t maxPassengers, int16_t startFloor)
{
    Lift_t i = {startFloor, 0, maxPassengers};
    return i;
}

void lift_onboard(Lift_t* lift, uint8_t peopleOff, uint8_t peopleOn)
{
    lift->people = lift->people + peopleOn - peopleOff;
}

int16_t lift_goToFloor(Lift_t* lift, int16_t floor)
{
    if (lift->people > lift->limit) {
        return lift->floor;
    }
    return floor;
}
