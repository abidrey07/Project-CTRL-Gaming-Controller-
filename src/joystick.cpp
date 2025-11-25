//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "joystick.h"
#include "../ArduinoXInput/src/XInput.h"
#include <Arduino.h>

Joystick::Joystick(uint8_t analogXPin, uint8_t analogYPin) : x(0), y(0), analogXPin(analogXPin),
                                                             analogYPin(analogYPin) {
}

void Joystick::move(int16_t x, int16_t y) {
    this->x = x;
    this->y = y;
}

int16_t Joystick::getX() const {
    return x;
}

int16_t Joystick::getY() const {
    return y;
}

int32_t Joystick::readAnalogX() {
    return analogRead(analogXPin);
}

int32_t Joystick::readAnalogY() {
    return analogRead(analogYPin);
}


void Joystick::setX(double newX) {
    x = newX;
}

void Joystick::setY(double newY) {
    y = newY;
}

Joystick::~Joystick() {
}
