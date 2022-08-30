#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    REVERSE = -1,
    NEUTRAL,
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
} Gear_t;

int main(void)
{
    Gear_t currentGear = FIRST;
printf("%d\n", currentGear + THIRD);
}