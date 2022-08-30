#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int8_t x = 0;
    int32_t y = 17;
    if (y >= 10) {
        x = 10;
    } else {
        x = y;
    }

    printf("%d\n", x);
}