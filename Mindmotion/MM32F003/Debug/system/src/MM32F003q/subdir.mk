################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/MM32F003q/HAL_adc.c \
../system/src/MM32F003q/HAL_crc.c \
../system/src/MM32F003q/HAL_dma.c \
../system/src/MM32F003q/HAL_exti.c \
../system/src/MM32F003q/HAL_flash.c \
../system/src/MM32F003q/HAL_gpio.c \
../system/src/MM32F003q/HAL_i2c.c \
../system/src/MM32F003q/HAL_iwdg.c \
../system/src/MM32F003q/HAL_misc.c \
../system/src/MM32F003q/HAL_pwr.c \
../system/src/MM32F003q/HAL_rcc.c \
../system/src/MM32F003q/HAL_spi.c \
../system/src/MM32F003q/HAL_syscfg.c \
../system/src/MM32F003q/HAL_tim.c \
../system/src/MM32F003q/HAL_uart.c \
../system/src/MM32F003q/HAL_wwdg.c 

C_DEPS += \
./system/src/MM32F003q/HAL_adc.d \
./system/src/MM32F003q/HAL_crc.d \
./system/src/MM32F003q/HAL_dma.d \
./system/src/MM32F003q/HAL_exti.d \
./system/src/MM32F003q/HAL_flash.d \
./system/src/MM32F003q/HAL_gpio.d \
./system/src/MM32F003q/HAL_i2c.d \
./system/src/MM32F003q/HAL_iwdg.d \
./system/src/MM32F003q/HAL_misc.d \
./system/src/MM32F003q/HAL_pwr.d \
./system/src/MM32F003q/HAL_rcc.d \
./system/src/MM32F003q/HAL_spi.d \
./system/src/MM32F003q/HAL_syscfg.d \
./system/src/MM32F003q/HAL_tim.d \
./system/src/MM32F003q/HAL_uart.d \
./system/src/MM32F003q/HAL_wwdg.d 

OBJS += \
./system/src/MM32F003q/HAL_adc.o \
./system/src/MM32F003q/HAL_crc.o \
./system/src/MM32F003q/HAL_dma.o \
./system/src/MM32F003q/HAL_exti.o \
./system/src/MM32F003q/HAL_flash.o \
./system/src/MM32F003q/HAL_gpio.o \
./system/src/MM32F003q/HAL_i2c.o \
./system/src/MM32F003q/HAL_iwdg.o \
./system/src/MM32F003q/HAL_misc.o \
./system/src/MM32F003q/HAL_pwr.o \
./system/src/MM32F003q/HAL_rcc.o \
./system/src/MM32F003q/HAL_spi.o \
./system/src/MM32F003q/HAL_syscfg.o \
./system/src/MM32F003q/HAL_tim.o \
./system/src/MM32F003q/HAL_uart.o \
./system/src/MM32F003q/HAL_wwdg.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/MM32F003q/%.o: ../system/src/MM32F003q/%.c system/src/MM32F003q/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/MM32F003q" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


