#include <stdio.h>
#include <stdint.h>


int main(void)
{
    int32_t array[100] = {0};
    int32_t i=0;
    int32_t n=0;
    while(n!=-1) {
        scanf("%d", &n);
        if (n!=-1){
            array[i]=n;
            i+=1;
        }
        if (i == 100){
            n = -1;
        }
    }
    printf("%d numbers entered\n", i);
    for (int32_t k=0;k<i ; k++)
    {
        printf("%d\n", array[k]);
    }
}