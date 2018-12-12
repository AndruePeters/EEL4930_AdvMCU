# invoke SourceDir generated makefile for project6.pem4f
project6.pem4f: .libraries,project6.pem4f
.libraries,project6.pem4f: package/cfg/project6_pem4f.xdl
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\project6_alt/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\project6_alt/src/makefile.libs clean

