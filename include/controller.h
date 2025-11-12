//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H
#define PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H
#include "button.h"
#include "joystick.h"

class Controller {
private:
    Button buttons[13];
    Joystick leftJoystick;
    Joystick rightJoystick;
    bool isRunning;
public:
    Controller(); //intialize controller, initialize all button and joysticks in src files
    void run(); //while running, loop for userinput
    void getUserInput() const; //wait for user input. send it over to translate
    void callCommand() const;
    //gets translation from translateUserInputToCommand, calls buttonFunction if button is pressed, calls move() if joystick
    bool getIsRunning() const;
    ~Controller();
    void translateUserInputToCommand() const; //TODO: figureout how to translate controller commands to pc using XInput
};


#endif //PROJECT_CTRL_GAMING_CONTROLLER_CONTROLLER_H