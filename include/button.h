//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H
#define PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H
#include "../ArduinoXInput/src/XInput.h"

class Button {
protected:
    uint8_t pin; //pin on board associated with button
    char name; //limited RAM in pro micro as compared to computer CPU, use char instead of string
    bool isPressed = false;
public:
    Button(uint8_t pin, char name);
    bool checkIfIsPressed(); //if pressed, set to true
    virtual ~Button();
};

class Trigger : public Button { //triggers i have are digital buttons, not analog
public:
    Trigger(uint8_t pin, char name);
    int readTrigger();
    virtual ~Trigger() override;
};

#endif //PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H