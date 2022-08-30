#include <stdint.h>
#include <stdio.h>
void printSquares(uint32_t n)
{
    for (uint32_t i = 1; i < n || i == n; i++) {
        printf("%d\n", i * i);
    }
}

int main(void)
{
    printSquares(4);
    printSquares(1);
}