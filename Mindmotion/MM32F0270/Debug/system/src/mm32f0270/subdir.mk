################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/mm32f0270/hal_adc.c \
../system/src/mm32f0270/hal_bkp.c \
../system/src/mm32f0270/hal_can.c \
../system/src/mm32f0270/hal_comp.c \
../system/src/mm32f0270/hal_crc.c \
../system/src/mm32f0270/hal_crs.c \
../system/src/mm32f0270/hal_dac.c \
../system/src/mm32f0270/hal_dbg.c \
../system/src/mm32f0270/hal_div.c \
../system/src/mm32f0270/hal_dma.c \
../system/src/mm32f0270/hal_exti.c \
../system/src/mm32f0270/hal_flash.c \
../system/src/mm32f0270/hal_gpio.c \
../system/src/mm32f0270/hal_i2c.c \
../system/src/mm32f0270/hal_iwdg.c \
../system/src/mm32f0270/hal_lptim.c \
../system/src/mm32f0270/hal_lpuart.c \
../system/src/mm32f0270/hal_misc.c \
../system/src/mm32f0270/hal_pwr.c \
../system/src/mm32f0270/hal_rcc.c \
../system/src/mm32f0270/hal_rtc.c \
../system/src/mm32f0270/hal_spi.c \
../system/src/mm32f0270/hal_tim.c \
../system/src/mm32f0270/hal_uart.c \
../system/src/mm32f0270/hal_uid.c \
../system/src/mm32f0270/hal_ver.c \
../system/src/mm32f0270/hal_wwdg.c 

C_DEPS += \
./system/src/mm32f0270/hal_adc.d \
./system/src/mm32f0270/hal_bkp.d \
./system/src/mm32f0270/hal_can.d \
./system/src/mm32f0270/hal_comp.d \
./system/src/mm32f0270/hal_crc.d \
./system/src/mm32f0270/hal_crs.d \
./system/src/mm32f0270/hal_dac.d \
./system/src/mm32f0270/hal_dbg.d \
./system/src/mm32f0270/hal_div.d \
./system/src/mm32f0270/hal_dma.d \
./system/src/mm32f0270/hal_exti.d \
./system/src/mm32f0270/hal_flash.d \
./system/src/mm32f0270/hal_gpio.d \
./system/src/mm32f0270/hal_i2c.d \
./system/src/mm32f0270/hal_iwdg.d \
./system/src/mm32f0270/hal_lptim.d \
./system/src/mm32f0270/hal_lpuart.d \
./system/src/mm32f0270/hal_misc.d \
./system/src/mm32f0270/hal_pwr.d \
./system/src/mm32f0270/hal_rcc.d \
./system/src/mm32f0270/hal_rtc.d \
./system/src/mm32f0270/hal_spi.d \
./system/src/mm32f0270/hal_tim.d \
./system/src/mm32f0270/hal_uart.d \
./system/src/mm32f0270/hal_uid.d \
./system/src/mm32f0270/hal_ver.d \
./system/src/mm32f0270/hal_wwdg.d 

OBJS += \
./system/src/mm32f0270/hal_adc.o \
./system/src/mm32f0270/hal_bkp.o \
./system/src/mm32f0270/hal_can.o \
./system/src/mm32f0270/hal_comp.o \
./system/src/mm32f0270/hal_crc.o \
./system/src/mm32f0270/hal_crs.o \
./system/src/mm32f0270/hal_dac.o \
./system/src/mm32f0270/hal_dbg.o \
./system/src/mm32f0270/hal_div.o \
./system/src/mm32f0270/hal_dma.o \
./system/src/mm32f0270/hal_exti.o \
./system/src/mm32f0270/hal_flash.o \
./system/src/mm32f0270/hal_gpio.o \
./system/src/mm32f0270/hal_i2c.o \
./system/src/mm32f0270/hal_iwdg.o \
./system/src/mm32f0270/hal_lptim.o \
./system/src/mm32f0270/hal_lpuart.o \
./system/src/mm32f0270/hal_misc.o \
./system/src/mm32f0270/hal_pwr.o \
./system/src/mm32f0270/hal_rcc.o \
./system/src/mm32f0270/hal_rtc.o \
./system/src/mm32f0270/hal_spi.o \
./system/src/mm32f0270/hal_tim.o \
./system/src/mm32f0270/hal_uart.o \
./system/src/mm32f0270/hal_uid.o \
./system/src/mm32f0270/hal_ver.o \
./system/src/mm32f0270/hal_wwdg.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/mm32f0270/%.o: ../system/src/mm32f0270/%.c system/src/mm32f0270/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/mm32f0270" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


