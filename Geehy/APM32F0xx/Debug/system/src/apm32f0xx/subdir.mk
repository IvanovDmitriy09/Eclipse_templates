################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/apm32f0xx/apm32f0xx_adc.c \
../system/src/apm32f0xx/apm32f0xx_can.c \
../system/src/apm32f0xx/apm32f0xx_cec.c \
../system/src/apm32f0xx/apm32f0xx_comp.c \
../system/src/apm32f0xx/apm32f0xx_crc.c \
../system/src/apm32f0xx/apm32f0xx_crs.c \
../system/src/apm32f0xx/apm32f0xx_dac.c \
../system/src/apm32f0xx/apm32f0xx_dbg.c \
../system/src/apm32f0xx/apm32f0xx_dma.c \
../system/src/apm32f0xx/apm32f0xx_eint.c \
../system/src/apm32f0xx/apm32f0xx_fmc.c \
../system/src/apm32f0xx/apm32f0xx_gpio.c \
../system/src/apm32f0xx/apm32f0xx_i2c.c \
../system/src/apm32f0xx/apm32f0xx_iwdt.c \
../system/src/apm32f0xx/apm32f0xx_misc.c \
../system/src/apm32f0xx/apm32f0xx_ob.c \
../system/src/apm32f0xx/apm32f0xx_pmu.c \
../system/src/apm32f0xx/apm32f0xx_rcm.c \
../system/src/apm32f0xx/apm32f0xx_rtc.c \
../system/src/apm32f0xx/apm32f0xx_spi.c \
../system/src/apm32f0xx/apm32f0xx_syscfg.c \
../system/src/apm32f0xx/apm32f0xx_tmr.c \
../system/src/apm32f0xx/apm32f0xx_usart.c \
../system/src/apm32f0xx/apm32f0xx_wwdt.c 

OBJS += \
./system/src/apm32f0xx/apm32f0xx_adc.o \
./system/src/apm32f0xx/apm32f0xx_can.o \
./system/src/apm32f0xx/apm32f0xx_cec.o \
./system/src/apm32f0xx/apm32f0xx_comp.o \
./system/src/apm32f0xx/apm32f0xx_crc.o \
./system/src/apm32f0xx/apm32f0xx_crs.o \
./system/src/apm32f0xx/apm32f0xx_dac.o \
./system/src/apm32f0xx/apm32f0xx_dbg.o \
./system/src/apm32f0xx/apm32f0xx_dma.o \
./system/src/apm32f0xx/apm32f0xx_eint.o \
./system/src/apm32f0xx/apm32f0xx_fmc.o \
./system/src/apm32f0xx/apm32f0xx_gpio.o \
./system/src/apm32f0xx/apm32f0xx_i2c.o \
./system/src/apm32f0xx/apm32f0xx_iwdt.o \
./system/src/apm32f0xx/apm32f0xx_misc.o \
./system/src/apm32f0xx/apm32f0xx_ob.o \
./system/src/apm32f0xx/apm32f0xx_pmu.o \
./system/src/apm32f0xx/apm32f0xx_rcm.o \
./system/src/apm32f0xx/apm32f0xx_rtc.o \
./system/src/apm32f0xx/apm32f0xx_spi.o \
./system/src/apm32f0xx/apm32f0xx_syscfg.o \
./system/src/apm32f0xx/apm32f0xx_tmr.o \
./system/src/apm32f0xx/apm32f0xx_usart.o \
./system/src/apm32f0xx/apm32f0xx_wwdt.o 

C_DEPS += \
./system/src/apm32f0xx/apm32f0xx_adc.d \
./system/src/apm32f0xx/apm32f0xx_can.d \
./system/src/apm32f0xx/apm32f0xx_cec.d \
./system/src/apm32f0xx/apm32f0xx_comp.d \
./system/src/apm32f0xx/apm32f0xx_crc.d \
./system/src/apm32f0xx/apm32f0xx_crs.d \
./system/src/apm32f0xx/apm32f0xx_dac.d \
./system/src/apm32f0xx/apm32f0xx_dbg.d \
./system/src/apm32f0xx/apm32f0xx_dma.d \
./system/src/apm32f0xx/apm32f0xx_eint.d \
./system/src/apm32f0xx/apm32f0xx_fmc.d \
./system/src/apm32f0xx/apm32f0xx_gpio.d \
./system/src/apm32f0xx/apm32f0xx_i2c.d \
./system/src/apm32f0xx/apm32f0xx_iwdt.d \
./system/src/apm32f0xx/apm32f0xx_misc.d \
./system/src/apm32f0xx/apm32f0xx_ob.d \
./system/src/apm32f0xx/apm32f0xx_pmu.d \
./system/src/apm32f0xx/apm32f0xx_rcm.d \
./system/src/apm32f0xx/apm32f0xx_rtc.d \
./system/src/apm32f0xx/apm32f0xx_spi.d \
./system/src/apm32f0xx/apm32f0xx_syscfg.d \
./system/src/apm32f0xx/apm32f0xx_tmr.d \
./system/src/apm32f0xx/apm32f0xx_usart.d \
./system/src/apm32f0xx/apm32f0xx_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/apm32f0xx/%.o: ../system/src/apm32f0xx/%.c system/src/apm32f0xx/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DAPM32F030 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/apm32f0xx" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


