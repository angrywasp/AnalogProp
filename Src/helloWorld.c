#include "simpletools.h"

#include "./lib/AnalogProp.h"
#include "./lib/refs.h"

static int x = 0;
int main()
{
    //wait for serial port
    pause(1000);

    analogprop_context_t* cxt = analogprop_init();

    while(true)
    {
        printf("Hello World: %d\n", x++);
        pause(1000);
    }

    return 0;
}