//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "joystick.h"

Joystick::Joystick() : x(0), y(0) {
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

void Joystick::setX(double newX) {
    x = newX;
}

void Joystick::setY(double newY) {
    y = newY;
}

Joystick::~Joystick() {
}
