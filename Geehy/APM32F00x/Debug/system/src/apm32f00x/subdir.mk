################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/apm32f00x/apm32f00x_adc.c \
../system/src/apm32f00x/apm32f00x_buzzer.c \
../system/src/apm32f00x/apm32f00x_eint.c \
../system/src/apm32f00x/apm32f00x_fmc.c \
../system/src/apm32f00x/apm32f00x_gpio.c \
../system/src/apm32f00x/apm32f00x_i2c.c \
../system/src/apm32f00x/apm32f00x_int.c \
../system/src/apm32f00x/apm32f00x_iwdt.c \
../system/src/apm32f00x/apm32f00x_misc.c \
../system/src/apm32f00x/apm32f00x_rcm.c \
../system/src/apm32f00x/apm32f00x_spi.c \
../system/src/apm32f00x/apm32f00x_tmr1.c \
../system/src/apm32f00x/apm32f00x_tmr2.c \
../system/src/apm32f00x/apm32f00x_tmr4.c \
../system/src/apm32f00x/apm32f00x_usart.c \
../system/src/apm32f00x/apm32f00x_wupt.c \
../system/src/apm32f00x/apm32f00x_wwdt.c 

OBJS += \
./system/src/apm32f00x/apm32f00x_adc.o \
./system/src/apm32f00x/apm32f00x_buzzer.o \
./system/src/apm32f00x/apm32f00x_eint.o \
./system/src/apm32f00x/apm32f00x_fmc.o \
./system/src/apm32f00x/apm32f00x_gpio.o \
./system/src/apm32f00x/apm32f00x_i2c.o \
./system/src/apm32f00x/apm32f00x_int.o \
./system/src/apm32f00x/apm32f00x_iwdt.o \
./system/src/apm32f00x/apm32f00x_misc.o \
./system/src/apm32f00x/apm32f00x_rcm.o \
./system/src/apm32f00x/apm32f00x_spi.o \
./system/src/apm32f00x/apm32f00x_tmr1.o \
./system/src/apm32f00x/apm32f00x_tmr2.o \
./system/src/apm32f00x/apm32f00x_tmr4.o \
./system/src/apm32f00x/apm32f00x_usart.o \
./system/src/apm32f00x/apm32f00x_wupt.o \
./system/src/apm32f00x/apm32f00x_wwdt.o 

C_DEPS += \
./system/src/apm32f00x/apm32f00x_adc.d \
./system/src/apm32f00x/apm32f00x_buzzer.d \
./system/src/apm32f00x/apm32f00x_eint.d \
./system/src/apm32f00x/apm32f00x_fmc.d \
./system/src/apm32f00x/apm32f00x_gpio.d \
./system/src/apm32f00x/apm32f00x_i2c.d \
./system/src/apm32f00x/apm32f00x_int.d \
./system/src/apm32f00x/apm32f00x_iwdt.d \
./system/src/apm32f00x/apm32f00x_misc.d \
./system/src/apm32f00x/apm32f00x_rcm.d \
./system/src/apm32f00x/apm32f00x_spi.d \
./system/src/apm32f00x/apm32f00x_tmr1.d \
./system/src/apm32f00x/apm32f00x_tmr2.d \
./system/src/apm32f00x/apm32f00x_tmr4.d \
./system/src/apm32f00x/apm32f00x_usart.d \
./system/src/apm32f00x/apm32f00x_wupt.d \
./system/src/apm32f00x/apm32f00x_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/apm32f00x/%.o: ../system/src/apm32f00x/%.c system/src/apm32f00x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/apm32f00x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


