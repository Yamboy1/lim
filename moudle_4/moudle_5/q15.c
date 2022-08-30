#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t width;
    uint16_t height;
    void (*callback)();
} Button_t;


Button_t button_init(uint16_t x, uint16_t y, uint16_t width, uint16_t height, void* dun)
{
    Button_t i = {x, y, width, height, dun};
    return i;
}

void button_click(Button_t* button)
{
    void (*function)(Button_t*)=button->callback;
    (*function)(button);
}

void clickFunc(void)
{
    puts("Button Clicked!");
}

int main(void)
{
    Button_t button = button_init(480, 320, 64, 32, &clickFunc);
button_click(&button);
}
