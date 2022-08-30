#include <stdio.h>
#include <stdint.h>
uint32_t square(int32_t x)
{
    return x * x;
}

int main(void)
{
    printf("%u\n", square(3));
}
