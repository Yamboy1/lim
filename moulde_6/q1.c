#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint64_t* ptr = malloc(sizeof(uint64_t));
    scanf("%ld", ptr);
    printf("%ld\n", *ptr);
    free(ptr);
}