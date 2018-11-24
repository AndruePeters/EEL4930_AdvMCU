# invoke SourceDir generated makefile for adcsinglechannel.pem4f
adcsinglechannel.pem4f: .libraries,adcsinglechannel.pem4f
.libraries,adcsinglechannel.pem4f: package/cfg/adcsinglechannel_pem4f.xdl
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\adcsinglechannel_MSP_EXP432P401R_TI/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\druep\Documents\EEL4930_AdvMCU\adcsinglechannel_MSP_EXP432P401R_TI/src/makefile.libs clean

