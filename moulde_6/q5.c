#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

char* skipping(const char* string, size_t n)
{
    char* ptr = calloc((n/2 + 1), sizeof(char));
    for (size_t i=0; i<n; i++) {
        if (i % 2 == 0) {
            ptr[i/2] = string[i];
        }
    }
    return ptr;
}

int main(void)
{
char* s = skipping("1234", 10);
printf("%s\n", s);
free(s);
}
