#include <stdio.h>
#include <stdint.h>


void printArray(int32_t* array, size_t n)
{
    int32_t i=0;
    while (i<n)
    {
        i += 1;
        printf("%d", *array);
        array += 1;
    }
}

int main(void)
{
    int32_t array[3] = {1, 2, 3};
    printArray(array, 3);
}