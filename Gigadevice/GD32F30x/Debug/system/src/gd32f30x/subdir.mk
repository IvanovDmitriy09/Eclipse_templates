################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32f30x/gd32f30x_adc.c \
../system/src/gd32f30x/gd32f30x_bkp.c \
../system/src/gd32f30x/gd32f30x_can.c \
../system/src/gd32f30x/gd32f30x_crc.c \
../system/src/gd32f30x/gd32f30x_ctc.c \
../system/src/gd32f30x/gd32f30x_dac.c \
../system/src/gd32f30x/gd32f30x_dbg.c \
../system/src/gd32f30x/gd32f30x_dma.c \
../system/src/gd32f30x/gd32f30x_enet.c \
../system/src/gd32f30x/gd32f30x_exmc.c \
../system/src/gd32f30x/gd32f30x_exti.c \
../system/src/gd32f30x/gd32f30x_fmc.c \
../system/src/gd32f30x/gd32f30x_fwdgt.c \
../system/src/gd32f30x/gd32f30x_gpio.c \
../system/src/gd32f30x/gd32f30x_i2c.c \
../system/src/gd32f30x/gd32f30x_it.c \
../system/src/gd32f30x/gd32f30x_misc.c \
../system/src/gd32f30x/gd32f30x_pmu.c \
../system/src/gd32f30x/gd32f30x_rcu.c \
../system/src/gd32f30x/gd32f30x_rtc.c \
../system/src/gd32f30x/gd32f30x_sdio.c \
../system/src/gd32f30x/gd32f30x_spi.c \
../system/src/gd32f30x/gd32f30x_timer.c \
../system/src/gd32f30x/gd32f30x_usart.c \
../system/src/gd32f30x/gd32f30x_wwdgt.c 

OBJS += \
./system/src/gd32f30x/gd32f30x_adc.o \
./system/src/gd32f30x/gd32f30x_bkp.o \
./system/src/gd32f30x/gd32f30x_can.o \
./system/src/gd32f30x/gd32f30x_crc.o \
./system/src/gd32f30x/gd32f30x_ctc.o \
./system/src/gd32f30x/gd32f30x_dac.o \
./system/src/gd32f30x/gd32f30x_dbg.o \
./system/src/gd32f30x/gd32f30x_dma.o \
./system/src/gd32f30x/gd32f30x_enet.o \
./system/src/gd32f30x/gd32f30x_exmc.o \
./system/src/gd32f30x/gd32f30x_exti.o \
./system/src/gd32f30x/gd32f30x_fmc.o \
./system/src/gd32f30x/gd32f30x_fwdgt.o \
./system/src/gd32f30x/gd32f30x_gpio.o \
./system/src/gd32f30x/gd32f30x_i2c.o \
./system/src/gd32f30x/gd32f30x_it.o \
./system/src/gd32f30x/gd32f30x_misc.o \
./system/src/gd32f30x/gd32f30x_pmu.o \
./system/src/gd32f30x/gd32f30x_rcu.o \
./system/src/gd32f30x/gd32f30x_rtc.o \
./system/src/gd32f30x/gd32f30x_sdio.o \
./system/src/gd32f30x/gd32f30x_spi.o \
./system/src/gd32f30x/gd32f30x_timer.o \
./system/src/gd32f30x/gd32f30x_usart.o \
./system/src/gd32f30x/gd32f30x_wwdgt.o 

C_DEPS += \
./system/src/gd32f30x/gd32f30x_adc.d \
./system/src/gd32f30x/gd32f30x_bkp.d \
./system/src/gd32f30x/gd32f30x_can.d \
./system/src/gd32f30x/gd32f30x_crc.d \
./system/src/gd32f30x/gd32f30x_ctc.d \
./system/src/gd32f30x/gd32f30x_dac.d \
./system/src/gd32f30x/gd32f30x_dbg.d \
./system/src/gd32f30x/gd32f30x_dma.d \
./system/src/gd32f30x/gd32f30x_enet.d \
./system/src/gd32f30x/gd32f30x_exmc.d \
./system/src/gd32f30x/gd32f30x_exti.d \
./system/src/gd32f30x/gd32f30x_fmc.d \
./system/src/gd32f30x/gd32f30x_fwdgt.d \
./system/src/gd32f30x/gd32f30x_gpio.d \
./system/src/gd32f30x/gd32f30x_i2c.d \
./system/src/gd32f30x/gd32f30x_it.d \
./system/src/gd32f30x/gd32f30x_misc.d \
./system/src/gd32f30x/gd32f30x_pmu.d \
./system/src/gd32f30x/gd32f30x_rcu.d \
./system/src/gd32f30x/gd32f30x_rtc.d \
./system/src/gd32f30x/gd32f30x_sdio.d \
./system/src/gd32f30x/gd32f30x_spi.d \
./system/src/gd32f30x/gd32f30x_timer.d \
./system/src/gd32f30x/gd32f30x_usart.d \
./system/src/gd32f30x/gd32f30x_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32f30x/%.o: ../system/src/gd32f30x/%.c system/src/gd32f30x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DGD32F30X_HD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f30x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


