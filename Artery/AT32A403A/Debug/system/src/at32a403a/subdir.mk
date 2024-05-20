################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32a403a/at32a403a_acc.c \
../system/src/at32a403a/at32a403a_adc.c \
../system/src/at32a403a/at32a403a_bpr.c \
../system/src/at32a403a/at32a403a_can.c \
../system/src/at32a403a/at32a403a_crc.c \
../system/src/at32a403a/at32a403a_crm.c \
../system/src/at32a403a/at32a403a_dac.c \
../system/src/at32a403a/at32a403a_debug.c \
../system/src/at32a403a/at32a403a_dma.c \
../system/src/at32a403a/at32a403a_emac.c \
../system/src/at32a403a/at32a403a_exint.c \
../system/src/at32a403a/at32a403a_flash.c \
../system/src/at32a403a/at32a403a_gpio.c \
../system/src/at32a403a/at32a403a_i2c.c \
../system/src/at32a403a/at32a403a_misc.c \
../system/src/at32a403a/at32a403a_pwc.c \
../system/src/at32a403a/at32a403a_rtc.c \
../system/src/at32a403a/at32a403a_sdio.c \
../system/src/at32a403a/at32a403a_spi.c \
../system/src/at32a403a/at32a403a_tmr.c \
../system/src/at32a403a/at32a403a_usart.c \
../system/src/at32a403a/at32a403a_usb.c \
../system/src/at32a403a/at32a403a_wdt.c \
../system/src/at32a403a/at32a403a_wwdt.c \
../system/src/at32a403a/at32a403a_xmc.c 

OBJS += \
./system/src/at32a403a/at32a403a_acc.o \
./system/src/at32a403a/at32a403a_adc.o \
./system/src/at32a403a/at32a403a_bpr.o \
./system/src/at32a403a/at32a403a_can.o \
./system/src/at32a403a/at32a403a_crc.o \
./system/src/at32a403a/at32a403a_crm.o \
./system/src/at32a403a/at32a403a_dac.o \
./system/src/at32a403a/at32a403a_debug.o \
./system/src/at32a403a/at32a403a_dma.o \
./system/src/at32a403a/at32a403a_emac.o \
./system/src/at32a403a/at32a403a_exint.o \
./system/src/at32a403a/at32a403a_flash.o \
./system/src/at32a403a/at32a403a_gpio.o \
./system/src/at32a403a/at32a403a_i2c.o \
./system/src/at32a403a/at32a403a_misc.o \
./system/src/at32a403a/at32a403a_pwc.o \
./system/src/at32a403a/at32a403a_rtc.o \
./system/src/at32a403a/at32a403a_sdio.o \
./system/src/at32a403a/at32a403a_spi.o \
./system/src/at32a403a/at32a403a_tmr.o \
./system/src/at32a403a/at32a403a_usart.o \
./system/src/at32a403a/at32a403a_usb.o \
./system/src/at32a403a/at32a403a_wdt.o \
./system/src/at32a403a/at32a403a_wwdt.o \
./system/src/at32a403a/at32a403a_xmc.o 

C_DEPS += \
./system/src/at32a403a/at32a403a_acc.d \
./system/src/at32a403a/at32a403a_adc.d \
./system/src/at32a403a/at32a403a_bpr.d \
./system/src/at32a403a/at32a403a_can.d \
./system/src/at32a403a/at32a403a_crc.d \
./system/src/at32a403a/at32a403a_crm.d \
./system/src/at32a403a/at32a403a_dac.d \
./system/src/at32a403a/at32a403a_debug.d \
./system/src/at32a403a/at32a403a_dma.d \
./system/src/at32a403a/at32a403a_emac.d \
./system/src/at32a403a/at32a403a_exint.d \
./system/src/at32a403a/at32a403a_flash.d \
./system/src/at32a403a/at32a403a_gpio.d \
./system/src/at32a403a/at32a403a_i2c.d \
./system/src/at32a403a/at32a403a_misc.d \
./system/src/at32a403a/at32a403a_pwc.d \
./system/src/at32a403a/at32a403a_rtc.d \
./system/src/at32a403a/at32a403a_sdio.d \
./system/src/at32a403a/at32a403a_spi.d \
./system/src/at32a403a/at32a403a_tmr.d \
./system/src/at32a403a/at32a403a_usart.d \
./system/src/at32a403a/at32a403a_usb.d \
./system/src/at32a403a/at32a403a_wdt.d \
./system/src/at32a403a/at32a403a_wwdt.d \
./system/src/at32a403a/at32a403a_xmc.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32a403a/%.o: ../system/src/at32a403a/%.c system/src/at32a403a/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32A403AVCT7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32a403a" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


