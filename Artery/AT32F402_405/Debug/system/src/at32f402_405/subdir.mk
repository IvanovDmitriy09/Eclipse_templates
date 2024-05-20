################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f402_405/at32f402_405_acc.c \
../system/src/at32f402_405/at32f402_405_adc.c \
../system/src/at32f402_405/at32f402_405_can.c \
../system/src/at32f402_405/at32f402_405_crc.c \
../system/src/at32f402_405/at32f402_405_crm.c \
../system/src/at32f402_405/at32f402_405_debug.c \
../system/src/at32f402_405/at32f402_405_dma.c \
../system/src/at32f402_405/at32f402_405_ertc.c \
../system/src/at32f402_405/at32f402_405_exint.c \
../system/src/at32f402_405/at32f402_405_flash.c \
../system/src/at32f402_405/at32f402_405_gpio.c \
../system/src/at32f402_405/at32f402_405_i2c.c \
../system/src/at32f402_405/at32f402_405_misc.c \
../system/src/at32f402_405/at32f402_405_pwc.c \
../system/src/at32f402_405/at32f402_405_qspi.c \
../system/src/at32f402_405/at32f402_405_scfg.c \
../system/src/at32f402_405/at32f402_405_spi.c \
../system/src/at32f402_405/at32f402_405_tmr.c \
../system/src/at32f402_405/at32f402_405_usart.c \
../system/src/at32f402_405/at32f402_405_usb.c \
../system/src/at32f402_405/at32f402_405_wdt.c \
../system/src/at32f402_405/at32f402_405_wwdt.c 

OBJS += \
./system/src/at32f402_405/at32f402_405_acc.o \
./system/src/at32f402_405/at32f402_405_adc.o \
./system/src/at32f402_405/at32f402_405_can.o \
./system/src/at32f402_405/at32f402_405_crc.o \
./system/src/at32f402_405/at32f402_405_crm.o \
./system/src/at32f402_405/at32f402_405_debug.o \
./system/src/at32f402_405/at32f402_405_dma.o \
./system/src/at32f402_405/at32f402_405_ertc.o \
./system/src/at32f402_405/at32f402_405_exint.o \
./system/src/at32f402_405/at32f402_405_flash.o \
./system/src/at32f402_405/at32f402_405_gpio.o \
./system/src/at32f402_405/at32f402_405_i2c.o \
./system/src/at32f402_405/at32f402_405_misc.o \
./system/src/at32f402_405/at32f402_405_pwc.o \
./system/src/at32f402_405/at32f402_405_qspi.o \
./system/src/at32f402_405/at32f402_405_scfg.o \
./system/src/at32f402_405/at32f402_405_spi.o \
./system/src/at32f402_405/at32f402_405_tmr.o \
./system/src/at32f402_405/at32f402_405_usart.o \
./system/src/at32f402_405/at32f402_405_usb.o \
./system/src/at32f402_405/at32f402_405_wdt.o \
./system/src/at32f402_405/at32f402_405_wwdt.o 

C_DEPS += \
./system/src/at32f402_405/at32f402_405_acc.d \
./system/src/at32f402_405/at32f402_405_adc.d \
./system/src/at32f402_405/at32f402_405_can.d \
./system/src/at32f402_405/at32f402_405_crc.d \
./system/src/at32f402_405/at32f402_405_crm.d \
./system/src/at32f402_405/at32f402_405_debug.d \
./system/src/at32f402_405/at32f402_405_dma.d \
./system/src/at32f402_405/at32f402_405_ertc.d \
./system/src/at32f402_405/at32f402_405_exint.d \
./system/src/at32f402_405/at32f402_405_flash.d \
./system/src/at32f402_405/at32f402_405_gpio.d \
./system/src/at32f402_405/at32f402_405_i2c.d \
./system/src/at32f402_405/at32f402_405_misc.d \
./system/src/at32f402_405/at32f402_405_pwc.d \
./system/src/at32f402_405/at32f402_405_qspi.d \
./system/src/at32f402_405/at32f402_405_scfg.d \
./system/src/at32f402_405/at32f402_405_spi.d \
./system/src/at32f402_405/at32f402_405_tmr.d \
./system/src/at32f402_405/at32f402_405_usart.d \
./system/src/at32f402_405/at32f402_405_usb.d \
./system/src/at32f402_405/at32f402_405_wdt.d \
./system/src/at32f402_405/at32f402_405_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f402_405/%.o: ../system/src/at32f402_405/%.c system/src/at32f402_405/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F405KBU7_4 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f402_405" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


