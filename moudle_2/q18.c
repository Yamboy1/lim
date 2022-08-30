#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void printRoots(float a, float b, float c)
{
    float a_c =  4*a*c;
    float b_2 = b*b;
    float a_2 = a*2;
    if (a == 0) {
        printf("Not a quadratic\n");
    } else if (a_c > b_2) {
        printf("Imaginary roots\n");
    } else {
        b = -b;
        float help = b_2 - a_c;
        help = sqrt(help);
        float ans_1 = (b - help)/a_2;
        float ans_2 = (b + help)/a_2;
        if (ans_1 < ans_2) {
            printf("Roots are %.4f and %.4f\n", ans_1, ans_2);
        } else {
            printf("Roots are %.4f and %.4f\n", ans_2, ans_1);
        }
    }
}


int main(void)
{
    printRoots(1, -4, 3);
    printRoots(1, 2, 3);
    printRoots(0, 2, 3);
    printRoots(1, 0, -1);
    printRoots(-1, 0, 1);
    printRoots(4, 1, -3);
}