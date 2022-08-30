#include <stdio.h>
#include <stdint.h>

void printArray(int32_t array[], size_t n)
{
    printf("%ls", array);
}


void main(void)
{
    int32_t array[3] = {1, 2, 3};
    printArray(array, 3);
}