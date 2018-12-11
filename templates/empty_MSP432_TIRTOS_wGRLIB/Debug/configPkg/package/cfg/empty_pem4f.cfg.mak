# invoke SourceDir generated makefile for empty.pem4f
empty.pem4f: .libraries,empty.pem4f
.libraries,empty.pem4f: package/cfg/empty_pem4f.xdl
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP432_TIRTOS_wGRLIB/src/makefile.libs

clean::
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP432_TIRTOS_wGRLIB/src/makefile.libs clean

