#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int16_t* ramp(size_t n)
{
    int16_t* ptr = calloc(n, sizeof(int16_t));
    size_t k;
    for(size_t i=1; i<(n+1); i++) {
        k = i - 1;
        ptr[k]=i;
    }
    return ptr;
}

int main(void)
{
int16_t* data = ramp(5);
for (size_t i = 0; i < 5; i++) {
    printf("%d ", data[i]);
}
free(data);
}