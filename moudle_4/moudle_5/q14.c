#include <stdio.h>
#include <stdint.h>


typedef struct Meas_s Meas_t;

struct Meas_s {
    double value;
    void (*dispFunc)(const Meas_t*);
};

void disp(const Meas_t* meas)
{
    printf("%.3f m/s\n", meas->value);
}

void meas_print(const Meas_t* meas)
{
    void (*function)(const Meas_t*)=meas->dispFunc;
    (*function)(meas);
}

int main(void)
{
Meas_t meas = {2.7777, &disp};
meas_print(&meas);
}