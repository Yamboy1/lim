// ANY MODIFICATIONS MADE HERE WILL BE IGNORED
#include <stdint.h>
#include <stdio.h>

#include "rect.h"

int main(void)
{
    //uint32_t width;
    //uint32_t height;
    //scanf("%d %d", &width, &height);
    Rect_t rect;
    rect_set(&rect, 3, 4);
    printf("Area = %d\n", rect_area(&rect));
    printf("Perimeter = %d\n", rect_perimeter(&rect));
    
    //Rect_t rect;
    //rect_set(&rect, width, height);
    //printf("Area = %d\n", rect_area(&rect));
    //printf("Perimeter = %d\n", rect_perimeter(&rect));
}