#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Rohit Chauhan
 * @date 2026-02-DD
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11
void setup() {
    Serial.begin(9600);
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    Serial.println("RGB LED Control System");
    Serial.println("System Initialized...\n");
}
}

void loop() {

    digitalWrite(RED_PIN, HIGH);
    delay(1000);


    digitalWrite(RED_PIN, LOW);
    delay(1000);


    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
