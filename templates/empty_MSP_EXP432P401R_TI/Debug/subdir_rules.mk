################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/Applications/ti/ccsv8/ccs_base/arm/include" --include_path="/Applications/ti/ccsv8/ccs_base/arm/include/CMSIS" --include_path="/Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP_EXP432P401R_TI" --include_path="/Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP_EXP432P401R_TI" --include_path="/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc/CMSIS" --include_path="/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc" --include_path="/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/driverlib/MSP432P4xx" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/include" --advice:power=all --advice:power_severity=suppress --define=__MSP432P401R__ --define=ccs --define=MSP432WARE -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1009269761:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1009269761-inproc

build-1009269761-inproc: ../empty.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/Users/druepeters/ti/xdctools_3_32_00_06_core/xs" --xdcpath="/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/packages;/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/bios_6_46_00_23/packages;/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages;/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/uia_2_00_06_52/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.msp432:MSP432P401R -r release -c "/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path=\"/Applications/ti/ccsv8/ccs_base/arm/include\" --include_path=\"/Applications/ti/ccsv8/ccs_base/arm/include/CMSIS\" --include_path=\"/Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP_EXP432P401R_TI\" --include_path=\"/Users/druepeters/Documents/Development/EEL4930_AdvMCU/templates/empty_MSP_EXP432P401R_TI\" --include_path=\"/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc/CMSIS\" --include_path=\"/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc\" --include_path=\"/Users/druepeters/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/driverlib/MSP432P4xx\" --include_path=\"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.3.LTS/include\" --advice:power=all --advice:power_severity=suppress --define=__MSP432P401R__ --define=ccs --define=MSP432WARE -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi  " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1009269761 ../empty.cfg
configPkg/compiler.opt: build-1009269761
configPkg/: build-1009269761


