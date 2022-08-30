#include <stdio.h>
#include <stdint.h>


void printArray(int32_t* const array, size_t n)
{
    size_t i=0;
    while(i<n) {
        int32_t* fun=array + i;
        printf("%d", *fun);
        i+=1;
    }

}

int main(void)
{
    int32_t array[3] = {1, 2, 3};
    printArray(array, 3);
}