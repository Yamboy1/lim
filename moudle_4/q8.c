#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    NORTH,
    SOUTH,
    EAST,
    WEST
} Heading_t;

int main(void)
{
    Heading_t dir = NORTH;
printf("%d\n", dir == NORTH);
}