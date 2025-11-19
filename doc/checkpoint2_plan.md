# Checkpoint 2: Second Feature Plan
note: I worked on the second feature as seen in my previous commit. The first feature I worked on was 
the initialize() function on controller class.

## Feature Name
readUserUpdates(); on controller class (pt. 1: implementing buttons) + callCommand() (working on two features because this one is relatively easy)

## Description
This feature will read user input from the controller, return a bool that shows whether the button is
being pressed or not, and send that signal to XInput for it to be sent to the computer for reading through 
callCommand function. (syntax is literally just XInput.send()).

## Why This Feature?
I am implementing this feature because this is the fundamental feature of the program which allows the user to
interact with the computer via the controller. This is the most important feature, and this will be the feature 
that is broken down into parts because there are different commands for triggers and joysticks. The buttons are
the easiest to implement, the XInput command to check button press is the easiest out of all the parts. 

## Classes Involved
Controller Class, Button Class, XInput Class

## Expected User Workflow
A user presses the button, signal is sent to the pin on the micro board saying that the button is pressed, the program
sends that signal that this button is pressed to the computer for it to handle the rest.

## Estimated Time
3 hours