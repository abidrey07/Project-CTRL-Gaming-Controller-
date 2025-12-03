# Section 1: Project Summary
## What is my project?
- Arduino Gaming Controller with analog joysticks, buttons, and digital triggers programmed
using Object-Oriented Programming in C++. 
## Features implemented:
  - Controller Initialization
    - Intializing pins on the Arduino board
    - Setting pin modes
    - creating feature objects (joystick, buttons, triggers) for them to be used in read function
  - Reading user input
    - Reading analog joystick values
    - Reading digital button values
      - Outputting the button type to the computer (if one of the XYAB buttons is pressed, program recognizes it)
    - Reading digital trigger values
      - Digital read values up to 255
  - Sending user input to computer (XInput.send())
    - Sends all user input to the computer for handling
## What does your project do well?
- My project successfully integrates the XInput library and commands into Object-Oriented Programming 
style.
- My project is able to fully function as a working Xbox gaming controller that outputs correct values
for analog joysticks, button and trigger presses

# Section 2: What Remains
## What features from your original plan are not implemented?
- Going off of the `implementation_plan.md` file, I implemented all features I have laid out in the plan.
## What bugs or issues remain?
- In terms of programming, there are no bugs or issues that remain. The controller fully functions as intended
- In terms of hardware, there are no issues regarding pin reading. The hardware fully works and there are no
connection errors that I have to fix
- The main issue is configuration. The controller only works under the Monitor system within the PlatformIO plug-in.
However, the controller fully works with uploaded code. I need to figure out a way to configure the controller on my
device to have the computer read it and recognize it as an Xbox gaming controller. 

# Section 3 : Time Estimate
(no remaining items needed to implement, so no time estimate)

# Section 4: What I learned
## What C++ concepts did you learn or improve on?
- Throughout this project, I really had to adopt an Object-Oriented Programming mindset to code a controller that doesn't
necessarily need to have classes. A lot of the tutorials I saw online did not utilize the same OOP approach as I did, so it
definitely challenged my thinking. I improved a lot on my understanding of objects and how to implement them. 
## What was the hardest part of your project?
- The main learning curve I had to overcome was building the constructors and destructors for each class. I kept forgetting to delete
my dynamically allocated memory for each object. It was also challenging for me to implement my constructors and correctly
initializing all of my private variables. Especially with the controller class, since that had the most private members I had
to initialize.
## What would I do differently if starting over?
- I think that if I had to start over this project again, I would not have added a lot of useless features that were never used. A lot
of the initial planning I did before starting this project was without much knowledge on the XInput library and what kind of functions
within the library I could use for my project.
- If I had to start over, I would first study a little more about the various functions within the XInput library that I would need
to implement in my project. Then, I would use that knowledge to make my initial implementation plan for each class. This is to avoid
making unnecessary features that not only are never used, but also clump up my code and confuse me.
## What are you most proud of?
- I am most proud of the physical product that I created. The controller itself looks really cool and I felt really cool designing 
the controller and putting together all the parts with the soldering iron. I felt  like Tony Stark. 
How has your understanding of data sturctures changed?
- I have a better understanding of how to use arrays and pointers to store data. I also have a better understanding of how to use
classes and objects to store data. Dynamically allocated memory was a major learning curve that I had to overcome, and my understanding of
how memory on the heap is stored and used has drastically improved.

# Section 5: Time Log
- Planning and design (including time used for hardware): 6 hours
- Implementation: 9 hours
- Testing and debugging: 3 hours
- Documentation: 2 hours
- Total: 20 hours