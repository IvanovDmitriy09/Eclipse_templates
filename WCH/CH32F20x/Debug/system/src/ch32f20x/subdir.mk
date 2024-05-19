################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/ch32f20x/ch32f20x_adc.c \
../system/src/ch32f20x/ch32f20x_bkp.c \
../system/src/ch32f20x/ch32f20x_can.c \
../system/src/ch32f20x/ch32f20x_crc.c \
../system/src/ch32f20x/ch32f20x_dac.c \
../system/src/ch32f20x/ch32f20x_dbgmcu.c \
../system/src/ch32f20x/ch32f20x_dma.c \
../system/src/ch32f20x/ch32f20x_dvp.c \
../system/src/ch32f20x/ch32f20x_eth.c \
../system/src/ch32f20x/ch32f20x_exti.c \
../system/src/ch32f20x/ch32f20x_flash.c \
../system/src/ch32f20x/ch32f20x_fsmc.c \
../system/src/ch32f20x/ch32f20x_gpio.c \
../system/src/ch32f20x/ch32f20x_i2c.c \
../system/src/ch32f20x/ch32f20x_it.c \
../system/src/ch32f20x/ch32f20x_iwdg.c \
../system/src/ch32f20x/ch32f20x_misc.c \
../system/src/ch32f20x/ch32f20x_opa.c \
../system/src/ch32f20x/ch32f20x_pwr.c \
../system/src/ch32f20x/ch32f20x_rcc.c \
../system/src/ch32f20x/ch32f20x_rng.c \
../system/src/ch32f20x/ch32f20x_rtc.c \
../system/src/ch32f20x/ch32f20x_sdio.c \
../system/src/ch32f20x/ch32f20x_spi.c \
../system/src/ch32f20x/ch32f20x_tim.c \
../system/src/ch32f20x/ch32f20x_usart.c \
../system/src/ch32f20x/ch32f20x_wwdg.c 

OBJS += \
./system/src/ch32f20x/ch32f20x_adc.o \
./system/src/ch32f20x/ch32f20x_bkp.o \
./system/src/ch32f20x/ch32f20x_can.o \
./system/src/ch32f20x/ch32f20x_crc.o \
./system/src/ch32f20x/ch32f20x_dac.o \
./system/src/ch32f20x/ch32f20x_dbgmcu.o \
./system/src/ch32f20x/ch32f20x_dma.o \
./system/src/ch32f20x/ch32f20x_dvp.o \
./system/src/ch32f20x/ch32f20x_eth.o \
./system/src/ch32f20x/ch32f20x_exti.o \
./system/src/ch32f20x/ch32f20x_flash.o \
./system/src/ch32f20x/ch32f20x_fsmc.o \
./system/src/ch32f20x/ch32f20x_gpio.o \
./system/src/ch32f20x/ch32f20x_i2c.o \
./system/src/ch32f20x/ch32f20x_it.o \
./system/src/ch32f20x/ch32f20x_iwdg.o \
./system/src/ch32f20x/ch32f20x_misc.o \
./system/src/ch32f20x/ch32f20x_opa.o \
./system/src/ch32f20x/ch32f20x_pwr.o \
./system/src/ch32f20x/ch32f20x_rcc.o \
./system/src/ch32f20x/ch32f20x_rng.o \
./system/src/ch32f20x/ch32f20x_rtc.o \
./system/src/ch32f20x/ch32f20x_sdio.o \
./system/src/ch32f20x/ch32f20x_spi.o \
./system/src/ch32f20x/ch32f20x_tim.o \
./system/src/ch32f20x/ch32f20x_usart.o \
./system/src/ch32f20x/ch32f20x_wwdg.o 

C_DEPS += \
./system/src/ch32f20x/ch32f20x_adc.d \
./system/src/ch32f20x/ch32f20x_bkp.d \
./system/src/ch32f20x/ch32f20x_can.d \
./system/src/ch32f20x/ch32f20x_crc.d \
./system/src/ch32f20x/ch32f20x_dac.d \
./system/src/ch32f20x/ch32f20x_dbgmcu.d \
./system/src/ch32f20x/ch32f20x_dma.d \
./system/src/ch32f20x/ch32f20x_dvp.d \
./system/src/ch32f20x/ch32f20x_eth.d \
./system/src/ch32f20x/ch32f20x_exti.d \
./system/src/ch32f20x/ch32f20x_flash.d \
./system/src/ch32f20x/ch32f20x_fsmc.d \
./system/src/ch32f20x/ch32f20x_gpio.d \
./system/src/ch32f20x/ch32f20x_i2c.d \
./system/src/ch32f20x/ch32f20x_it.d \
./system/src/ch32f20x/ch32f20x_iwdg.d \
./system/src/ch32f20x/ch32f20x_misc.d \
./system/src/ch32f20x/ch32f20x_opa.d \
./system/src/ch32f20x/ch32f20x_pwr.d \
./system/src/ch32f20x/ch32f20x_rcc.d \
./system/src/ch32f20x/ch32f20x_rng.d \
./system/src/ch32f20x/ch32f20x_rtc.d \
./system/src/ch32f20x/ch32f20x_sdio.d \
./system/src/ch32f20x/ch32f20x_spi.d \
./system/src/ch32f20x/ch32f20x_tim.d \
./system/src/ch32f20x/ch32f20x_usart.d \
./system/src/ch32f20x/ch32f20x_wwdg.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/ch32f20x/%.o: ../system/src/ch32f20x/%.c system/src/ch32f20x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/ch32f20x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


