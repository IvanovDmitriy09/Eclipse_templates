################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32wb415/at32wb415_adc.c \
../system/src/at32wb415/at32wb415_can.c \
../system/src/at32wb415/at32wb415_cmp.c \
../system/src/at32wb415/at32wb415_crc.c \
../system/src/at32wb415/at32wb415_crm.c \
../system/src/at32wb415/at32wb415_debug.c \
../system/src/at32wb415/at32wb415_dma.c \
../system/src/at32wb415/at32wb415_ertc.c \
../system/src/at32wb415/at32wb415_exint.c \
../system/src/at32wb415/at32wb415_flash.c \
../system/src/at32wb415/at32wb415_gpio.c \
../system/src/at32wb415/at32wb415_i2c.c \
../system/src/at32wb415/at32wb415_misc.c \
../system/src/at32wb415/at32wb415_pwc.c \
../system/src/at32wb415/at32wb415_spi.c \
../system/src/at32wb415/at32wb415_tmr.c \
../system/src/at32wb415/at32wb415_usart.c \
../system/src/at32wb415/at32wb415_usb.c \
../system/src/at32wb415/at32wb415_wdt.c \
../system/src/at32wb415/at32wb415_wwdt.c 

OBJS += \
./system/src/at32wb415/at32wb415_adc.o \
./system/src/at32wb415/at32wb415_can.o \
./system/src/at32wb415/at32wb415_cmp.o \
./system/src/at32wb415/at32wb415_crc.o \
./system/src/at32wb415/at32wb415_crm.o \
./system/src/at32wb415/at32wb415_debug.o \
./system/src/at32wb415/at32wb415_dma.o \
./system/src/at32wb415/at32wb415_ertc.o \
./system/src/at32wb415/at32wb415_exint.o \
./system/src/at32wb415/at32wb415_flash.o \
./system/src/at32wb415/at32wb415_gpio.o \
./system/src/at32wb415/at32wb415_i2c.o \
./system/src/at32wb415/at32wb415_misc.o \
./system/src/at32wb415/at32wb415_pwc.o \
./system/src/at32wb415/at32wb415_spi.o \
./system/src/at32wb415/at32wb415_tmr.o \
./system/src/at32wb415/at32wb415_usart.o \
./system/src/at32wb415/at32wb415_usb.o \
./system/src/at32wb415/at32wb415_wdt.o \
./system/src/at32wb415/at32wb415_wwdt.o 

C_DEPS += \
./system/src/at32wb415/at32wb415_adc.d \
./system/src/at32wb415/at32wb415_can.d \
./system/src/at32wb415/at32wb415_cmp.d \
./system/src/at32wb415/at32wb415_crc.d \
./system/src/at32wb415/at32wb415_crm.d \
./system/src/at32wb415/at32wb415_debug.d \
./system/src/at32wb415/at32wb415_dma.d \
./system/src/at32wb415/at32wb415_ertc.d \
./system/src/at32wb415/at32wb415_exint.d \
./system/src/at32wb415/at32wb415_flash.d \
./system/src/at32wb415/at32wb415_gpio.d \
./system/src/at32wb415/at32wb415_i2c.d \
./system/src/at32wb415/at32wb415_misc.d \
./system/src/at32wb415/at32wb415_pwc.d \
./system/src/at32wb415/at32wb415_spi.d \
./system/src/at32wb415/at32wb415_tmr.d \
./system/src/at32wb415/at32wb415_usart.d \
./system/src/at32wb415/at32wb415_usb.d \
./system/src/at32wb415/at32wb415_wdt.d \
./system/src/at32wb415/at32wb415_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32wb415/%.o: ../system/src/at32wb415/%.c system/src/at32wb415/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32WB415CCU7_7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32wb415" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


