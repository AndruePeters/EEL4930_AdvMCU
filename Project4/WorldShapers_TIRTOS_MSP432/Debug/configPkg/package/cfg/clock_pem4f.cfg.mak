# invoke SourceDir generated makefile for clock.pem4f
clock.pem4f: .libraries,clock.pem4f
.libraries,clock.pem4f: package/cfg/clock_pem4f.xdl
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\Project4\WorldShapers_TIRTOS_MSP432/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\Project4\WorldShapers_TIRTOS_MSP432/src/makefile.libs clean

