//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H
#define PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H
#include "button.h"
#include "joystick.h"
#include "../ArduinoXInput/src/XInput.h"

class Controller {
private:
    Joystick * leftJoystick;
    Joystick * rightJoystick;
    Trigger * leftTrigger;
    Trigger * rightTrigger;
    Button * buttons[12];
    bool isRunning = false;
public:
    Controller(); //intialize controller, initialize all button and joysticks in src files
    void initialize();
    void readUserUpdates() const; //wait for user input. send it over to translate
    int callCommand();
    //gets translation from translateUserInputToCommand, calls buttonFunction if button is pressed, calls move() if joystick
    bool getIsRunning() const;
    ~Controller();
};




#endif //PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H
