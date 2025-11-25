//
// Created by Abid Rey Magsambol on 11/12/25.
//
#include "../ArduinoXInput/src/XInput.h"
#include "controller.h"
#include "button.h"

Controller::Controller() : leftJoystick(), rightJoystick(), leftTrigger(), rightTrigger(), isRunning(true) {
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
    buttons[0] = new Button(1, 'L'); //left bumper
    buttons[1] = new Button(2, 'K'); //back
    buttons[2] = new Button(8, 'R'); //right bumper
    buttons[3] = new Button(9, 'B'); //b button
    buttons[4] = new Button(10, 'A'); //a button
    buttons[5] = new Button(14, 'Y'); //y button
    buttons[6] = new Button(15, 'M'); //menu button
    buttons[7] = new Button(16, 'X'); //x button

    //create trigger objects
    leftTrigger = new Trigger(0, 'L');
    rightTrigger = new Trigger(7, 'R');

    //create joystick objects
    leftJoystick = new Joystick(A3, A2);
    rightJoystick = new Joystick(A1,A0);

    //create dpad
    buttons[8] = new Button(3, 'U'); //up
    buttons[9] = new Button(5, 'D'); //down
    buttons[10] = new Button(4, 'L'); //left
    buttons[11] = new Button(6, 'R'); //right
}

void Controller::readUserUpdates() const {
    //read triggers
    XInput.setTrigger(TRIGGER_LEFT, leftTrigger->readTrigger());
    XInput.setTrigger(TRIGGER_RIGHT, rightTrigger->readTrigger());

    //read buttons
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

    //read joysticks
    XInput.setJoystick(JOY_LEFT, leftJoystick->readAnalogX(), leftJoystick->readAnalogY());
    XInput.setJoystick(JOY_RIGHT, rightJoystick->readAnalogX(), rightJoystick->readAnalogY());

    //read dpad
    XInput.setDpad(buttons[8]->checkIfIsPressed(), buttons[9]->checkIfIsPressed(), buttons[10]->checkIfIsPressed(), buttons[11]->checkIfIsPressed());
}

int Controller::callCommand() {
    return XInput.send();
}

bool Controller::getIsRunning() const {
    return isRunning;
}

Controller::~Controller() {
}
