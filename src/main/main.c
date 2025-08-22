#include <stdio.h>
#include <stdlib.h>
#include <stdint-gcc.h>
#include <arch/pio.h>

#include "graphics.h"

int main() {

    // set 1024x768 mode with double buffering
    SetRes1024x768DB();

    // switch display to show graphics
    DisplayGraphics();

    uint8_t colour = 1;

    while(1) {

        for (uint16_t x = 0; x < 1024; x+= 8) {
            // printf("DrawLine 0, 0, %u, 767, %u\n", x, colour);
            DrawLine_16(0, 0, x, 767, colour);
            Update();
            WaitForIdle();
        }

        for (uint16_t y = 0; y < 768; y+= 8) {
            // printf("DrawLine 0, 0, 1023, %u, %u\n", y, colour);
            DrawLine_16(0, 0, 1023, y, colour);
            Update();
            WaitForIdle();
        }


        colour = (colour + 1) % 16; // limit to EGA colours

    }

    return (0);
}

