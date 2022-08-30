#include <stdio.h>
#include <stdint.h>

int32_t index2d(int32_t* array, size_t width, size_t i, size_t j)
{
    return array[width*i + j];
}


void main(void)
{
int32_t array[2][3] = {{1, 2, 3}, 
                       {4, 5, 6}};
printf("%d\n", index2d((int32_t*)array, 3, 0, 1));
}