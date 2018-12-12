# invoke SourceDir generated makefile for mailbox.pem4f
mailbox.pem4f: .libraries,mailbox.pem4f
.libraries,mailbox.pem4f: package/cfg/mailbox_pem4f.xdl
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/mailbox_MSP_EXP432P401R_tirtos_ccs/src/makefile.libs

clean::
	$(MAKE) -f /Users/druepeters/Documents/Development/EEL4930_AdvMCU/mailbox_MSP_EXP432P401R_tirtos_ccs/src/makefile.libs clean

