```markdown
# Checkpoint 2 Reflection

## What I Implemented
I implemented many new things in my program. The main thing I worked on was implementing the readUserUpdates() function. As a result, I had to make updates to
the initialize() function as I needed to create my button objects in order for them to be used in the readUserUpdates() function. I also needed to refine
my button class and properly implement its constructor + refining the private implementation of the button class.
I also implemented the callCommand() function, which was really easy to implement because all it does is send any updates detected by the program from the button
presses into the computer for it to handle the rest. All it really is is an XInput function called XInput.send(). 

# How it integrates with first feature
The readUserUpdates() function cannot be used without the initialize() function being called first, or else nothing will be created and there won't be anything for the
controller to read. The initialize() function helps create the button objects that the readUserUpdates() function needs to work properly.

## Challenges I Faced
Some challenges I faced were implementing the constructors for the button class and the functions buttons need to interact with the XInput library. I knew
that the digitalRead function needed to be called somehow, but I couldn't figure out if it had to be implemented within the controller class or if it just needed to 
be used wihtin the button class itself in order for it to return a bool (which is what it needs to return anyway to determine if the button is pressed or not).
It was hard for me at first to figure out what kinds of private variables I needed to create in order for the button class to work properly. But, I figured out that it's
actually a lot easier than I thought and all it really needed is a special data type called uint8_t (an int with less bytes) to store the pin number that the button is attached to.

## What I Learned
I learned a lot about how to use the XInput library and how to properly implement it in my program. I also learned about a special kind of data type called uint8_t, which
is a special data type that is used to store numbers with less bytes. This was a very important thing for me to learn, especially since I had to take into account
that the Arduino Pro Micro has very limited RAM and I needed to make sure that my program didn't run out of memory.
I also learned that there are different setter functions within the XInput library that I need to use for each specific part of the controller. There is a setter 
function for the buttons that read digital values to see if the buttons are being pressed, and there is a setter function for the triggers and joysticksthat read analog values
to see how much force is being applied to the triggers. I figured that I would handle each part at another time, perhaps when the third feature assignment is due. 


# Test Results
I used the "Upload and Monitor" feature on the PlatformIO plug-in to test my program. When I pressed the buttons on my controller, it showed the character of the button I was pressing
(eg. when I pressed the A button, it showed "A"). This worked also for multiple button presses.

## Questions for Next Checkpoint

## Time Spent
Approximately 2 hours
```