################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/K1921VK035/plib035_adc.c \
../system/src/K1921VK035/plib035_can.c \
../system/src/K1921VK035/plib035_dma.c \
../system/src/K1921VK035/plib035_ecap.c \
../system/src/K1921VK035/plib035_gpio.c \
../system/src/K1921VK035/plib035_i2c.c \
../system/src/K1921VK035/plib035_mflash.c \
../system/src/K1921VK035/plib035_pmu.c \
../system/src/K1921VK035/plib035_pwm.c \
../system/src/K1921VK035/plib035_qep.c \
../system/src/K1921VK035/plib035_rcu.c \
../system/src/K1921VK035/plib035_spi.c \
../system/src/K1921VK035/plib035_tmr.c \
../system/src/K1921VK035/plib035_uart.c \
../system/src/K1921VK035/plib035_wdt.c 

OBJS += \
./system/src/K1921VK035/plib035_adc.o \
./system/src/K1921VK035/plib035_can.o \
./system/src/K1921VK035/plib035_dma.o \
./system/src/K1921VK035/plib035_ecap.o \
./system/src/K1921VK035/plib035_gpio.o \
./system/src/K1921VK035/plib035_i2c.o \
./system/src/K1921VK035/plib035_mflash.o \
./system/src/K1921VK035/plib035_pmu.o \
./system/src/K1921VK035/plib035_pwm.o \
./system/src/K1921VK035/plib035_qep.o \
./system/src/K1921VK035/plib035_rcu.o \
./system/src/K1921VK035/plib035_spi.o \
./system/src/K1921VK035/plib035_tmr.o \
./system/src/K1921VK035/plib035_uart.o \
./system/src/K1921VK035/plib035_wdt.o 

C_DEPS += \
./system/src/K1921VK035/plib035_adc.d \
./system/src/K1921VK035/plib035_can.d \
./system/src/K1921VK035/plib035_dma.d \
./system/src/K1921VK035/plib035_ecap.d \
./system/src/K1921VK035/plib035_gpio.d \
./system/src/K1921VK035/plib035_i2c.d \
./system/src/K1921VK035/plib035_mflash.d \
./system/src/K1921VK035/plib035_pmu.d \
./system/src/K1921VK035/plib035_pwm.d \
./system/src/K1921VK035/plib035_qep.d \
./system/src/K1921VK035/plib035_rcu.d \
./system/src/K1921VK035/plib035_spi.d \
./system/src/K1921VK035/plib035_tmr.d \
./system/src/K1921VK035/plib035_uart.d \
./system/src/K1921VK035/plib035_wdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/K1921VK035/%.o: ../system/src/K1921VK035/%.c system/src/K1921VK035/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DSYSCLK_OSE -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/K1921VK035" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


