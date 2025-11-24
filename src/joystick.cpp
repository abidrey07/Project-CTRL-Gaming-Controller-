//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "joystick.h"

#include <Arduino.h>

Joystick::Joystick(uint8_t analogXPin, uint8_t analogYPin) : x(0), y(0), analogXPin(analogXPin),
                                                             analogYPin(analogYPin) {
}

void Joystick::move(double x, double y) {
    x = this->x;
    y = this->y;
}

double Joystick::getX() const {
    return x;
}

double Joystick::getY() const {
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
