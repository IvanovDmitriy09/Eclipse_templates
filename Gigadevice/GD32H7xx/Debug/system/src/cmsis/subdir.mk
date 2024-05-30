################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/cmsis/system_gd32h7xx.c \
../system/src/cmsis/vectors_gd32h7xx.c 

C_DEPS += \
./system/src/cmsis/system_gd32h7xx.d \
./system/src/cmsis/vectors_gd32h7xx.d 

OBJS += \
./system/src/cmsis/system_gd32h7xx.o \
./system/src/cmsis/vectors_gd32h7xx.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/cmsis/%.o: ../system/src/cmsis/%.c system/src/cmsis/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DGD32H7XX -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/gd32h7xx" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


