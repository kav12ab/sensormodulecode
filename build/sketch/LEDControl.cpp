#line 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\LEDControl.cpp"
#include "LEDControl.h"

// Function to initialize the RGB LED
void initLED() {
    pinMode(RGB_BUILTIN, OUTPUT);
    digitalWrite(RGB_BUILTIN, LOW);  // Turn off LED initially
}

// Function to set LED color
void setLEDColor(LEDColor color) {
    switch (color) {
        case GREEN:
            rgbLedWrite(RGB_BUILTIN, 255, 0, 0);
            break;
        case RED:
            rgbLedWrite(RGB_BUILTIN, 0, 255, 0);
            break;
        case BLUE:
            rgbLedWrite(RGB_BUILTIN, 0, 0, 255);
            break;
        case YELLOW:
            rgbLedWrite(RGB_BUILTIN, 130, 255, 0);
            break;
        case CYAN:
            rgbLedWrite(RGB_BUILTIN, 255, 0, 255);
            break;
        case MAGENTA:
            rgbLedWrite(RGB_BUILTIN, 0, 255, 255);
            break;
        case WHITE:
            rgbLedWrite(RGB_BUILTIN, 255, 255, 255);
            break;
        case OFF:
        default:
            rgbLedWrite(RGB_BUILTIN, 0, 0, 0);
            break;
    }
}
