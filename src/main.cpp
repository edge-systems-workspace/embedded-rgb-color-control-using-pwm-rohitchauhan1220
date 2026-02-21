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

    // TODO 4:
    // Initialize Serial communication (9600 baud)

    // TODO 5:
    // Configure RGB pins as OUTPUT

    // TODO 6:
    // Print initialization message
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

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
