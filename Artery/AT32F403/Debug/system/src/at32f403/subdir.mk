################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f403/at32f403_adc.c \
../system/src/at32f403/at32f403_bpr.c \
../system/src/at32f403/at32f403_can.c \
../system/src/at32f403/at32f403_crc.c \
../system/src/at32f403/at32f403_crm.c \
../system/src/at32f403/at32f403_dac.c \
../system/src/at32f403/at32f403_debug.c \
../system/src/at32f403/at32f403_dma.c \
../system/src/at32f403/at32f403_exint.c \
../system/src/at32f403/at32f403_flash.c \
../system/src/at32f403/at32f403_gpio.c \
../system/src/at32f403/at32f403_i2c.c \
../system/src/at32f403/at32f403_misc.c \
../system/src/at32f403/at32f403_pwc.c \
../system/src/at32f403/at32f403_rtc.c \
../system/src/at32f403/at32f403_sdio.c \
../system/src/at32f403/at32f403_spi.c \
../system/src/at32f403/at32f403_tmr.c \
../system/src/at32f403/at32f403_usart.c \
../system/src/at32f403/at32f403_usb.c \
../system/src/at32f403/at32f403_wdt.c \
../system/src/at32f403/at32f403_wwdt.c \
../system/src/at32f403/at32f403_xmc.c 

C_DEPS += \
./system/src/at32f403/at32f403_adc.d \
./system/src/at32f403/at32f403_bpr.d \
./system/src/at32f403/at32f403_can.d \
./system/src/at32f403/at32f403_crc.d \
./system/src/at32f403/at32f403_crm.d \
./system/src/at32f403/at32f403_dac.d \
./system/src/at32f403/at32f403_debug.d \
./system/src/at32f403/at32f403_dma.d \
./system/src/at32f403/at32f403_exint.d \
./system/src/at32f403/at32f403_flash.d \
./system/src/at32f403/at32f403_gpio.d \
./system/src/at32f403/at32f403_i2c.d \
./system/src/at32f403/at32f403_misc.d \
./system/src/at32f403/at32f403_pwc.d \
./system/src/at32f403/at32f403_rtc.d \
./system/src/at32f403/at32f403_sdio.d \
./system/src/at32f403/at32f403_spi.d \
./system/src/at32f403/at32f403_tmr.d \
./system/src/at32f403/at32f403_usart.d \
./system/src/at32f403/at32f403_usb.d \
./system/src/at32f403/at32f403_wdt.d \
./system/src/at32f403/at32f403_wwdt.d \
./system/src/at32f403/at32f403_xmc.d 

OBJS += \
./system/src/at32f403/at32f403_adc.o \
./system/src/at32f403/at32f403_bpr.o \
./system/src/at32f403/at32f403_can.o \
./system/src/at32f403/at32f403_crc.o \
./system/src/at32f403/at32f403_crm.o \
./system/src/at32f403/at32f403_dac.o \
./system/src/at32f403/at32f403_debug.o \
./system/src/at32f403/at32f403_dma.o \
./system/src/at32f403/at32f403_exint.o \
./system/src/at32f403/at32f403_flash.o \
./system/src/at32f403/at32f403_gpio.o \
./system/src/at32f403/at32f403_i2c.o \
./system/src/at32f403/at32f403_misc.o \
./system/src/at32f403/at32f403_pwc.o \
./system/src/at32f403/at32f403_rtc.o \
./system/src/at32f403/at32f403_sdio.o \
./system/src/at32f403/at32f403_spi.o \
./system/src/at32f403/at32f403_tmr.o \
./system/src/at32f403/at32f403_usart.o \
./system/src/at32f403/at32f403_usb.o \
./system/src/at32f403/at32f403_wdt.o \
./system/src/at32f403/at32f403_wwdt.o \
./system/src/at32f403/at32f403_xmc.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f403/%.o: ../system/src/at32f403/%.c system/src/at32f403/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F403CCT6 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f403" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


