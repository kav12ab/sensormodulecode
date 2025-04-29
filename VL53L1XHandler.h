#ifndef VL53L1XHANDLER_H
#define VL53L1XHANDLER_H

#include "Arduino.h"
#include "Adafruit_VL53L1X.h"

// Pins for VL53L1X sensor
#define IRQ_PIN 2
#define XSHUT_PIN 3

// Global variables for box size and rack length
//const int boxSize = 500;   // Box size in millimeters
//const int rackLength = 2000; // Rack length in millimeters

extern int boxSize;    // Box size in millimeters
extern int rackLength; // Rack length in millimeters

extern int box_size_auto; // Auto-calculated box size updated in VL53L1XHandler.cpp

// Function declarations
int initializeSensor(int sdaPin, int sclPin);
int calculateAverageBoxSizeOverTime();
int getDistance();
int getRollingStableAverage();
int calculateBoxesInRack(); // Function to calculate the number of boxes in the rack

#endif // VL53L1XHANDLER_H
