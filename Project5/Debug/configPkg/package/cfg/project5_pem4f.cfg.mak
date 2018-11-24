# invoke SourceDir generated makefile for project5.pem4f
project5.pem4f: .libraries,project5.pem4f
.libraries,project5.pem4f: package/cfg/project5_pem4f.xdl
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\Project5/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\Project5/src/makefile.libs clean

