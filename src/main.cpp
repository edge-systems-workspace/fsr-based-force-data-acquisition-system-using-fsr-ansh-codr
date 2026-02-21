// main.cpp
#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author ansh-codr
 * @date 2026-02-21
 */

#define FSR_PIN A0

int fsrValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("=== FSR Force Measurement System Initialized ===");
}

void loop() {

    fsrValue = analogRead(FSR_PIN);

    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    if (fsrValue > 100) {
        Serial.println("Pressure Detected!");
    } else {
        Serial.println("No Significant Pressure.");
    }

    delay(500);
}