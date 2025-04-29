#line 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\WiFiSetup.h"
#ifndef WIFISETUP_H
#define WIFISETUP_H

#include <WiFi.h>

void initWiFi() {
    WiFi.mode(WIFI_STA);
    Serial.println("Wi-Fi set to station mode");
}

#endif // WIFISETUP_H
