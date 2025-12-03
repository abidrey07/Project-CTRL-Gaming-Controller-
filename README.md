# Project: CTRL (Gaming Controller)
Program for Arduino gaming controller with built-in commands for each input/button + firmware components for user interaction
## Features
- 8  buttons ( X Y A B + arrow buttons)
- 2 extra buttons (Menu + power)
- 2 joysticks
- 2 trigger buttons (LT/RT)
- 2 extra buttons (L1/R1)
- Arduino kit (including PCB board and soldering kits)
- Back-end code for each button
## Building
```bash
mkdir build
cd build
cmake ..
cmake --build .

```
## Usage

```
./ProjectCTRL
```
## Author
Abid Rey Magsambol - CIS 25 Final Project

### Step 3: Initialize Git Repository
```bash
cd your_project_name
git init
git add .
git commit -m "Initial project structure"
```

```markdown
## Current Status

**Implemented Features**:
- ✅ Feature 1: Initialize controller 
    - Utilizing XInput library (to initialize physical firmware controller):
        - Set autosend to false so that button commands are sent manually to computer
        - Joysticks we have only accept values between 0 to 1023, so set values
        - begin program to intiate loop to communicate back and forth between controller and computer
        - intialize pins
- ✅ Feature 2: readUserInput() 
    - Utilizing XInput library:
        - FIRST: created button objects for each button on the controller via intialize() function
        - Arguments for XInput function setButton: (button being pressed [declared as enum within XInput library], state of button [true/false])
        - Each button object has a member function that returns a boolean value of whether the button is pressed or not based on the digital read of the button.
        - SECOND: created joystick objects for each joystick on the controller via intialize() function
        - Arguments for XInput function setJoystick: (joystick being pressed [declared as enum within XInput library], int analogX value, int analogY value)
        - THIRD: created trigger objects for each trigger on the controller via intialize() function
        - Arguments for XInput function setTrigger: (trigger being pressed [declared as enum within XInput library], int digitalReadValue)
        - FOURTH (outside of project): set up D-pad on controller to send input to computer
        - Arguments for Dpad: (up button bool read, down arrow button bool read, left arrow button bool read, right arrow button bool read)
- ✅ Feature 3: Send input to computer
  - Utilizing XInpit library (XInput.send())
      - Any updates that were detected by the program from readUserInput() is officially sent to the computer when this function is called.

**In Progress**:

**Planned**:
- Figure out how to make controller compatible to programs outside of PlatformIO

**Known Issues**:
- Controller only works within PlatformIO feature "Upload and Monitor" Controller doesn't work in real-life
setting in which it is intended to be used as a controller used for gaming programs outside of PlatformIO.
```
