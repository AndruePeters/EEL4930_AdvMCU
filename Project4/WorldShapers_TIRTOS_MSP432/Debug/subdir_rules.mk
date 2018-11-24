################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP432 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="C:/ti/ccsv8/ccs_base/arm/include" --include_path="C:/ti/ccsv8/ccs_base/arm/include/CMSIS" --include_path="C:/Users/druep/Documents/EEL4930_AdvMCU/Project4/WorldShapers_TIRTOS_MSP432" --include_path="C:/Users/druep/Documents/EEL4930_AdvMCU/Project4/WorldShapers_TIRTOS_MSP432" --include_path="C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc/CMSIS" --include_path="C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc" --include_path="C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/driverlib/MSP432P4xx" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" --advice:power=all --advice:power_severity=suppress --define=__MSP432P401R__ --define=ccs --define=MSP432WARE -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1001510591:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1001510591-inproc

build-1001510591-inproc: ../clock.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_32_00_06_core/xs" --xdcpath="C:/ti/tirtos_msp43x_2_20_00_06/packages;C:/ti/tirtos_msp43x_2_20_00_06/products/bios_6_46_00_23/packages;C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages;C:/ti/tirtos_msp43x_2_20_00_06/products/uia_2_00_06_52/packages;C:/ti/ccsv8/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.msp432:MSP432P401R -r release -c "C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path=\"C:/ti/ccsv8/ccs_base/arm/include\" --include_path=\"C:/ti/ccsv8/ccs_base/arm/include/CMSIS\" --include_path=\"C:/Users/druep/Documents/EEL4930_AdvMCU/Project4/WorldShapers_TIRTOS_MSP432\" --include_path=\"C:/Users/druep/Documents/EEL4930_AdvMCU/Project4/WorldShapers_TIRTOS_MSP432\" --include_path=\"C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc/CMSIS\" --include_path=\"C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/inc\" --include_path=\"C:/ti/tirtos_msp43x_2_20_00_06/products/msp432_driverlib_3_21_00_05/driverlib/MSP432P4xx\" --include_path=\"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include\" --advice:power=all --advice:power_severity=suppress --define=__MSP432P401R__ --define=ccs --define=MSP432WARE -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi  " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1001510591 ../clock.cfg
configPkg/compiler.opt: build-1001510591
configPkg/: build-1001510591


