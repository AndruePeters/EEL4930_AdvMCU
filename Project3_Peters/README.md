This has been updated as of 10/15/2018 2:15 PM.

This change is needed because you cannot do part (1) with part (4). You need to move one of the jumpers to change the brightness of the LCD Display, which means you can't use it to change the LED color using PWM.

So, I want you to break the project into 2 programs. Program 1 should implement parts (1), (2), and (3). Program 2 should implement parts (2), (3), and (4). One way to accomplish this will be to develop Program 1. Then, edit a copy of Program 1 by commenting out the code for part (1) and adding the code for part (4). Be sure to use incremental development, and consider saving versions of the program when you get some item working.

Requirements:

(1) brighten the LCD display when the room is darker (use the light sensor)

(2) display the current accelerometer values for X, Y, and Z directions, as well as the largest acceleration value in each direction since the program is reset (you can choose the reset button).

(3) when a significant level (you decide what is significant) of acceleration is measured in the any direction, make an audible, relatively brief, buzzer sound -- this is kind of like a "fall detector".

(4) Display a color on the colored LED that has an R value proportional to the X direction, a G value proportional to the Y direction, and a B value proportional to the Z direction.

 
