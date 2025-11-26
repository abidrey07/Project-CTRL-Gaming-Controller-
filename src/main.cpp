#include <Arduino.h>
#include "button.h"
#include "controller.h"
#include "joystick.h"
#include "../ArduinoXInput/src/XInput.h"

Controller controller; //set up globally so that it is not deleted after setup()

void setup() {
    delay(3000);
    controller.initialize();
}

void loop() {
// base implementation to be transferred appropriately to classes
    controller.readUserUpdates();
    controller.callCommand();
}