#ifndef ESPNOWSETUP_H
#define ESPNOWSETUP_H

#include <esp_now.h>
#include <WiFi.h>

// Global pointer for receiver MAC address
uint8_t *receiverMAC = nullptr;
extern bool sendFailed;

// Updated Data structure: added auto_mode and auto_box_size fields
struct Data {
    long scanid;
    int boxcount;
    bool auto_mode;
    int auto_box_size;
};

// Callback function to confirm data delivery
void onSent(const uint8_t *macAddr, esp_now_send_status_t status) {
    Serial.print("Send status: ");
    if (status == ESP_NOW_SEND_SUCCESS) {
        Serial.println("Success");
        sendFailed = false;  
    } else {
        Serial.println("Fail");
        setLEDColor(RED);    // Red = Send Failed
        sendFailed = true;
    }
}

// Initialize ESP-NOW
void initESPNow() {
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        while (true); // Stop execution
    }
    esp_now_register_send_cb(onSent);
    Serial.println("ESP-NOW initialized");
}

// Add a peer (receiver)
void addPeer() {
    if (receiverMAC == nullptr) {
        Serial.println("Receiver MAC address is not set");
        while (true); // Stop execution
    }

    esp_now_peer_info_t peerInfo;
    memcpy(peerInfo.peer_addr, receiverMAC, 6);
    peerInfo.channel = 0;  // Default channel
    peerInfo.encrypt = false;  // No encryption

    if (esp_now_add_peer(&peerInfo) != ESP_OK) {
        Serial.println("Failed to add peer");
        while (true); // Stop execution
    }
    Serial.println("Peer added successfully");
}

// Send data
void sendData(Data *data) {
    if (receiverMAC == nullptr) {
        Serial.println("Receiver MAC address is not set");
        return;
    }
    esp_now_send(receiverMAC, (uint8_t *)data, sizeof(*data));
    Serial.println("Data sent");
}

#endif // ESPNOWSETUP_H
