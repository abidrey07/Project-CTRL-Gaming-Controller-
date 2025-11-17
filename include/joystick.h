//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H
#define PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H
#include <stdint.h>

class Joystick {
private:
    int16_t x = 0;
    int16_t y = 0;
    uint8_t analogXPin;
    uint8_t analogYPin;
public:
    Joystick(uint8_t analogXPin, uint8_t analogYPin);
    void move(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double newX);
    void setY(double newY);
    ~Joystick();
};

#endif //PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H