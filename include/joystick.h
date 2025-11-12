//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H
#define PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H

class Joystick {
private:
    double x=0;
    double y=0;
public:
    Joystick();
    void move(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double newX);
    void setY(double newY);
    ~Joystick();
};

#endif //PROJECT_CTRL_GAMING_CONTROLLER_JOYSTICK_H