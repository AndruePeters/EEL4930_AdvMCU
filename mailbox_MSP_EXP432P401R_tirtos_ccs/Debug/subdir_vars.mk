################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../mailbox.cfg 

CMD_SRCS += \
../MSP_EXP432P401R_TIRTOS.cmd 

C_SRCS += \
../MSP_EXP432P401R.c \
../mailbox.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg/ 

C_DEPS += \
./MSP_EXP432P401R.d \
./mailbox.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./MSP_EXP432P401R.obj \
./mailbox.obj 

GEN_MISC_DIRS__QUOTED += \
"configPkg/" 

OBJS__QUOTED += \
"MSP_EXP432P401R.obj" \
"mailbox.obj" 

C_DEPS__QUOTED += \
"MSP_EXP432P401R.d" \
"mailbox.d" 

GEN_FILES__QUOTED += \
"configPkg/linker.cmd" \
"configPkg/compiler.opt" 

C_SRCS__QUOTED += \
"../MSP_EXP432P401R.c" \
"../mailbox.c" 


