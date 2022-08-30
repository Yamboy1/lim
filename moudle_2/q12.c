#include <stdint.h>
#include <stdio.h>
uint8_t intLog2(uint32_t value)
{
    int32_t x = 0;
    while (value > 1) {
        x++;
        value = value / 2;
    }
    return x;
}

int main(void)
{
    printf("%d\n", intLog2(32));
    printf("%d\n", intLog2(31));
}
