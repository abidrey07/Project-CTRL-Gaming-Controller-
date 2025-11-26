//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "button.h"
#include "../ArduinoXInput/src/XInput.h"

Button::Button(uint8_t associatedPin, char name) : pin(associatedPin), name(name) {
}

bool Button::checkIfIsPressed() {
    isPressed = !digitalRead(pin);
    return isPressed;
}

char Button::getName() const {
    return name;
}

bool Button::getIsPressed() const {
    return isPressed;
}

Button::~Button() {
}

Trigger::Trigger(uint8_t pin, char name) : Button(pin, name){
}

int Trigger::readTrigger() {
    return digitalRead(pin) * -255 + 255;
};

Trigger::~Trigger() {
}

