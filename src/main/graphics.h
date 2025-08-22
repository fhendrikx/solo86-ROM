#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <stdint-gcc.h>
#include <arch/pio.h>

#define VC_CTRL  0x28
#define VC_PARAM 0x2A
#define VC_DATA  0x2C

#define CMD_DISPLAY_TERMINAL    0x00
#define CMD_DISPLAY_GRAPHICS    0x01
#define CMD_DISPLAY_DEBUGLOG    0x02

#define CMD_RES_256x192         0x40
#define CMD_RES_512x384         0x41
#define CMD_RES_1024x768        0x42
#define CMD_RES_CUSTOM          0x43
#define CMD_RES_256x192_DB      0x44
#define CMD_RES_512x384_DB      0x45
#define CMD_RES_1024x768_DB     0x46
#define CMD_RES_CUSTOM_DB       0x47

#define CMD_MEM_WRITE_X_8       0x48
#define CMD_MEM_WRITE_Y_8       0x49
#define CMD_MEM_READ_X_8        0x4A
#define CMD_MEM_READ_Y_8        0x4B
#define CMD_MEM_WRITE_X_16      0x4C
#define CMD_MEM_WRITE_Y_16      0x4D
#define CMD_MEM_READ_X_16       0x4E
#define CMD_MEM_READ_Y_16       0x4F

#define CMD_CLIPPING_MODE       0x50
#define CMD_WRAP_MODE           0x51
#define CMD_UPDATE              0x52
#define CMD_CLEAR_SCREEN        0x53
#define CMD_FILL_SCREEN         0x54

#define CMD_DRAW_PIXEL_8        0x60
#define CMD_DRAW_PIXEL_16       0x80

#define CMD_DRAW_LINE_8         0x61
#define CMD_DRAW_LINE_16        0x81

void DisplayTerminal() {

    outb(CMD_DISPLAY_TERMINAL, VC_CTRL);

}

void DisplayGraphics() {

    outb(CMD_DISPLAY_GRAPHICS, VC_CTRL);

}

void DisplayDebugLog() {

    outb(CMD_DISPLAY_DEBUGLOG, VC_CTRL);

}

void SetRes256x192() {

    outb(CMD_RES_256x192, VC_CTRL);

}

void SetRes512x384() {

    outb(CMD_RES_512x384, VC_CTRL);

}

void SetRes1024x768() {

    outb(CMD_RES_1024x768, VC_CTRL);

}

void SetResCustom(uint16_t width, uint16_t height) {

    outb(width & 0xFF, VC_PARAM);   // low byte
    outb(width >> 8, VC_PARAM);     // high byte
    outb(height & 0xFF, VC_PARAM);  // low byte
    outb(height >> 8, VC_PARAM);    // high byte
    outb(CMD_RES_CUSTOM, VC_CTRL);

}

void SetRes256x192DB() {

    outb(CMD_RES_256x192_DB, VC_CTRL);
}

void SetRes512x384DB() {

    outb(CMD_RES_512x384_DB, VC_CTRL);

}

void SetRes1024x768DB() {

    outb(CMD_RES_1024x768_DB, VC_CTRL);

}

void SetResCustomDB(uint16_t width, uint16_t height) {

    outb(width & 0xFF, VC_PARAM);   // low byte
    outb(width >> 8, VC_PARAM);     // high byte
    outb(height & 0xFF, VC_PARAM);  // low byte
    outb(height >> 8, VC_PARAM);    // high byte
    outb(CMD_RES_CUSTOM_DB, VC_CTRL);

}

void SetMemWriteX_8(uint8_t x) {

    outb(x, VC_PARAM);
    outb(CMD_MEM_WRITE_X_8, VC_CTRL);

}

void SetMemWriteY_8(uint8_t y) {

    outb(y, VC_PARAM);
    outb(CMD_MEM_WRITE_Y_8, VC_CTRL);

}

void SetMemReadX_8(uint8_t x) {

    outb(x, VC_PARAM);
    outb(CMD_MEM_READ_X_8, VC_CTRL);

}

void SetMemReadY_8(uint8_t y) {

    outb(y, VC_PARAM);
    outb(CMD_MEM_READ_Y_8, VC_CTRL);

}

void SetMemWriteX_16(uint16_t x) {

    outb(x & 0xFF, VC_PARAM);  // low byte
    outb(x >> 8, VC_PARAM);    // high byte
    outb(CMD_MEM_WRITE_X_16, VC_CTRL);

}

void SetMemWriteY_16(uint16_t y) {

    outb(y & 0xFF, VC_PARAM);  // low byte
    outb(y >> 8, VC_PARAM);    // high byte
    outb(CMD_MEM_WRITE_Y_16, VC_CTRL);

}

void SetMemReadX_16(uint16_t x) {

    outb(x & 0xFF, VC_PARAM);  // low byte
    outb(x >> 8, VC_PARAM);    // high byte
    outb(CMD_MEM_READ_X_16, VC_CTRL);

}

void SetMemReadY_16(uint16_t y) {

    outb(y & 0xFF, VC_PARAM);  // low byte
    outb(y >> 8, VC_PARAM);    // high byte
    outb(CMD_MEM_READ_Y_16, VC_CTRL);

}

void SetClippingMode() {

    outb(CMD_CLIPPING_MODE, VC_CTRL);

}

void SetWrapMode() {

    outb(CMD_WRAP_MODE, VC_CTRL);

}

void Update() {

    outb(CMD_UPDATE, VC_CTRL);

}

void ClearScreen() {

    outb(CMD_CLEAR_SCREEN, VC_CTRL);

}

void FillScreen(uint8_t colour) {

    outb(colour, VC_PARAM);
    outb(CMD_FILL_SCREEN, VC_CTRL);

}

inline void DrawPixel_8(uint8_t x, uint8_t y, uint8_t colour) {

    outb(x, VC_PARAM);
    outb(y, VC_PARAM);
    outb(colour, VC_PARAM);
    outb(CMD_DRAW_PIXEL_8, VC_CTRL);

}

inline void DrawPixel_16(uint16_t x, uint16_t y, uint8_t colour) {

    outb(x & 0xFF, VC_PARAM);   // low byte
    outb(x >> 8, VC_PARAM);     // high byte
    outb(y & 0xFF, VC_PARAM);   // low byte
    outb(y >> 8, VC_PARAM);     // high byte
    outb(colour, VC_PARAM);
    outb(CMD_DRAW_PIXEL_16, VC_CTRL);

}

void DrawLine_8(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t colour) {

    outb(x0, VC_PARAM);
    outb(y0, VC_PARAM);
    outb(x1, VC_PARAM);
    outb(y1, VC_PARAM);
    outb(colour, VC_PARAM);
    outb(CMD_DRAW_LINE_8, VC_CTRL);

}

void DrawLine_16(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t colour) {

    outb(x0 & 0xFF, VC_PARAM);  // low byte
    outb(x0 >> 8, VC_PARAM);    // high byte
    outb(y0 & 0xFF, VC_PARAM);  // low byte
    outb(y0 >> 8, VC_PARAM);    // high byte
    outb(x1 & 0xFF, VC_PARAM);  // low byte
    outb(x1 >> 8, VC_PARAM);    // high byte
    outb(y1 & 0xFF, VC_PARAM);  // low byte
    outb(y1 >> 8, VC_PARAM);    // high byte
    outb(colour, VC_PARAM);
    outb(CMD_DRAW_LINE_16, VC_CTRL);

}

void WaitForIdle() {

    while(inb(VC_CTRL) & 0x80);

}

#endif

