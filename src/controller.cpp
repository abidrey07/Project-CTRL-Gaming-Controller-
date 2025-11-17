//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "../ArduinoXInput/src/XInput.h"
#include "controller.h"
#include "button.h"

Controller::Controller() : leftJoystick(), rightJoystick() {
    //set null, assign pins later
    for (int i = 0; i <= 8; i++) {
        buttons[i] = nullptr;
    }
    rightTrigger = nullptr;
    leftTrigger = nullptr;
}

void Controller::initialize() {
    XInput.setAutoSend(false); //set commands so that it is manually sent to computer, reduces latency
    XInput.setJoystickRange(0, 1023);
    XInput.begin(); //starts back n forth between controller & computer
    for (int i = 0; i <= 16; i++) { //loop to initialize all 16 pins on pcb
        if (i == 11 || i == 12 || i == 13) {
            continue; //skip
        }
        pinMode(i, INPUT_PULLUP); //sets pin to always on. when button is pressed, pin will be off and will be registered as command
    }
    //create button objects
    buttons[0] = new Button(1, 'LB'); //left bumper
    buttons[1] = new Button(2, 'BK'); //back
    buttons[2] = new Button(8, 'RB'); //right bumper
    buttons[3] = new Button(9, 'B'); //b button
    buttons[4] = new Button(10, 'A'); //a button
    buttons[5] = new Button(14, 'Y'); //y button
    buttons[6] = new Button(15, 'M'); //menu button
    buttons[7] = new Button(16, 'X'); //x button
}

void Controller::readUserUpdates() const {
    //left button - 1
    XInput.setButton(BUTTON_LB, buttons[0]->checkIfIsPressed());
    //back button - 2
    XInput.setButton(BUTTON_BACK, buttons[1]->checkIfIsPressed());
    //right button - 8
    XInput.setButton(BUTTON_RB, buttons[2]->checkIfIsPressed());
    //b button - 9
    XInput.setButton(BUTTON_B, buttons[3]->checkIfIsPressed());
    //a button - 10
    XInput.setButton(BUTTON_A, buttons[4]->checkIfIsPressed());
    //y button - 14
    XInput.setButton(BUTTON_Y, buttons[5]->checkIfIsPressed());
    //menu - 15
    XInput.setButton(BUTTON_START, buttons[6]->checkIfIsPressed());
    //x button - 16
    XInput.setButton(BUTTON_X, buttons[7]->checkIfIsPressed());
}

void Controller::callCommand() const {
    XInput.send();
}

bool Controller::getIsRunning() const {
    return isRunning;
}

Controller::~Controller() {
}
