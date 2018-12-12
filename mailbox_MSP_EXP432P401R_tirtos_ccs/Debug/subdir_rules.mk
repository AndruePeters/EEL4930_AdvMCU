################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/Users/druepeters/Documents/Development/EEL4930_AdvMCU/mailbox_MSP_EXP432P401R_tirtos_ccs" --include_path="/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source/third_party/CMSIS/Include" --include_path="/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --advice:power=none -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1211994015:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1211994015-inproc

build-1211994015-inproc: ../mailbox.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/Applications/ti/xdctools_3_50_08_24_core/xs" --xdcpath="/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source;/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/kernel/tirtos/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.msp432:MSP432P401R -r release -c "/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path=\"/Users/druepeters/Documents/Development/EEL4930_AdvMCU/mailbox_MSP_EXP432P401R_tirtos_ccs\" --include_path=\"/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source/third_party/CMSIS/Include\" --include_path=\"/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source/ti/posix/ccs\" --include_path=\"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include\" --advice:power=none -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on  -std=c99 " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1211994015 ../mailbox.cfg
configPkg/compiler.opt: build-1211994015
configPkg/: build-1211994015


