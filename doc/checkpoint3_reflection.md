```markdown
# Checkpoint 3 Reflection

## What I implemented
I did a lot of things while I was working. The main goal for this checkpoint was to successfully
create the joystick and trigger objects in order for them to be read on readUserInput(), marking the 
final crucial function that needs to be implemented for the controller to actually work.
The joystick object is created in controller.initialize and has an analogRead function that is used
to read joystick values in readUserInput().
Triggers are very similar to buttons, except their read values are ints instead of bools. Hence, they
are derived from the button class, but they also have an extra function which allows
for its own unique digital read value that takes into account of trigger value limits (-255 to 255).

## Integration
The joystick and trigger objects are created in controller.initialize and are used in readUserInput(). In its respectiveconstructor,
it takes in a pin that was initialized in the controller constructor as an argument.
The XInput library has special functions for joystick reads and trigger reads, hence the reason why 
separate classes are needed for organization and convenience.
the function XInput.setJoystick() takes in the joystick itself (in an enum decalred in the library itself), followed
by the analog reads of the X and y axes.
The function XInput.setTrigger() takes in the trigger itself (in an enum decalred in the library itself), followed
by the digital read value of the trigger.

## What I learned
I learned about the special data types used throughout the program. I also learned more about the XInput library and 
the way the joystick and trigger functions work. 
This was more about the other stuff that I worked on outside the third feature, but I had a refresher on implementation of destructors
and deleting dynamic memory on the heap with the objects created. I also learned that the Dpad itself has a special
XInput function that doesn't use the typical setButton() function. So, I had to create more buttons and make the array bigger
to make room for those buttons. I learned that I didn't need to set up a Dpad class because even though the function itself
is different, it still takes the same button reads as an argument.
I also learned about a Monitor program within PlatformIO that helps me run my tests. 

## Testing Results
The program runs without any errors. All buttons were outputted, and multiple button presses can be read

## Next Steps
- 100% of planned features completed
- I want to work on making it compatible for games. For some reason, the controller only works within PlatformIO when I am running the 
Monitor program. But, when I try to run the controller on my PC, it doesn't work. The controller works perfectly fine but I want
  to spend time outside of our final project class time to figure out how to get it working on other platforms.

## Time Spent
3.5 hours
```