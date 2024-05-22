################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f413/at32f413_acc.c \
../system/src/at32f413/at32f413_adc.c \
../system/src/at32f413/at32f413_bpr.c \
../system/src/at32f413/at32f413_can.c \
../system/src/at32f413/at32f413_crc.c \
../system/src/at32f413/at32f413_crm.c \
../system/src/at32f413/at32f413_debug.c \
../system/src/at32f413/at32f413_dma.c \
../system/src/at32f413/at32f413_exint.c \
../system/src/at32f413/at32f413_flash.c \
../system/src/at32f413/at32f413_gpio.c \
../system/src/at32f413/at32f413_i2c.c \
../system/src/at32f413/at32f413_misc.c \
../system/src/at32f413/at32f413_pwc.c \
../system/src/at32f413/at32f413_rtc.c \
../system/src/at32f413/at32f413_sdio.c \
../system/src/at32f413/at32f413_spi.c \
../system/src/at32f413/at32f413_tmr.c \
../system/src/at32f413/at32f413_usart.c \
../system/src/at32f413/at32f413_usb.c \
../system/src/at32f413/at32f413_wdt.c \
../system/src/at32f413/at32f413_wwdt.c 

C_DEPS += \
./system/src/at32f413/at32f413_acc.d \
./system/src/at32f413/at32f413_adc.d \
./system/src/at32f413/at32f413_bpr.d \
./system/src/at32f413/at32f413_can.d \
./system/src/at32f413/at32f413_crc.d \
./system/src/at32f413/at32f413_crm.d \
./system/src/at32f413/at32f413_debug.d \
./system/src/at32f413/at32f413_dma.d \
./system/src/at32f413/at32f413_exint.d \
./system/src/at32f413/at32f413_flash.d \
./system/src/at32f413/at32f413_gpio.d \
./system/src/at32f413/at32f413_i2c.d \
./system/src/at32f413/at32f413_misc.d \
./system/src/at32f413/at32f413_pwc.d \
./system/src/at32f413/at32f413_rtc.d \
./system/src/at32f413/at32f413_sdio.d \
./system/src/at32f413/at32f413_spi.d \
./system/src/at32f413/at32f413_tmr.d \
./system/src/at32f413/at32f413_usart.d \
./system/src/at32f413/at32f413_usb.d \
./system/src/at32f413/at32f413_wdt.d \
./system/src/at32f413/at32f413_wwdt.d 

OBJS += \
./system/src/at32f413/at32f413_acc.o \
./system/src/at32f413/at32f413_adc.o \
./system/src/at32f413/at32f413_bpr.o \
./system/src/at32f413/at32f413_can.o \
./system/src/at32f413/at32f413_crc.o \
./system/src/at32f413/at32f413_crm.o \
./system/src/at32f413/at32f413_debug.o \
./system/src/at32f413/at32f413_dma.o \
./system/src/at32f413/at32f413_exint.o \
./system/src/at32f413/at32f413_flash.o \
./system/src/at32f413/at32f413_gpio.o \
./system/src/at32f413/at32f413_i2c.o \
./system/src/at32f413/at32f413_misc.o \
./system/src/at32f413/at32f413_pwc.o \
./system/src/at32f413/at32f413_rtc.o \
./system/src/at32f413/at32f413_sdio.o \
./system/src/at32f413/at32f413_spi.o \
./system/src/at32f413/at32f413_tmr.o \
./system/src/at32f413/at32f413_usart.o \
./system/src/at32f413/at32f413_usb.o \
./system/src/at32f413/at32f413_wdt.o \
./system/src/at32f413/at32f413_wwdt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f413/%.o: ../system/src/at32f413/%.c system/src/at32f413/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F413KBU7_4 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f413" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


