//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "button.h"
#include "../ArduinoXInput/src/XInput.h"

Button::Button(uint8_t associatedPin, char name) : pin(associatedPin), name(name) {
    pinMode(associatedPin, INPUT_PULLUP);
}

void Button::buttonFunction() const {
}

bool Button::checkIfIsPressed() {
    return !digitalRead(pin);
}

char Button::getName() const {
    return name;
}

bool Button::getIsPressed() const {
    return isPressed;
}

Trigger::Trigger(uint8_t pin, char name) : Button() {
}

bool Trigger::checkIfIsPressed() {
    return !digitalRead(pin) * -255 + 255;
}

Trigger::~Trigger() {
}

double Trigger::getPressure() const {
    return pressureValue;
}
