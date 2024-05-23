################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/at32f421/at32f421_adc.c \
../system/src/at32f421/at32f421_cmp.c \
../system/src/at32f421/at32f421_crc.c \
../system/src/at32f421/at32f421_crm.c \
../system/src/at32f421/at32f421_debug.c \
../system/src/at32f421/at32f421_dma.c \
../system/src/at32f421/at32f421_ertc.c \
../system/src/at32f421/at32f421_exint.c \
../system/src/at32f421/at32f421_flash.c \
../system/src/at32f421/at32f421_gpio.c \
../system/src/at32f421/at32f421_i2c.c \
../system/src/at32f421/at32f421_misc.c \
../system/src/at32f421/at32f421_pwc.c \
../system/src/at32f421/at32f421_scfg.c \
../system/src/at32f421/at32f421_spi.c \
../system/src/at32f421/at32f421_tmr.c \
../system/src/at32f421/at32f421_usart.c \
../system/src/at32f421/at32f421_wdt.c \
../system/src/at32f421/at32f421_wwdt.c 

C_DEPS += \
./system/src/at32f421/at32f421_adc.d \
./system/src/at32f421/at32f421_cmp.d \
./system/src/at32f421/at32f421_crc.d \
./system/src/at32f421/at32f421_crm.d \
./system/src/at32f421/at32f421_debug.d \
./system/src/at32f421/at32f421_dma.d \
./system/src/at32f421/at32f421_ertc.d \
./system/src/at32f421/at32f421_exint.d \
./system/src/at32f421/at32f421_flash.d \
./system/src/at32f421/at32f421_gpio.d \
./system/src/at32f421/at32f421_i2c.d \
./system/src/at32f421/at32f421_misc.d \
./system/src/at32f421/at32f421_pwc.d \
./system/src/at32f421/at32f421_scfg.d \
./system/src/at32f421/at32f421_spi.d \
./system/src/at32f421/at32f421_tmr.d \
./system/src/at32f421/at32f421_usart.d \
./system/src/at32f421/at32f421_wdt.d \
./system/src/at32f421/at32f421_wwdt.d 

OBJS += \
./system/src/at32f421/at32f421_adc.o \
./system/src/at32f421/at32f421_cmp.o \
./system/src/at32f421/at32f421_crc.o \
./system/src/at32f421/at32f421_crm.o \
./system/src/at32f421/at32f421_debug.o \
./system/src/at32f421/at32f421_dma.o \
./system/src/at32f421/at32f421_ertc.o \
./system/src/at32f421/at32f421_exint.o \
./system/src/at32f421/at32f421_flash.o \
./system/src/at32f421/at32f421_gpio.o \
./system/src/at32f421/at32f421_i2c.o \
./system/src/at32f421/at32f421_misc.o \
./system/src/at32f421/at32f421_pwc.o \
./system/src/at32f421/at32f421_scfg.o \
./system/src/at32f421/at32f421_spi.o \
./system/src/at32f421/at32f421_tmr.o \
./system/src/at32f421/at32f421_usart.o \
./system/src/at32f421/at32f421_wdt.o \
./system/src/at32f421/at32f421_wwdt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/at32f421/%.o: ../system/src/at32f421/%.c system/src/at32f421/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAT32F421C8T7 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/at32f421" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


