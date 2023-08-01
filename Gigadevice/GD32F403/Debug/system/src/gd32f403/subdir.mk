################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32f403/gd32f403_adc.c \
../system/src/gd32f403/gd32f403_bkp.c \
../system/src/gd32f403/gd32f403_can.c \
../system/src/gd32f403/gd32f403_crc.c \
../system/src/gd32f403/gd32f403_ctc.c \
../system/src/gd32f403/gd32f403_dac.c \
../system/src/gd32f403/gd32f403_dbg.c \
../system/src/gd32f403/gd32f403_dma.c \
../system/src/gd32f403/gd32f403_exmc.c \
../system/src/gd32f403/gd32f403_exti.c \
../system/src/gd32f403/gd32f403_fmc.c \
../system/src/gd32f403/gd32f403_fwdgt.c \
../system/src/gd32f403/gd32f403_gpio.c \
../system/src/gd32f403/gd32f403_i2c.c \
../system/src/gd32f403/gd32f403_it.c \
../system/src/gd32f403/gd32f403_misc.c \
../system/src/gd32f403/gd32f403_pmu.c \
../system/src/gd32f403/gd32f403_rcu.c \
../system/src/gd32f403/gd32f403_rtc.c \
../system/src/gd32f403/gd32f403_sdio.c \
../system/src/gd32f403/gd32f403_spi.c \
../system/src/gd32f403/gd32f403_timer.c \
../system/src/gd32f403/gd32f403_usart.c \
../system/src/gd32f403/gd32f403_wwdgt.c 

OBJS += \
./system/src/gd32f403/gd32f403_adc.o \
./system/src/gd32f403/gd32f403_bkp.o \
./system/src/gd32f403/gd32f403_can.o \
./system/src/gd32f403/gd32f403_crc.o \
./system/src/gd32f403/gd32f403_ctc.o \
./system/src/gd32f403/gd32f403_dac.o \
./system/src/gd32f403/gd32f403_dbg.o \
./system/src/gd32f403/gd32f403_dma.o \
./system/src/gd32f403/gd32f403_exmc.o \
./system/src/gd32f403/gd32f403_exti.o \
./system/src/gd32f403/gd32f403_fmc.o \
./system/src/gd32f403/gd32f403_fwdgt.o \
./system/src/gd32f403/gd32f403_gpio.o \
./system/src/gd32f403/gd32f403_i2c.o \
./system/src/gd32f403/gd32f403_it.o \
./system/src/gd32f403/gd32f403_misc.o \
./system/src/gd32f403/gd32f403_pmu.o \
./system/src/gd32f403/gd32f403_rcu.o \
./system/src/gd32f403/gd32f403_rtc.o \
./system/src/gd32f403/gd32f403_sdio.o \
./system/src/gd32f403/gd32f403_spi.o \
./system/src/gd32f403/gd32f403_timer.o \
./system/src/gd32f403/gd32f403_usart.o \
./system/src/gd32f403/gd32f403_wwdgt.o 

C_DEPS += \
./system/src/gd32f403/gd32f403_adc.d \
./system/src/gd32f403/gd32f403_bkp.d \
./system/src/gd32f403/gd32f403_can.d \
./system/src/gd32f403/gd32f403_crc.d \
./system/src/gd32f403/gd32f403_ctc.d \
./system/src/gd32f403/gd32f403_dac.d \
./system/src/gd32f403/gd32f403_dbg.d \
./system/src/gd32f403/gd32f403_dma.d \
./system/src/gd32f403/gd32f403_exmc.d \
./system/src/gd32f403/gd32f403_exti.d \
./system/src/gd32f403/gd32f403_fmc.d \
./system/src/gd32f403/gd32f403_fwdgt.d \
./system/src/gd32f403/gd32f403_gpio.d \
./system/src/gd32f403/gd32f403_i2c.d \
./system/src/gd32f403/gd32f403_it.d \
./system/src/gd32f403/gd32f403_misc.d \
./system/src/gd32f403/gd32f403_pmu.d \
./system/src/gd32f403/gd32f403_rcu.d \
./system/src/gd32f403/gd32f403_rtc.d \
./system/src/gd32f403/gd32f403_sdio.d \
./system/src/gd32f403/gd32f403_spi.d \
./system/src/gd32f403/gd32f403_timer.d \
./system/src/gd32f403/gd32f403_usart.d \
./system/src/gd32f403/gd32f403_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32f403/%.o: ../system/src/gd32f403/%.c system/src/gd32f403/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/gd32f403" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


