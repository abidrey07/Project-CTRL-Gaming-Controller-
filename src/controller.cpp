//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "../ArduinoXInput/src/XInput.h"
#include "controller.h"

Controller::Controller() {
}

void initialize() const {
    XInput.setAutoSend(false); //set commands so that it is manually sent to computer, reduces latency
    XInput.setJoystickRange(0, 1023);
    XInput.begin(); //starts back n forth between controller & computer
    for (int i = 0; i <= 16; i++) { //loop to initialize all 16 pins on pcb
        if (i == 11 || i == 12 || i == 13) {
            continue; //skip
        }
        pinMode(i, INPUT_PULLUP); //sets pin to always on. when button is pressed, pin will be off and will be registered as command
    }
}

void Controller::getUserInput() const {
}

void Controller::callCommand() const {
}

bool Controller::getIsRunning() const {
    return isRunning;
}

Controller::~Controller() {
}

void Controller::translateUserInputToCommand() const {
}