#include <Arduino.h>
#include "button.h"
#include "controller.h"
#include "joystick.h"
#include "../ArduinoXInput/src/XInput.h"
void setup() {
    Controller controller;
    controller.initialize();
}

void loop() {
// base implementation to be transferred appropriately to classes

    //left trigger - 0 trigger value range from 0 to 255
    XInput.setTrigger(TRIGGER_LEFT, digitalRead(0) * -255 + 255);
    //left button - 1
    XInput.setButton(BUTTON_LB, !digitalRead(1));
    //back button - 2
    XInput.setButton(BUTTON_BACK, !digitalRead(2));
    //up dpad - 3 down - 5 left - 4 right - 6
    XInput.setDpad(!digitalRead(3),!digitalRead(5),!digitalRead(4), !digitalRead(6));
    //right trigger - 7
    XInput.setTrigger(TRIGGER_RIGHT, digitalRead(7) * -255 + 255);
    //right button - 8
    XInput.setButton(BUTTON_RB, !digitalRead(8));
    //b button - 9
    XInput.setButton(BUTTON_B, !digitalRead(9));
    //a button - 10
    XInput.setButton(BUTTON_A, !digitalRead(10));
    //y button - 14
    XInput.setButton(BUTTON_Y, !digitalRead(14));
    //menu - 15
    XInput.setButton(BUTTON_START, !digitalRead(15));
    //x button - 16
    XInput.setButton(BUTTON_X, !digitalRead(16));
    // a2 a3 left joystick
    XInput.setJoystick(JOY_LEFT, analogRead(A3),analogRead(A2));
    //a0 a1 right joystick
    XInput.setJoystick(JOY_RIGHT, analogRead(A1),analogRead(A0));

    XInput.send();
}