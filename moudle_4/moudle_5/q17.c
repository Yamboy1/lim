#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int compar(const void * first, const void * second )
{
    uint64_t one=*(uint64_t*)first;
    uint64_t two=*(uint64_t*)second;
    if (one==two) {
        return 0;
    } else if (one > two) {
        return 1;
    } else {
        return -1;
    }
}

int main()
{
    uint64_t bob[10]={};
    uint64_t bill;
    for(size_t jeb=0; jeb<10; jeb++) {
        scanf("%ld", &bill);
        bob[jeb] = bill;
    }
    for(size_t val=0; val<10; val++) {
        qsort(bob, 10, sizeof(uint64_t), *compar);
    }
    for(size_t jeb=0; jeb<10; jeb++) {
        printf("%ld\n", bob[jeb]);
    }
}
