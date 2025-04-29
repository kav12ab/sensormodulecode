#line 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\VL53L1XHandler.cpp"
#include "VL53L1XHandler.h"
#include <Arduino.h>  // Required for millis() function
#include <vector>     // Required for std::vector
#include <numeric>    // For std::accumulate

// Create a VL53L1X sensor object
Adafruit_VL53L1X vl53 = Adafruit_VL53L1X(XSHUT_PIN, IRQ_PIN);

// Constants for rolling average
const int NUM_READINGS = 50;           // Number of readings for rolling average
int readings[NUM_READINGS] = {0};      // Buffer to store readings
int readIndex = 0;                     // Current index in the buffer
long total = 0;                        // Total of readings for average calculation

// Constants for long-term tracking
const int MAX_HISTORY_SIZE = 100;      // Max 100 readings (100 mins)
const int MIN_CHANGE_THRESHOLD = 100;  // Min 100mm increase required to store next value
const int STABLE_THRESHOLD = 20;       // Allowed fluctuation range for stability
const unsigned long STABILITY_TIME = 60000; // 1 minute in milliseconds

// Global storage variables
std::vector<int> longTermDistances; // Stores valid stable readings
std::vector<int> rollingBuffer;     // Stores 1-minute rolling values
unsigned long rollingStartTime = 0;   // Start time of rolling average

// NEW: Global variable to hold the continuously updated auto box size
int box_size_auto = -1;

// Function to initialize the sensor
int initializeSensor(int sdaPin, int sclPin) {
    Wire.begin(sdaPin, sclPin); // Initialize I2C on custom SDA/SCL pins

    if (!vl53.begin(0x29, &Wire)) {
        Serial.print(F("Error on init of VL sensor: "));
        Serial.println(vl53.vl_status);
        return -1; // Sensor initialization failed
    }

    Serial.println(F("VL53L1X sensor initialized successfully!"));

    // Configure sensor
    if (!vl53.startRanging()) {
        Serial.print(F("Couldn't start ranging: "));
        Serial.println(vl53.vl_status);
        return -1; // Sensor failed to start ranging
    }

    vl53.setTimingBudget(50); // Set timing budget to 50ms
    Serial.print(F("Timing budget (ms): "));
    Serial.println(vl53.getTimingBudget());

    return 0; // Success
}

// Function to measure distance
int getDistance() {
    if (!vl53.dataReady()) {
        return -2; // Distance measurement not ready
    }

    int16_t distance = vl53.distance();
    if (distance == -1) {
        return -1; // Sensor read failure
    }

    vl53.clearInterrupt(); // Clear interrupt for the next measurement
    return distance; // Return the valid distance in mm
}

// Function to calculate a rolling stable average
int getRollingStableAverage() {
    const int STABILITY_THRESHOLD = 50; // ±50 tolerance for stability

    // Get a new reading
    if (!vl53.dataReady()) {
        return -2; // Data not ready
    }

    int newReading = vl53.distance();
    if (newReading == -1) {
        return -1; // Sensor read failure
    }

    // Update the rolling buffer
    total -= readings[readIndex];       // Subtract the oldest reading
    readings[readIndex] = newReading;     // Add the new reading
    total += newReading;                  // Update the total
    readIndex = (readIndex + 1) % NUM_READINGS; // Move to the next index

    // Check stability
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < NUM_READINGS; i++) {
        if (readings[i] < minValue) {
            minValue = readings[i];
        }
        if (readings[i] > maxValue) {
            maxValue = readings[i];
        }
    }

    if ((maxValue - minValue) > STABILITY_THRESHOLD) {
        return -3; // Values are not stable
    }

    // Return the rolling average if stable
    return total / NUM_READINGS;
}

// Compute rolling average for 1-minute stable values
int computeRollingAverage() {
    if (rollingBuffer.empty()) return -1;
    int sum = std::accumulate(rollingBuffer.begin(), rollingBuffer.end(), 0);
    return sum / rollingBuffer.size();
}

// Check if rolling buffer is stable within ±50mm
bool isStable() {
    if (rollingBuffer.empty()) return false;
    int minVal = *std::min_element(rollingBuffer.begin(), rollingBuffer.end());
    int maxVal = *std::max_element(rollingBuffer.begin(), rollingBuffer.end());
    return (maxVal - minVal) <= STABLE_THRESHOLD;
}

// Store stable values in long-term history and update auto box size continuously
void addStableDistanceReading() {
    int stableDistance = getRollingStableAverage();

    if (stableDistance <= 0) {
        return; // Ignore invalid readings
    }

    // If rolling time expired (1 minute has passed)
    if (millis() - rollingStartTime >= STABILITY_TIME) {
        if (isStable()) {
            int rollingAvg = computeRollingAverage();
            if (rollingAvg == -1) return;

            // First stored value must also be a 1-minute rolling average
            if (longTermDistances.empty()) {
                longTermDistances.push_back(rollingAvg);
            } else {
                int lastStored = longTermDistances.back();
                // Only store if it's an increase of at least 100mm
                if ((rollingAvg - lastStored) >= MIN_CHANGE_THRESHOLD) {
                    longTermDistances.push_back(rollingAvg);
                }
            }

            // Keep max 100 readings (max 100 minutes)
            if (longTermDistances.size() > MAX_HISTORY_SIZE) {
                longTermDistances.erase(longTermDistances.begin()); // Remove oldest entry
            }
        }
        // Reset rolling buffer for the next 1-minute cycle
        rollingBuffer.clear();
        rollingStartTime = millis();
    }

    // If fluctuation occurs outside ±50mm, restart the 1-minute stability timer
    if (!rollingBuffer.empty()) {
        int minVal = *std::min_element(rollingBuffer.begin(), rollingBuffer.end());
        int maxVal = *std::max_element(rollingBuffer.begin(), rollingBuffer.end());
        if ((maxVal - minVal) > STABLE_THRESHOLD) {
            rollingBuffer.clear(); // Reset buffer
            rollingStartTime = millis(); // Restart timer
        }
    }

    // Add new reading to the rolling buffer
    rollingBuffer.push_back(stableDistance);

    // NEW: Continuously update the auto box size value
    int autoBox = calculateAverageBoxSizeOverTime();
    if (autoBox > 0) {
        box_size_auto = autoBox;
    }
}

// Compute the average box size based on stored increases
int calculateAverageBoxSizeOverTime() {
    if (longTermDistances.size() < 2) {
        return -4; // Not enough data
    }

    std::vector<int> validIncreases;
    for (size_t i = 1; i < longTermDistances.size(); i++) {
        int diff = longTermDistances[i] - longTermDistances[i - 1];
        if (diff > 0) { // Only consider positive differences
            validIncreases.push_back(diff);
        }
    }

    if (validIncreases.empty()) {
        return -1; // No valid increases found
    }

    int sum = std::accumulate(validIncreases.begin(), validIncreases.end(), 0);
    return sum / validIncreases.size();
}

// Calculate the number of boxes in the rack using either the manually set boxSize
// or, if boxSize is -1, the auto-calculated box_size_auto value.
int calculateBoxesInRack() {
    int rollingAverage = getRollingStableAverage();
    if (rollingAverage == -1) {
        return -1; // Sensor failure
    } else if (rollingAverage == -2) {
        return -2; // Data not ready
    } else if (rollingAverage == -3) {
        return -3; // Unstable rolling average
    }

    // Update the stable readings and auto box size in the background
    addStableDistanceReading();

    // Determine which box size to use: if boxSize is -1, use auto-calculated value.
    int effectiveBoxSize = boxSize;
    if (effectiveBoxSize == -1 && box_size_auto > 0) {
        effectiveBoxSize = box_size_auto;
    }

    if (effectiveBoxSize <= 0) {
        return -4; // Not enough data for box size calculation
    }

    float occupiedSpace = rackLength - rollingAverage;
    float exactBoxes = occupiedSpace / static_cast<float>(effectiveBoxSize);
    return round(exactBoxes);
}
