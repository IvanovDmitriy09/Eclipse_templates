################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f415/at32f415_adc.c \
../system/src/at32f415/at32f415_can.c \
../system/src/at32f415/at32f415_cmp.c \
../system/src/at32f415/at32f415_crc.c \
../system/src/at32f415/at32f415_crm.c \
../system/src/at32f415/at32f415_debug.c \
../system/src/at32f415/at32f415_dma.c \
../system/src/at32f415/at32f415_ertc.c \
../system/src/at32f415/at32f415_exint.c \
../system/src/at32f415/at32f415_flash.c \
../system/src/at32f415/at32f415_gpio.c \
../system/src/at32f415/at32f415_i2c.c \
../system/src/at32f415/at32f415_misc.c \
../system/src/at32f415/at32f415_pwc.c \
../system/src/at32f415/at32f415_sdio.c \
../system/src/at32f415/at32f415_spi.c \
../system/src/at32f415/at32f415_tmr.c \
../system/src/at32f415/at32f415_usart.c \
../system/src/at32f415/at32f415_usb.c \
../system/src/at32f415/at32f415_wdt.c \
../system/src/at32f415/at32f415_wwdt.c 

C_DEPS += \
./system/src/at32f415/at32f415_adc.d \
./system/src/at32f415/at32f415_can.d \
./system/src/at32f415/at32f415_cmp.d \
./system/src/at32f415/at32f415_crc.d \
./system/src/at32f415/at32f415_crm.d \
./system/src/at32f415/at32f415_debug.d \
./system/src/at32f415/at32f415_dma.d \
./system/src/at32f415/at32f415_ertc.d \
./system/src/at32f415/at32f415_exint.d \
./system/src/at32f415/at32f415_flash.d \
./system/src/at32f415/at32f415_gpio.d \
./system/src/at32f415/at32f415_i2c.d \
./system/src/at32f415/at32f415_misc.d \
./system/src/at32f415/at32f415_pwc.d \
./system/src/at32f415/at32f415_sdio.d \
./system/src/at32f415/at32f415_spi.d \
./system/src/at32f415/at32f415_tmr.d \
./system/src/at32f415/at32f415_usart.d \
./system/src/at32f415/at32f415_usb.d \
./system/src/at32f415/at32f415_wdt.d \
./system/src/at32f415/at32f415_wwdt.d 

OBJS += \
./system/src/at32f415/at32f415_adc.o \
./system/src/at32f415/at32f415_can.o \
./system/src/at32f415/at32f415_cmp.o \
./system/src/at32f415/at32f415_crc.o \
./system/src/at32f415/at32f415_crm.o \
./system/src/at32f415/at32f415_debug.o \
./system/src/at32f415/at32f415_dma.o \
./system/src/at32f415/at32f415_ertc.o \
./system/src/at32f415/at32f415_exint.o \
./system/src/at32f415/at32f415_flash.o \
./system/src/at32f415/at32f415_gpio.o \
./system/src/at32f415/at32f415_i2c.o \
./system/src/at32f415/at32f415_misc.o \
./system/src/at32f415/at32f415_pwc.o \
./system/src/at32f415/at32f415_sdio.o \
./system/src/at32f415/at32f415_spi.o \
./system/src/at32f415/at32f415_tmr.o \
./system/src/at32f415/at32f415_usart.o \
./system/src/at32f415/at32f415_usb.o \
./system/src/at32f415/at32f415_wdt.o \
./system/src/at32f415/at32f415_wwdt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f415/%.o: ../system/src/at32f415/%.c system/src/at32f415/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F415RCT7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f415" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


