################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/cmsis/system_apm32f0xx.c \
../system/src/cmsis/vectors_apm32f0xx.c 

OBJS += \
./system/src/cmsis/system_apm32f0xx.o \
./system/src/cmsis/vectors_apm32f0xx.o 

C_DEPS += \
./system/src/cmsis/system_apm32f0xx.d \
./system/src/cmsis/vectors_apm32f0xx.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/cmsis/%.o: ../system/src/cmsis/%.c system/src/cmsis/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAPM32F030 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/apm32f0xx" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


