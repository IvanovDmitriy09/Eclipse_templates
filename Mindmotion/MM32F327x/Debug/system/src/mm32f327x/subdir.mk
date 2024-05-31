################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/mm32f327x/hal_adc.c \
../system/src/mm32f327x/hal_bkp.c \
../system/src/mm32f327x/hal_can.c \
../system/src/mm32f327x/hal_comp.c \
../system/src/mm32f327x/hal_crc.c \
../system/src/mm32f327x/hal_crs.c \
../system/src/mm32f327x/hal_dac.c \
../system/src/mm32f327x/hal_dbg.c \
../system/src/mm32f327x/hal_dma.c \
../system/src/mm32f327x/hal_exti.c \
../system/src/mm32f327x/hal_flash.c \
../system/src/mm32f327x/hal_fsmc.c \
../system/src/mm32f327x/hal_gpio.c \
../system/src/mm32f327x/hal_i2c.c \
../system/src/mm32f327x/hal_iwdg.c \
../system/src/mm32f327x/hal_misc.c \
../system/src/mm32f327x/hal_pwr.c \
../system/src/mm32f327x/hal_rcc.c \
../system/src/mm32f327x/hal_rtc.c \
../system/src/mm32f327x/hal_sdio.c \
../system/src/mm32f327x/hal_spi.c \
../system/src/mm32f327x/hal_tim.c \
../system/src/mm32f327x/hal_uart.c \
../system/src/mm32f327x/hal_uid.c \
../system/src/mm32f327x/hal_ver.c \
../system/src/mm32f327x/hal_wwdg.c 

C_DEPS += \
./system/src/mm32f327x/hal_adc.d \
./system/src/mm32f327x/hal_bkp.d \
./system/src/mm32f327x/hal_can.d \
./system/src/mm32f327x/hal_comp.d \
./system/src/mm32f327x/hal_crc.d \
./system/src/mm32f327x/hal_crs.d \
./system/src/mm32f327x/hal_dac.d \
./system/src/mm32f327x/hal_dbg.d \
./system/src/mm32f327x/hal_dma.d \
./system/src/mm32f327x/hal_exti.d \
./system/src/mm32f327x/hal_flash.d \
./system/src/mm32f327x/hal_fsmc.d \
./system/src/mm32f327x/hal_gpio.d \
./system/src/mm32f327x/hal_i2c.d \
./system/src/mm32f327x/hal_iwdg.d \
./system/src/mm32f327x/hal_misc.d \
./system/src/mm32f327x/hal_pwr.d \
./system/src/mm32f327x/hal_rcc.d \
./system/src/mm32f327x/hal_rtc.d \
./system/src/mm32f327x/hal_sdio.d \
./system/src/mm32f327x/hal_spi.d \
./system/src/mm32f327x/hal_tim.d \
./system/src/mm32f327x/hal_uart.d \
./system/src/mm32f327x/hal_uid.d \
./system/src/mm32f327x/hal_ver.d \
./system/src/mm32f327x/hal_wwdg.d 

OBJS += \
./system/src/mm32f327x/hal_adc.o \
./system/src/mm32f327x/hal_bkp.o \
./system/src/mm32f327x/hal_can.o \
./system/src/mm32f327x/hal_comp.o \
./system/src/mm32f327x/hal_crc.o \
./system/src/mm32f327x/hal_crs.o \
./system/src/mm32f327x/hal_dac.o \
./system/src/mm32f327x/hal_dbg.o \
./system/src/mm32f327x/hal_dma.o \
./system/src/mm32f327x/hal_exti.o \
./system/src/mm32f327x/hal_flash.o \
./system/src/mm32f327x/hal_fsmc.o \
./system/src/mm32f327x/hal_gpio.o \
./system/src/mm32f327x/hal_i2c.o \
./system/src/mm32f327x/hal_iwdg.o \
./system/src/mm32f327x/hal_misc.o \
./system/src/mm32f327x/hal_pwr.o \
./system/src/mm32f327x/hal_rcc.o \
./system/src/mm32f327x/hal_rtc.o \
./system/src/mm32f327x/hal_sdio.o \
./system/src/mm32f327x/hal_spi.o \
./system/src/mm32f327x/hal_tim.o \
./system/src/mm32f327x/hal_uart.o \
./system/src/mm32f327x/hal_uid.o \
./system/src/mm32f327x/hal_ver.o \
./system/src/mm32f327x/hal_wwdg.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/mm32f327x/%.o: ../system/src/mm32f327x/%.c system/src/mm32f327x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/mm32f327x" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


