################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32l021/at32l021_adc.c \
../system/src/at32l021/at32l021_can.c \
../system/src/at32l021/at32l021_crc.c \
../system/src/at32l021/at32l021_crm.c \
../system/src/at32l021/at32l021_debug.c \
../system/src/at32l021/at32l021_dma.c \
../system/src/at32l021/at32l021_ertc.c \
../system/src/at32l021/at32l021_exint.c \
../system/src/at32l021/at32l021_flash.c \
../system/src/at32l021/at32l021_gpio.c \
../system/src/at32l021/at32l021_hwdiv.c \
../system/src/at32l021/at32l021_i2c.c \
../system/src/at32l021/at32l021_misc.c \
../system/src/at32l021/at32l021_pwc.c \
../system/src/at32l021/at32l021_scfg.c \
../system/src/at32l021/at32l021_spi.c \
../system/src/at32l021/at32l021_tmr.c \
../system/src/at32l021/at32l021_usart.c \
../system/src/at32l021/at32l021_wdt.c \
../system/src/at32l021/at32l021_wwdt.c 

OBJS += \
./system/src/at32l021/at32l021_adc.o \
./system/src/at32l021/at32l021_can.o \
./system/src/at32l021/at32l021_crc.o \
./system/src/at32l021/at32l021_crm.o \
./system/src/at32l021/at32l021_debug.o \
./system/src/at32l021/at32l021_dma.o \
./system/src/at32l021/at32l021_ertc.o \
./system/src/at32l021/at32l021_exint.o \
./system/src/at32l021/at32l021_flash.o \
./system/src/at32l021/at32l021_gpio.o \
./system/src/at32l021/at32l021_hwdiv.o \
./system/src/at32l021/at32l021_i2c.o \
./system/src/at32l021/at32l021_misc.o \
./system/src/at32l021/at32l021_pwc.o \
./system/src/at32l021/at32l021_scfg.o \
./system/src/at32l021/at32l021_spi.o \
./system/src/at32l021/at32l021_tmr.o \
./system/src/at32l021/at32l021_usart.o \
./system/src/at32l021/at32l021_wdt.o \
./system/src/at32l021/at32l021_wwdt.o 

C_DEPS += \
./system/src/at32l021/at32l021_adc.d \
./system/src/at32l021/at32l021_can.d \
./system/src/at32l021/at32l021_crc.d \
./system/src/at32l021/at32l021_crm.d \
./system/src/at32l021/at32l021_debug.d \
./system/src/at32l021/at32l021_dma.d \
./system/src/at32l021/at32l021_ertc.d \
./system/src/at32l021/at32l021_exint.d \
./system/src/at32l021/at32l021_flash.d \
./system/src/at32l021/at32l021_gpio.d \
./system/src/at32l021/at32l021_hwdiv.d \
./system/src/at32l021/at32l021_i2c.d \
./system/src/at32l021/at32l021_misc.d \
./system/src/at32l021/at32l021_pwc.d \
./system/src/at32l021/at32l021_scfg.d \
./system/src/at32l021/at32l021_spi.d \
./system/src/at32l021/at32l021_tmr.d \
./system/src/at32l021/at32l021_usart.d \
./system/src/at32l021/at32l021_wdt.d \
./system/src/at32l021/at32l021_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32l021/%.o: ../system/src/at32l021/%.c system/src/at32l021/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32L021C8T7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32l021" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


