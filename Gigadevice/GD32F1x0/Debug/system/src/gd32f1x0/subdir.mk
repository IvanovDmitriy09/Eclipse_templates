################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32f1x0/gd32f1x0_adc.c \
../system/src/gd32f1x0/gd32f1x0_cec.c \
../system/src/gd32f1x0/gd32f1x0_cmp.c \
../system/src/gd32f1x0/gd32f1x0_crc.c \
../system/src/gd32f1x0/gd32f1x0_dac.c \
../system/src/gd32f1x0/gd32f1x0_dbg.c \
../system/src/gd32f1x0/gd32f1x0_dma.c \
../system/src/gd32f1x0/gd32f1x0_exti.c \
../system/src/gd32f1x0/gd32f1x0_fmc.c \
../system/src/gd32f1x0/gd32f1x0_fwdgt.c \
../system/src/gd32f1x0/gd32f1x0_gpio.c \
../system/src/gd32f1x0/gd32f1x0_i2c.c \
../system/src/gd32f1x0/gd32f1x0_it.c \
../system/src/gd32f1x0/gd32f1x0_misc.c \
../system/src/gd32f1x0/gd32f1x0_pmu.c \
../system/src/gd32f1x0/gd32f1x0_rcu.c \
../system/src/gd32f1x0/gd32f1x0_rtc.c \
../system/src/gd32f1x0/gd32f1x0_spi.c \
../system/src/gd32f1x0/gd32f1x0_syscfg.c \
../system/src/gd32f1x0/gd32f1x0_timer.c \
../system/src/gd32f1x0/gd32f1x0_tsi.c \
../system/src/gd32f1x0/gd32f1x0_usart.c \
../system/src/gd32f1x0/gd32f1x0_wwdgt.c 

OBJS += \
./system/src/gd32f1x0/gd32f1x0_adc.o \
./system/src/gd32f1x0/gd32f1x0_cec.o \
./system/src/gd32f1x0/gd32f1x0_cmp.o \
./system/src/gd32f1x0/gd32f1x0_crc.o \
./system/src/gd32f1x0/gd32f1x0_dac.o \
./system/src/gd32f1x0/gd32f1x0_dbg.o \
./system/src/gd32f1x0/gd32f1x0_dma.o \
./system/src/gd32f1x0/gd32f1x0_exti.o \
./system/src/gd32f1x0/gd32f1x0_fmc.o \
./system/src/gd32f1x0/gd32f1x0_fwdgt.o \
./system/src/gd32f1x0/gd32f1x0_gpio.o \
./system/src/gd32f1x0/gd32f1x0_i2c.o \
./system/src/gd32f1x0/gd32f1x0_it.o \
./system/src/gd32f1x0/gd32f1x0_misc.o \
./system/src/gd32f1x0/gd32f1x0_pmu.o \
./system/src/gd32f1x0/gd32f1x0_rcu.o \
./system/src/gd32f1x0/gd32f1x0_rtc.o \
./system/src/gd32f1x0/gd32f1x0_spi.o \
./system/src/gd32f1x0/gd32f1x0_syscfg.o \
./system/src/gd32f1x0/gd32f1x0_timer.o \
./system/src/gd32f1x0/gd32f1x0_tsi.o \
./system/src/gd32f1x0/gd32f1x0_usart.o \
./system/src/gd32f1x0/gd32f1x0_wwdgt.o 

C_DEPS += \
./system/src/gd32f1x0/gd32f1x0_adc.d \
./system/src/gd32f1x0/gd32f1x0_cec.d \
./system/src/gd32f1x0/gd32f1x0_cmp.d \
./system/src/gd32f1x0/gd32f1x0_crc.d \
./system/src/gd32f1x0/gd32f1x0_dac.d \
./system/src/gd32f1x0/gd32f1x0_dbg.d \
./system/src/gd32f1x0/gd32f1x0_dma.d \
./system/src/gd32f1x0/gd32f1x0_exti.d \
./system/src/gd32f1x0/gd32f1x0_fmc.d \
./system/src/gd32f1x0/gd32f1x0_fwdgt.d \
./system/src/gd32f1x0/gd32f1x0_gpio.d \
./system/src/gd32f1x0/gd32f1x0_i2c.d \
./system/src/gd32f1x0/gd32f1x0_it.d \
./system/src/gd32f1x0/gd32f1x0_misc.d \
./system/src/gd32f1x0/gd32f1x0_pmu.d \
./system/src/gd32f1x0/gd32f1x0_rcu.d \
./system/src/gd32f1x0/gd32f1x0_rtc.d \
./system/src/gd32f1x0/gd32f1x0_spi.d \
./system/src/gd32f1x0/gd32f1x0_syscfg.d \
./system/src/gd32f1x0/gd32f1x0_timer.d \
./system/src/gd32f1x0/gd32f1x0_tsi.d \
./system/src/gd32f1x0/gd32f1x0_usart.d \
./system/src/gd32f1x0/gd32f1x0_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32f1x0/%.o: ../system/src/gd32f1x0/%.c system/src/gd32f1x0/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f1x0" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


