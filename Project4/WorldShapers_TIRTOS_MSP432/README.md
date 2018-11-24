# WorldShapers - Andrue Peters Edits

## Basic Functionality
	* Use joystick to move "ship" up, down, left, and right. Ship automatically moves back to middle center.
	* Use the top button, S1 on the expansion board, to shoot
	* (Hint) What happens if you touch aliens without shooting them on the first level"
	
## Changes Made and How Things Work
	Disclaimer, this code is an absolute mess, but there are some worthwhile things learning in this.
	* Added an extra level
		+ This extra level is designed to force the user to kill a lot of aliens that move fast and have a lot of health and damage. Good luck.
	* Added custom ship
		+ Went through source code and googled BSP_ and found original tools from here: https://www.st.com/en/embedded-software/stemwin.html
		+ Used this tool to convert photoshopped image to a C array
		+ Chose Pacman because it was classic and simple
	* Added custom alien, which is just a green ghost from Pacman
		+ Contact with ghost will kill you unless you go passive on the first level
		+ Ghosts have four times more life than any other alien
		+ New score after contact is: score = score / 2 + score / 4
		+ Four colors for ghosts: Red, Green, Blue, and Orange
	* Added custom scoring for hitting my ghosts
		The difficult part of this was figuring out how to differentiate between ghost and normal alien.
		I realized that my ghost had different dimensions, so I could just check the dimensions of the
		current "Thing" to see if it was my alien. If Thing[i].h == 24, then it was my ghost.
		For future versions, I would add an id element to the sprite struct. 
		
## Things Learned
	* This didn't really cause me to learn anythign related to an RTOS.
		+ I did see how the original programmer used Semaphores for thread safety
	* Before this, I doubted I could make a game on the MSP432, but I believe I can now. I think it would be better than the default WorldShapers.
	* My life is going to be full of reading code like this and I'll be forced to understand and fix it.
	* After going through the source code I found that the BCP draw functions use 16 bit image in RGB565 format.