# Checkpoint 3: Third Feature Plan

## Feature Name
Implementation of joysticks + triggers

## Feature Description
This checkpoint is to allow for the creation of joystick + trigger objects in
controller.initialize() in order for them to be read in the function readUserInpt()
The joystick will have an analog reader for both the x and y axis, and will have a reader
function wihtin the class that will return the value of the analog reader as an int.
The triggers I have are digital angled buttons, and hence have a reader function similar to 
other buttons but with different returns (int).

## Why this feature?
Without this feature, the controller would not be able to read and output joystick and trigger
values, which are essential for gaming. Joysticks are important in movement, triggers for other
special moves. It compliments with the previous features as these objects are being read with
the XInput functions implemented in controller.cpp.

## Classes involved
Controller
Joystick
Trigger, derived from buttons

## Expected User Workflow
User would move joystick, board will read analog values and output to computer.
User would press trigger buttons, board will read digital values and output to computer.

## Estimated Time
2 hours