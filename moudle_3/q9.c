#include <stdio.h>
#include <stdint.h>

void printViaPtr(int16_t* intPtr)
{
    printf("%d\n", *intPtr);
}

void print2Ints(int16_t number1, int16_t number2)
{
    int16_t* ptr1 = &number1;
    int16_t* ptr2 = &number2;
    printViaPtr(ptr1);
    printViaPtr(ptr2);

}


int main()
{
print2Ints(11, -93);
}