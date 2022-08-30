#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
void meetsCondition(int64_t x)
{
    if (((x % 2 == 0) && (x > -1)) ||  ((llabs(x) % 2 == 1) && (x < 0))) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}

int main(void)
{
    meetsCondition(0);
    meetsCondition(-2);
    meetsCondition(1642);
    meetsCondition(-20);
    meetsCondition(29);
    meetsCondition(-31);

}
