################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../clock.cfg 

CMD_SRCS += \
../MSP_EXP432P401R.cmd 

C_SRCS += \
../BSP.c \
../CortexM.c \
../MSP_EXP432P401R.c \
../WorldShapersMain.c \
../random.c \
../score.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg/ 

C_DEPS += \
./BSP.d \
./CortexM.d \
./MSP_EXP432P401R.d \
./WorldShapersMain.d \
./random.d \
./score.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./BSP.obj \
./CortexM.obj \
./MSP_EXP432P401R.obj \
./WorldShapersMain.obj \
./random.obj \
./score.obj 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

OBJS__QUOTED += \
"BSP.obj" \
"CortexM.obj" \
"MSP_EXP432P401R.obj" \
"WorldShapersMain.obj" \
"random.obj" \
"score.obj" 

C_DEPS__QUOTED += \
"BSP.d" \
"CortexM.d" \
"MSP_EXP432P401R.d" \
"WorldShapersMain.d" \
"random.d" \
"score.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

C_SRCS__QUOTED += \
"../BSP.c" \
"../CortexM.c" \
"../MSP_EXP432P401R.c" \
"../WorldShapersMain.c" \
"../random.c" \
"../score.c" 


