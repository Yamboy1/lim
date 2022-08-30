#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void printPrimesInRange(uint32_t n1, uint32_t n2)
{
    for(uint32_t x = n1; x <= n2; x++) {
        bool poo = true;
        for(uint32_t n = 2; (n < x) && poo; n++) {
            if (x % n == 0) {
                poo = false;
            } 
        }
        if (poo) {
            printf("%d\n", x);
        }
    }
}

int main(void)
{
    printPrimesInRange(2, 40);
}