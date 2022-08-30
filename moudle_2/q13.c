#include <stdint.h>
#include <stdio.h>
int main(void)
{
    char c;
    int32_t x = 0;
    do {
        c  = getchar();
        x++;
    } while (c != 'q');
    printf("%d\n", x);
}
