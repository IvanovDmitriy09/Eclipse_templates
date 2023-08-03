################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32e23x/gd32e23x_adc.c \
../system/src/gd32e23x/gd32e23x_cmp.c \
../system/src/gd32e23x/gd32e23x_crc.c \
../system/src/gd32e23x/gd32e23x_dbg.c \
../system/src/gd32e23x/gd32e23x_dma.c \
../system/src/gd32e23x/gd32e23x_exti.c \
../system/src/gd32e23x/gd32e23x_fmc.c \
../system/src/gd32e23x/gd32e23x_fwdgt.c \
../system/src/gd32e23x/gd32e23x_gpio.c \
../system/src/gd32e23x/gd32e23x_i2c.c \
../system/src/gd32e23x/gd32e23x_it.c \
../system/src/gd32e23x/gd32e23x_misc.c \
../system/src/gd32e23x/gd32e23x_pmu.c \
../system/src/gd32e23x/gd32e23x_rcu.c \
../system/src/gd32e23x/gd32e23x_rtc.c \
../system/src/gd32e23x/gd32e23x_spi.c \
../system/src/gd32e23x/gd32e23x_syscfg.c \
../system/src/gd32e23x/gd32e23x_timer.c \
../system/src/gd32e23x/gd32e23x_usart.c \
../system/src/gd32e23x/gd32e23x_wwdgt.c 

OBJS += \
./system/src/gd32e23x/gd32e23x_adc.o \
./system/src/gd32e23x/gd32e23x_cmp.o \
./system/src/gd32e23x/gd32e23x_crc.o \
./system/src/gd32e23x/gd32e23x_dbg.o \
./system/src/gd32e23x/gd32e23x_dma.o \
./system/src/gd32e23x/gd32e23x_exti.o \
./system/src/gd32e23x/gd32e23x_fmc.o \
./system/src/gd32e23x/gd32e23x_fwdgt.o \
./system/src/gd32e23x/gd32e23x_gpio.o \
./system/src/gd32e23x/gd32e23x_i2c.o \
./system/src/gd32e23x/gd32e23x_it.o \
./system/src/gd32e23x/gd32e23x_misc.o \
./system/src/gd32e23x/gd32e23x_pmu.o \
./system/src/gd32e23x/gd32e23x_rcu.o \
./system/src/gd32e23x/gd32e23x_rtc.o \
./system/src/gd32e23x/gd32e23x_spi.o \
./system/src/gd32e23x/gd32e23x_syscfg.o \
./system/src/gd32e23x/gd32e23x_timer.o \
./system/src/gd32e23x/gd32e23x_usart.o \
./system/src/gd32e23x/gd32e23x_wwdgt.o 

C_DEPS += \
./system/src/gd32e23x/gd32e23x_adc.d \
./system/src/gd32e23x/gd32e23x_cmp.d \
./system/src/gd32e23x/gd32e23x_crc.d \
./system/src/gd32e23x/gd32e23x_dbg.d \
./system/src/gd32e23x/gd32e23x_dma.d \
./system/src/gd32e23x/gd32e23x_exti.d \
./system/src/gd32e23x/gd32e23x_fmc.d \
./system/src/gd32e23x/gd32e23x_fwdgt.d \
./system/src/gd32e23x/gd32e23x_gpio.d \
./system/src/gd32e23x/gd32e23x_i2c.d \
./system/src/gd32e23x/gd32e23x_it.d \
./system/src/gd32e23x/gd32e23x_misc.d \
./system/src/gd32e23x/gd32e23x_pmu.d \
./system/src/gd32e23x/gd32e23x_rcu.d \
./system/src/gd32e23x/gd32e23x_rtc.d \
./system/src/gd32e23x/gd32e23x_spi.d \
./system/src/gd32e23x/gd32e23x_syscfg.d \
./system/src/gd32e23x/gd32e23x_timer.d \
./system/src/gd32e23x/gd32e23x_usart.d \
./system/src/gd32e23x/gd32e23x_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32e23x/%.o: ../system/src/gd32e23x/%.c system/src/gd32e23x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m23 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DGD32E230 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32e23x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


