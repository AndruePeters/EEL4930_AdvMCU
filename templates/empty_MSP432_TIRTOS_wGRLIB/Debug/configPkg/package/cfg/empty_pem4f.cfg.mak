# invoke SourceDir generated makefile for empty.pem4f
empty.pem4f: .libraries,empty.pem4f
.libraries,empty.pem4f: package/cfg/empty_pem4f.xdl
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\empty_MSP432_TIRTOS_wGRLIB/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\empty_MSP432_TIRTOS_wGRLIB/src/makefile.libs clean
