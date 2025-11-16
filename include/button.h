//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H
#define PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H
#include "../ArduinoXInput/src/XInput.h"

class Button {
protected:
    uint8_t pin; //pin on board associated with button
    char name; //limited RAM in pro micro as compared to computer CPU
    bool isPressed = false;
public:
    Button(uint8_t pin, char name);
    void buttonFunction() const;
    virtual bool checkIfIsPressed(); //if pressed, set to true
    ~Button() {};
    char getName() const;
    bool getIsPressed() const;
};

class Trigger : public Button {
private:
    double pressureValue = 0.0;
    uint8_t analogPin;
public:
    Trigger(uint8_t pin, char name, uint8_t analogPin);
    virtual bool checkIfIsPressed() override; //extra code to take into account of trigger pressure
    virtual ~Trigger();
    double getPressure() const;
};

#endif //PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H