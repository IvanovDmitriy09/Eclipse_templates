################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f423/at32f423_acc.c \
../system/src/at32f423/at32f423_adc.c \
../system/src/at32f423/at32f423_can.c \
../system/src/at32f423/at32f423_crc.c \
../system/src/at32f423/at32f423_crm.c \
../system/src/at32f423/at32f423_dac.c \
../system/src/at32f423/at32f423_debug.c \
../system/src/at32f423/at32f423_dma.c \
../system/src/at32f423/at32f423_ertc.c \
../system/src/at32f423/at32f423_exint.c \
../system/src/at32f423/at32f423_flash.c \
../system/src/at32f423/at32f423_gpio.c \
../system/src/at32f423/at32f423_i2c.c \
../system/src/at32f423/at32f423_misc.c \
../system/src/at32f423/at32f423_pwc.c \
../system/src/at32f423/at32f423_scfg.c \
../system/src/at32f423/at32f423_spi.c \
../system/src/at32f423/at32f423_tmr.c \
../system/src/at32f423/at32f423_usart.c \
../system/src/at32f423/at32f423_usb.c \
../system/src/at32f423/at32f423_wdt.c \
../system/src/at32f423/at32f423_wwdt.c \
../system/src/at32f423/at32f423_xmc.c 

C_DEPS += \
./system/src/at32f423/at32f423_acc.d \
./system/src/at32f423/at32f423_adc.d \
./system/src/at32f423/at32f423_can.d \
./system/src/at32f423/at32f423_crc.d \
./system/src/at32f423/at32f423_crm.d \
./system/src/at32f423/at32f423_dac.d \
./system/src/at32f423/at32f423_debug.d \
./system/src/at32f423/at32f423_dma.d \
./system/src/at32f423/at32f423_ertc.d \
./system/src/at32f423/at32f423_exint.d \
./system/src/at32f423/at32f423_flash.d \
./system/src/at32f423/at32f423_gpio.d \
./system/src/at32f423/at32f423_i2c.d \
./system/src/at32f423/at32f423_misc.d \
./system/src/at32f423/at32f423_pwc.d \
./system/src/at32f423/at32f423_scfg.d \
./system/src/at32f423/at32f423_spi.d \
./system/src/at32f423/at32f423_tmr.d \
./system/src/at32f423/at32f423_usart.d \
./system/src/at32f423/at32f423_usb.d \
./system/src/at32f423/at32f423_wdt.d \
./system/src/at32f423/at32f423_wwdt.d \
./system/src/at32f423/at32f423_xmc.d 

OBJS += \
./system/src/at32f423/at32f423_acc.o \
./system/src/at32f423/at32f423_adc.o \
./system/src/at32f423/at32f423_can.o \
./system/src/at32f423/at32f423_crc.o \
./system/src/at32f423/at32f423_crm.o \
./system/src/at32f423/at32f423_dac.o \
./system/src/at32f423/at32f423_debug.o \
./system/src/at32f423/at32f423_dma.o \
./system/src/at32f423/at32f423_ertc.o \
./system/src/at32f423/at32f423_exint.o \
./system/src/at32f423/at32f423_flash.o \
./system/src/at32f423/at32f423_gpio.o \
./system/src/at32f423/at32f423_i2c.o \
./system/src/at32f423/at32f423_misc.o \
./system/src/at32f423/at32f423_pwc.o \
./system/src/at32f423/at32f423_scfg.o \
./system/src/at32f423/at32f423_spi.o \
./system/src/at32f423/at32f423_tmr.o \
./system/src/at32f423/at32f423_usart.o \
./system/src/at32f423/at32f423_usb.o \
./system/src/at32f423/at32f423_wdt.o \
./system/src/at32f423/at32f423_wwdt.o \
./system/src/at32f423/at32f423_xmc.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f423/%.o: ../system/src/at32f423/%.c system/src/at32f423/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F423K8U7_4 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f423" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


