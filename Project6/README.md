Name: Andrue Peters
Class: EEL4930 Advanced Microprocessor
Prof: Dr. Linda DeBrunner
Date: 11/28/18
 
 # Thoughts
 This was an extremely rewarding project to do. It involved diving into an RTOS for the first time; learning
 the basics of thread-safe code; creative design in order to remain simple to understand and modularize.
 
 I would say I am proud of this as my first program ever written using an RTOS.
 
 There were several issues along the way. I learned (through no help of TI's documentation), that Ihad to edit
 the MSP_EXP432P401R.c, MSP_EXP432P401R.h, and Board.h to create the configuration that I needed for each ADC
 and GPIO peripheal I needed to use.
 
 I also realized that the ADC driver implentation (ADCMSP432.c), used an ADC_MEM reference voltage that was 
 throwing my ADC conversion results off. Fixing it required me reading the datasheet of the accelerometer
 and realizing that it the memory needed to have the same reference voltage as the accelerometer (about 3.3V).
 
 I also had to dig around the source code to understand how everything was linked together in order to fix a 
 majority of issues.
 
 I added the majority of stuff to this readme I thought was good to have.
 You can find function specific comments in the project5.c and project5.h.
 project5.c comments mostly concerns implementation
 project5.h comments are mostly generic descriptions of functionality.
 
 !! If this does not compile on your computer, then it is probably due to file path issues.
    Just click debug to flash your board with my program and ignore compile issues.
    The binary is already built for you.
 
# Functionality 
	1) First thing to happen is the splash screen pops up. Nothing else can happen until 5 seconds later.
       After the 5 seconds, the screen changes and shows sensor values. Temperature updated automatically
       only this once. All other updates to temperature happen at the press of a button described in 2).
       
    2) Pressing S2 on the booster pack causes the temperature to be udpated and drawn on the LCD.
       This also causes the accel_max to be written to the screen as well.
       
    3) Waits to start until after 5 seconds, and then reads accelerometer values at a rate about 50Hz.
    
    4) Buzzer sounds when device is "thought" to be falling.
    
    5) accel_max is updated when the buzzer sounds
    
# Task Descriptions
## TSK_process_accelerometer()
	* This task is only responsible for reading and writing acceleromater data and telling LCD to udpate these values.
	* It runs periodically by pending SEMHDL_update_accel semaphore. This semaphore is posted periodically by 
	  CLK_TSK_read_accelerometer() at a rate approximately 50Hz.
	* Process to convert ADC to g forces [pseudocode]
		1) var adc_gs
		2) adc_gs = read_accelerometer()
		3) adc_gs = adc_to_volts(adc_gs)
		4) adc_gs = adc_gs - 0G_OFFSET
		5) adc_gs = adc_gs / ACCELEROMETER_SENSITIVITY
	* 0G_OFFSET should be in units of [V] and is found in the accelerometer data sheet
	* ACCELEROMETER_SENSITIVITY found in datasheet in units of [mV/g]. Convert to [V/g] for this use.
	  
### Internal Function Calls
 	* ADC_read_accelerometer()
	* ADC_update_max()
	* ADC_device_is_falling()
	* ACCEL_read_x_axis()
	* ACCEL_read_y_axis()
	* ACCEL_read_z_axis()
	* ACCEL_convert_to_g()
	
### Semaphore Use
	* __Pends__
		* SEMHDL_update_accel
		* SEMHDL_accel_curr
		* SEMHDL_accel_max
		* SEMHDL_disp_flags
	
	* __Posts__
		* SEMHDL_accel_curr
		* SEMHDL_accel_max
		* SEMHDL_disp_flags
		* SEMHDL_update_LCD
### Problems:

#### Fall Detection
	* The fall detection works by comparing curr_accel to prev_accel. If both are below ACCEL_G_LIMIT, then device 
	  is said to be falling.
	* The perk of this approach is that it is comparing values separated by time. Future revisions would create a 
	  one-shot clock instance to see if it's still below that threshold after a specific period has passed, but this. 
	  method suffices for now since the ADC is being sampled at roughly 50Hz.
	* The problem is that the device thinks it's falling even when the device is flipped upside down. 
	* When the device is falling, the acceleration should be -1g. However, because of offset issues it gets closer to 0g
	  when falling. The check is actually set 0.3 g because of calibration issues. So, if current acceleration and previous 
	  acceleration are less than 0.3 g, then device is falling
	* The acceleration is -0.5 g when the device is upside down however. So, it's not possible to deterime Z orientation
	  based upon g forces alone.
	* To fix this issue, pair accelerometer with a gyroscope. The combination allow you to realize actual orientation
	  as well as things like whether or not the device is spinning while it's falling. It creates a powerful combination.
	  
## TSK_process_temp_sensor()
	* Task that handles reading the temperature sensor
	* Waits on SEMHDL_update_temp semaphore to be posted by BTN2_BP_Callback()
	* Reads temperature using given drivers from TI.
	* Tells TSK_update_LCD() to display accel_max and temperature
	
### Internal Function Calls
 	* Hwi_disable()
 	* TMP006_getTemp()
	
### Semaphore Use
	* __Pends__
		* SEMHDL_update_temp
		* SEMHDL_temperature
		* SEMHDL_disp_flags
	
	* __Posts__
		* SEMHDL_temperature
		* SEMHDL_disp_flags
		
## TSK_update_LCD()
	* Task used for updating LCD
	* GRLIB is not threadsafe, so it is all contained within this task
	* Waits for SEMHDL_update_LCD to be posted before it runs the update routine
	* Uses flags to determine which item to update on the LCD
	* Only draws what needs to be updated
		* First time through, it draws the labels
		* All other times it only updates the accelerometer values and temperature as need

### Internal Function Calls
 	* LCD_draw_labels() (only called first time task is run)
 	* LCD_draw_accel_max()
 	* LCD_draw_curr_accel()
 	* LCD_draw_temperature()
	
### Semaphore Use
	* __Pends__
		* SEMHDL_update_LCD
		* SEMHDL_disp_flags
		* SEMHDL_accel_curr
		* SEMHDL_accel_max
		* SEMHDL_temperature
	
	* __Posts__
		* SEMHDL_disp_flags
		* SEMHDL_accel_curr
		* SEMHDL_accel_max
		* SEMHDL_temperature
		
# Clock Task Description
\* Clocks are actually Swi's in disguise. So, you can't call any blocking functions within them!

## CLK_TSK_LCD_draw_splash_screen()
	* Draws splash screen and starts CLK_HDL_accel
	* One-shot clock
	* First task to run
	* Essentially runs for 5 seconds
	
## CLK_TSK_read_accelerometer()
	* Posts SEMHDL_update_accel(), thereby unblocking TSK_update_LCD()
	* Runs at roughly 50 Hz
	* Doesn't run until 5 seconds after being created within CLK_TSK_LCD_draw_splash_screen()
	
