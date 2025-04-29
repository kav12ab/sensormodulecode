#include <Arduino.h>
#line 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\sensor.ino"
#include "LEDControl.h"
#include "WiFiSetup.h"
#include "ESPNOWSetup.h"
#include "VL53L1XHandler.h"

//***********************************EDITABLE DATA*****************************************//
// SENSOR ID
long SENSORID = 63600001;

// Box sizes (global variables updated from response)
int boxSize = 700;    // Box size in millimeters (updated by receiver)
int rackLength = 2000; // Rack length in millimeters (updated by receiver)

// Define the receiver's MAC address in main
uint8_t receiverMACAddr[] = {0x40, 0x4C, 0xCA, 0x47, 0xBB, 0xF4};

// Update frequencies (in milliseconds)
const unsigned long rollingAvgUpdateFrequency = 100; // Update box count every 100 ms
const unsigned long dataSendFrequency = 1000;        // Send data every 1000 ms

//*********************************END OF EDITABLE DATA**************************************//
bool sendFailed = false;  // Track send failures

// Data structure for receiving responses
struct ResponseData {
    long sensorid;
    int bs;
    int rl;
};

// Create a data object (Data is defined in ESPNOWSetup.h with the additional fields)
Data partdata;

// Callback function to handle received ESP-NOW data and update global variables
void onDataReceive(const esp_now_recv_info_t *recv_info, const uint8_t *data, int data_len) {
    if (data_len == sizeof(ResponseData)) {
        ResponseData response;
        memcpy(&response, data, sizeof(ResponseData));

        // Update global variables
        boxSize = response.bs;
        rackLength = response.rl;

        Serial.print("Received Response - SensorID: ");
        Serial.print(response.sensorid);
        Serial.print(", BoxSize: ");
        Serial.print(boxSize);
        Serial.print(", RackLength: ");
        Serial.println(rackLength);
    } else {
        Serial.println("Received data size mismatch");
    }
}

void updateDataAndSend() {
    static unsigned long lastRollingAvgUpdate = 0;
    static unsigned long lastSendTime = 0;
    unsigned long currentMillis = millis();

    if (currentMillis - lastRollingAvgUpdate >= rollingAvgUpdateFrequency) {
        lastRollingAvgUpdate = currentMillis;
        
        int boxCount = calculateBoxesInRack();
        partdata.boxcount = boxCount;

        if (!sendFailed) {  
            if (boxCount < -3) {
                setLEDColor(MAGENTA);
            } else if (boxCount < 0) {
                setLEDColor(YELLOW);
            } else {
                setLEDColor(GREEN);
            }
        }
    } 

    if (currentMillis - lastSendTime >= dataSendFrequency) {
        lastSendTime = currentMillis;

        // Determine effective box size based on mode:
        // If boxSize is -1, then we use the auto-calculated value (box_size_auto).
        int effectiveBoxSize = boxSize;
        if (boxSize == -1 && box_size_auto > 0) {
            effectiveBoxSize = box_size_auto;
        }
        bool autoMode = (boxSize == -1);

        // Update additional fields in the data structure
        partdata.auto_mode = autoMode;
        partdata.auto_box_size = effectiveBoxSize;

        sendData(&partdata);
        Serial.println("Data sent to receiver");
        Serial.print("Updated Box Count: ");
        Serial.println(partdata.boxcount);
    }
}

void setup() {
    Serial.begin(115200);

    // Set the global pointer to the receiver MAC address
    receiverMAC = receiverMACAddr;

    // Initialize components
    initWiFi();
    initESPNow();
    addPeer();

    // Register receive callback to update global variables
    esp_now_register_recv_cb(onDataReceive);

    // Initialize data
    partdata.scanid = SENSORID;

    // Initialize the sensor (SDA = GPIO 4, SCL = GPIO 5)
    if (initializeSensor(4, 5) == -1) {
        Serial.println("Sensor initialization failed!");
        while (1) delay(10); // Halt execution if initialization fails
    }
}

void loop() {
    // Call the function to handle timings and send data
    updateDataAndSend();
}

