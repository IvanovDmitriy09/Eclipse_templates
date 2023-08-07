################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32c11x/gd32c11x_adc.c \
../system/src/gd32c11x/gd32c11x_bkp.c \
../system/src/gd32c11x/gd32c11x_can.c \
../system/src/gd32c11x/gd32c11x_crc.c \
../system/src/gd32c11x/gd32c11x_ctc.c \
../system/src/gd32c11x/gd32c11x_dac.c \
../system/src/gd32c11x/gd32c11x_dbg.c \
../system/src/gd32c11x/gd32c11x_dma.c \
../system/src/gd32c11x/gd32c11x_exmc.c \
../system/src/gd32c11x/gd32c11x_exti.c \
../system/src/gd32c11x/gd32c11x_fmc.c \
../system/src/gd32c11x/gd32c11x_fwdgt.c \
../system/src/gd32c11x/gd32c11x_gpio.c \
../system/src/gd32c11x/gd32c11x_i2c.c \
../system/src/gd32c11x/gd32c11x_it.c \
../system/src/gd32c11x/gd32c11x_misc.c \
../system/src/gd32c11x/gd32c11x_pmu.c \
../system/src/gd32c11x/gd32c11x_rcu.c \
../system/src/gd32c11x/gd32c11x_rtc.c \
../system/src/gd32c11x/gd32c11x_spi.c \
../system/src/gd32c11x/gd32c11x_timer.c \
../system/src/gd32c11x/gd32c11x_usart.c \
../system/src/gd32c11x/gd32c11x_wwdgt.c 

OBJS += \
./system/src/gd32c11x/gd32c11x_adc.o \
./system/src/gd32c11x/gd32c11x_bkp.o \
./system/src/gd32c11x/gd32c11x_can.o \
./system/src/gd32c11x/gd32c11x_crc.o \
./system/src/gd32c11x/gd32c11x_ctc.o \
./system/src/gd32c11x/gd32c11x_dac.o \
./system/src/gd32c11x/gd32c11x_dbg.o \
./system/src/gd32c11x/gd32c11x_dma.o \
./system/src/gd32c11x/gd32c11x_exmc.o \
./system/src/gd32c11x/gd32c11x_exti.o \
./system/src/gd32c11x/gd32c11x_fmc.o \
./system/src/gd32c11x/gd32c11x_fwdgt.o \
./system/src/gd32c11x/gd32c11x_gpio.o \
./system/src/gd32c11x/gd32c11x_i2c.o \
./system/src/gd32c11x/gd32c11x_it.o \
./system/src/gd32c11x/gd32c11x_misc.o \
./system/src/gd32c11x/gd32c11x_pmu.o \
./system/src/gd32c11x/gd32c11x_rcu.o \
./system/src/gd32c11x/gd32c11x_rtc.o \
./system/src/gd32c11x/gd32c11x_spi.o \
./system/src/gd32c11x/gd32c11x_timer.o \
./system/src/gd32c11x/gd32c11x_usart.o \
./system/src/gd32c11x/gd32c11x_wwdgt.o 

C_DEPS += \
./system/src/gd32c11x/gd32c11x_adc.d \
./system/src/gd32c11x/gd32c11x_bkp.d \
./system/src/gd32c11x/gd32c11x_can.d \
./system/src/gd32c11x/gd32c11x_crc.d \
./system/src/gd32c11x/gd32c11x_ctc.d \
./system/src/gd32c11x/gd32c11x_dac.d \
./system/src/gd32c11x/gd32c11x_dbg.d \
./system/src/gd32c11x/gd32c11x_dma.d \
./system/src/gd32c11x/gd32c11x_exmc.d \
./system/src/gd32c11x/gd32c11x_exti.d \
./system/src/gd32c11x/gd32c11x_fmc.d \
./system/src/gd32c11x/gd32c11x_fwdgt.d \
./system/src/gd32c11x/gd32c11x_gpio.d \
./system/src/gd32c11x/gd32c11x_i2c.d \
./system/src/gd32c11x/gd32c11x_it.d \
./system/src/gd32c11x/gd32c11x_misc.d \
./system/src/gd32c11x/gd32c11x_pmu.d \
./system/src/gd32c11x/gd32c11x_rcu.d \
./system/src/gd32c11x/gd32c11x_rtc.d \
./system/src/gd32c11x/gd32c11x_spi.d \
./system/src/gd32c11x/gd32c11x_timer.d \
./system/src/gd32c11x/gd32c11x_usart.d \
./system/src/gd32c11x/gd32c11x_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32c11x/%.o: ../system/src/gd32c11x/%.c system/src/gd32c11x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32c11x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


