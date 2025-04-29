#line 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\LEDControl.h"
#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include <Arduino.h>

// Enum for LED Colors
enum LEDColor { OFF, RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA, WHITE };

// Function prototypes
void initLED();
void setLEDColor(LEDColor color);

#endif // LEDCONTROL_H
