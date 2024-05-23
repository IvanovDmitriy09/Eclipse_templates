################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f425/at32f425_acc.c \
../system/src/at32f425/at32f425_adc.c \
../system/src/at32f425/at32f425_can.c \
../system/src/at32f425/at32f425_crc.c \
../system/src/at32f425/at32f425_crm.c \
../system/src/at32f425/at32f425_debug.c \
../system/src/at32f425/at32f425_dma.c \
../system/src/at32f425/at32f425_ertc.c \
../system/src/at32f425/at32f425_exint.c \
../system/src/at32f425/at32f425_flash.c \
../system/src/at32f425/at32f425_gpio.c \
../system/src/at32f425/at32f425_i2c.c \
../system/src/at32f425/at32f425_misc.c \
../system/src/at32f425/at32f425_pwc.c \
../system/src/at32f425/at32f425_scfg.c \
../system/src/at32f425/at32f425_spi.c \
../system/src/at32f425/at32f425_tmr.c \
../system/src/at32f425/at32f425_usart.c \
../system/src/at32f425/at32f425_usb.c \
../system/src/at32f425/at32f425_wdt.c \
../system/src/at32f425/at32f425_wwdt.c 

C_DEPS += \
./system/src/at32f425/at32f425_acc.d \
./system/src/at32f425/at32f425_adc.d \
./system/src/at32f425/at32f425_can.d \
./system/src/at32f425/at32f425_crc.d \
./system/src/at32f425/at32f425_crm.d \
./system/src/at32f425/at32f425_debug.d \
./system/src/at32f425/at32f425_dma.d \
./system/src/at32f425/at32f425_ertc.d \
./system/src/at32f425/at32f425_exint.d \
./system/src/at32f425/at32f425_flash.d \
./system/src/at32f425/at32f425_gpio.d \
./system/src/at32f425/at32f425_i2c.d \
./system/src/at32f425/at32f425_misc.d \
./system/src/at32f425/at32f425_pwc.d \
./system/src/at32f425/at32f425_scfg.d \
./system/src/at32f425/at32f425_spi.d \
./system/src/at32f425/at32f425_tmr.d \
./system/src/at32f425/at32f425_usart.d \
./system/src/at32f425/at32f425_usb.d \
./system/src/at32f425/at32f425_wdt.d \
./system/src/at32f425/at32f425_wwdt.d 

OBJS += \
./system/src/at32f425/at32f425_acc.o \
./system/src/at32f425/at32f425_adc.o \
./system/src/at32f425/at32f425_can.o \
./system/src/at32f425/at32f425_crc.o \
./system/src/at32f425/at32f425_crm.o \
./system/src/at32f425/at32f425_debug.o \
./system/src/at32f425/at32f425_dma.o \
./system/src/at32f425/at32f425_ertc.o \
./system/src/at32f425/at32f425_exint.o \
./system/src/at32f425/at32f425_flash.o \
./system/src/at32f425/at32f425_gpio.o \
./system/src/at32f425/at32f425_i2c.o \
./system/src/at32f425/at32f425_misc.o \
./system/src/at32f425/at32f425_pwc.o \
./system/src/at32f425/at32f425_scfg.o \
./system/src/at32f425/at32f425_spi.o \
./system/src/at32f425/at32f425_tmr.o \
./system/src/at32f425/at32f425_usart.o \
./system/src/at32f425/at32f425_usb.o \
./system/src/at32f425/at32f425_wdt.o \
./system/src/at32f425/at32f425_wwdt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f425/%.o: ../system/src/at32f425/%.c system/src/at32f425/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F425R8T7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f425" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


