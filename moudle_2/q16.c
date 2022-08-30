#include <stdint.h>
#include <stdio.h>
uint32_t countRushes(float screeHeight, float rushHeight, float slideBack)
{
    float x = 0;
    uint32_t n = 1;
    if (screeHeight == 0) {
        return 0;
    }
    x = x + rushHeight;
    while(x < screeHeight)
    {
        x = x + rushHeight;
        x = x - slideBack;
        n++;
    }
    return n;
    
}

int main(void)
{
    printf("%d\n", countRushes(100, 50, 10));
    printf("%d\n", countRushes(100, 100, 90));
    printf("%d\n", countRushes(0, 100, 30));
    printf("%d\n", countRushes(1.0, 0.5, 0.1));
}