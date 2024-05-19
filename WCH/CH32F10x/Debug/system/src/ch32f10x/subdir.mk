################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/ch32f10x/ch32f10x_adc.c \
../system/src/ch32f10x/ch32f10x_bkp.c \
../system/src/ch32f10x/ch32f10x_can.c \
../system/src/ch32f10x/ch32f10x_crc.c \
../system/src/ch32f10x/ch32f10x_dac.c \
../system/src/ch32f10x/ch32f10x_dbgmcu.c \
../system/src/ch32f10x/ch32f10x_dma.c \
../system/src/ch32f10x/ch32f10x_exti.c \
../system/src/ch32f10x/ch32f10x_flash.c \
../system/src/ch32f10x/ch32f10x_gpio.c \
../system/src/ch32f10x/ch32f10x_i2c.c \
../system/src/ch32f10x/ch32f10x_it.c \
../system/src/ch32f10x/ch32f10x_iwdg.c \
../system/src/ch32f10x/ch32f10x_misc.c \
../system/src/ch32f10x/ch32f10x_pwr.c \
../system/src/ch32f10x/ch32f10x_rcc.c \
../system/src/ch32f10x/ch32f10x_rtc.c \
../system/src/ch32f10x/ch32f10x_spi.c \
../system/src/ch32f10x/ch32f10x_tim.c \
../system/src/ch32f10x/ch32f10x_usart.c \
../system/src/ch32f10x/ch32f10x_usb.c \
../system/src/ch32f10x/ch32f10x_usb_host.c \
../system/src/ch32f10x/ch32f10x_wwdg.c 

OBJS += \
./system/src/ch32f10x/ch32f10x_adc.o \
./system/src/ch32f10x/ch32f10x_bkp.o \
./system/src/ch32f10x/ch32f10x_can.o \
./system/src/ch32f10x/ch32f10x_crc.o \
./system/src/ch32f10x/ch32f10x_dac.o \
./system/src/ch32f10x/ch32f10x_dbgmcu.o \
./system/src/ch32f10x/ch32f10x_dma.o \
./system/src/ch32f10x/ch32f10x_exti.o \
./system/src/ch32f10x/ch32f10x_flash.o \
./system/src/ch32f10x/ch32f10x_gpio.o \
./system/src/ch32f10x/ch32f10x_i2c.o \
./system/src/ch32f10x/ch32f10x_it.o \
./system/src/ch32f10x/ch32f10x_iwdg.o \
./system/src/ch32f10x/ch32f10x_misc.o \
./system/src/ch32f10x/ch32f10x_pwr.o \
./system/src/ch32f10x/ch32f10x_rcc.o \
./system/src/ch32f10x/ch32f10x_rtc.o \
./system/src/ch32f10x/ch32f10x_spi.o \
./system/src/ch32f10x/ch32f10x_tim.o \
./system/src/ch32f10x/ch32f10x_usart.o \
./system/src/ch32f10x/ch32f10x_usb.o \
./system/src/ch32f10x/ch32f10x_usb_host.o \
./system/src/ch32f10x/ch32f10x_wwdg.o 

C_DEPS += \
./system/src/ch32f10x/ch32f10x_adc.d \
./system/src/ch32f10x/ch32f10x_bkp.d \
./system/src/ch32f10x/ch32f10x_can.d \
./system/src/ch32f10x/ch32f10x_crc.d \
./system/src/ch32f10x/ch32f10x_dac.d \
./system/src/ch32f10x/ch32f10x_dbgmcu.d \
./system/src/ch32f10x/ch32f10x_dma.d \
./system/src/ch32f10x/ch32f10x_exti.d \
./system/src/ch32f10x/ch32f10x_flash.d \
./system/src/ch32f10x/ch32f10x_gpio.d \
./system/src/ch32f10x/ch32f10x_i2c.d \
./system/src/ch32f10x/ch32f10x_it.d \
./system/src/ch32f10x/ch32f10x_iwdg.d \
./system/src/ch32f10x/ch32f10x_misc.d \
./system/src/ch32f10x/ch32f10x_pwr.d \
./system/src/ch32f10x/ch32f10x_rcc.d \
./system/src/ch32f10x/ch32f10x_rtc.d \
./system/src/ch32f10x/ch32f10x_spi.d \
./system/src/ch32f10x/ch32f10x_tim.d \
./system/src/ch32f10x/ch32f10x_usart.d \
./system/src/ch32f10x/ch32f10x_usb.d \
./system/src/ch32f10x/ch32f10x_usb_host.d \
./system/src/ch32f10x/ch32f10x_wwdg.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/ch32f10x/%.o: ../system/src/ch32f10x/%.c system/src/ch32f10x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/ch32f10x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


