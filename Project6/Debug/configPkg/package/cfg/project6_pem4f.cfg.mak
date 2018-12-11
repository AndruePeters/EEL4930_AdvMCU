# invoke SourceDir generated makefile for project6.pem4f
project6.pem4f: .libraries,project6.pem4f
.libraries,project6.pem4f: package/cfg/project6_pem4f.xdl
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/Project6/src/makefile.libs

clean::
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/Project6/src/makefile.libs clean

