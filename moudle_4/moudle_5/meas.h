#ifndef LIFT_H
#define LIFT_H

#include <stdint.h>

typedef struct Meas_s Meas_t;

struct Meas_s {
    double value;
    void (*dispFunc)(const Meas_t*);
};

#endif