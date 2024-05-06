################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/K1921VK028/plib028_adc.c \
../system/src/K1921VK028/plib028_bflash.c \
../system/src/K1921VK028/plib028_can.c \
../system/src/K1921VK028/plib028_dma.c \
../system/src/K1921VK028/plib028_ecap.c \
../system/src/K1921VK028/plib028_eth.c \
../system/src/K1921VK028/plib028_etmr.c \
../system/src/K1921VK028/plib028_extmem.c \
../system/src/K1921VK028/plib028_gpio.c \
../system/src/K1921VK028/plib028_i2c.c \
../system/src/K1921VK028/plib028_lau.c \
../system/src/K1921VK028/plib028_mflash.c \
../system/src/K1921VK028/plib028_milstd.c \
../system/src/K1921VK028/plib028_owi.c \
../system/src/K1921VK028/plib028_pmu.c \
../system/src/K1921VK028/plib028_pwm.c \
../system/src/K1921VK028/plib028_qep.c \
../system/src/K1921VK028/plib028_rcu.c \
../system/src/K1921VK028/plib028_rtc.c \
../system/src/K1921VK028/plib028_sdfm.c \
../system/src/K1921VK028/plib028_spi.c \
../system/src/K1921VK028/plib028_spwr.c \
../system/src/K1921VK028/plib028_tmr.c \
../system/src/K1921VK028/plib028_tmu.c \
../system/src/K1921VK028/plib028_tuart.c \
../system/src/K1921VK028/plib028_uart.c \
../system/src/K1921VK028/plib028_wdt.c 

OBJS += \
./system/src/K1921VK028/plib028_adc.o \
./system/src/K1921VK028/plib028_bflash.o \
./system/src/K1921VK028/plib028_can.o \
./system/src/K1921VK028/plib028_dma.o \
./system/src/K1921VK028/plib028_ecap.o \
./system/src/K1921VK028/plib028_eth.o \
./system/src/K1921VK028/plib028_etmr.o \
./system/src/K1921VK028/plib028_extmem.o \
./system/src/K1921VK028/plib028_gpio.o \
./system/src/K1921VK028/plib028_i2c.o \
./system/src/K1921VK028/plib028_lau.o \
./system/src/K1921VK028/plib028_mflash.o \
./system/src/K1921VK028/plib028_milstd.o \
./system/src/K1921VK028/plib028_owi.o \
./system/src/K1921VK028/plib028_pmu.o \
./system/src/K1921VK028/plib028_pwm.o \
./system/src/K1921VK028/plib028_qep.o \
./system/src/K1921VK028/plib028_rcu.o \
./system/src/K1921VK028/plib028_rtc.o \
./system/src/K1921VK028/plib028_sdfm.o \
./system/src/K1921VK028/plib028_spi.o \
./system/src/K1921VK028/plib028_spwr.o \
./system/src/K1921VK028/plib028_tmr.o \
./system/src/K1921VK028/plib028_tmu.o \
./system/src/K1921VK028/plib028_tuart.o \
./system/src/K1921VK028/plib028_uart.o \
./system/src/K1921VK028/plib028_wdt.o 

C_DEPS += \
./system/src/K1921VK028/plib028_adc.d \
./system/src/K1921VK028/plib028_bflash.d \
./system/src/K1921VK028/plib028_can.d \
./system/src/K1921VK028/plib028_dma.d \
./system/src/K1921VK028/plib028_ecap.d \
./system/src/K1921VK028/plib028_eth.d \
./system/src/K1921VK028/plib028_etmr.d \
./system/src/K1921VK028/plib028_extmem.d \
./system/src/K1921VK028/plib028_gpio.d \
./system/src/K1921VK028/plib028_i2c.d \
./system/src/K1921VK028/plib028_lau.d \
./system/src/K1921VK028/plib028_mflash.d \
./system/src/K1921VK028/plib028_milstd.d \
./system/src/K1921VK028/plib028_owi.d \
./system/src/K1921VK028/plib028_pmu.d \
./system/src/K1921VK028/plib028_pwm.d \
./system/src/K1921VK028/plib028_qep.d \
./system/src/K1921VK028/plib028_rcu.d \
./system/src/K1921VK028/plib028_rtc.d \
./system/src/K1921VK028/plib028_sdfm.d \
./system/src/K1921VK028/plib028_spi.d \
./system/src/K1921VK028/plib028_spwr.d \
./system/src/K1921VK028/plib028_tmr.d \
./system/src/K1921VK028/plib028_tmu.d \
./system/src/K1921VK028/plib028_tuart.d \
./system/src/K1921VK028/plib028_uart.d \
./system/src/K1921VK028/plib028_wdt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/K1921VK028/%.o: ../system/src/K1921VK028/%.c system/src/K1921VK028/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DSYSCLK_SRC -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/K1921VK028" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


