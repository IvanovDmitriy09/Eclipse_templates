################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/CMT2380F32/adc.c \
../system/src/CMT2380F32/adt.c \
../system/src/CMT2380F32/bt.c \
../system/src/CMT2380F32/clk.c \
../system/src/CMT2380F32/crc.c \
../system/src/CMT2380F32/ddl.c \
../system/src/CMT2380F32/flash.c \
../system/src/CMT2380F32/gpio.c \
../system/src/CMT2380F32/i2c.c \
../system/src/CMT2380F32/interrupts_CMT2380F32.c \
../system/src/CMT2380F32/lpm.c \
../system/src/CMT2380F32/lpt.c \
../system/src/CMT2380F32/lpuart.c \
../system/src/CMT2380F32/lvd.c \
../system/src/CMT2380F32/pca.c \
../system/src/CMT2380F32/reset.c \
../system/src/CMT2380F32/rtc.c \
../system/src/CMT2380F32/spi.c \
../system/src/CMT2380F32/trim.c \
../system/src/CMT2380F32/uart.c \
../system/src/CMT2380F32/vc.c \
../system/src/CMT2380F32/wdt.c 

C_DEPS += \
./system/src/CMT2380F32/adc.d \
./system/src/CMT2380F32/adt.d \
./system/src/CMT2380F32/bt.d \
./system/src/CMT2380F32/clk.d \
./system/src/CMT2380F32/crc.d \
./system/src/CMT2380F32/ddl.d \
./system/src/CMT2380F32/flash.d \
./system/src/CMT2380F32/gpio.d \
./system/src/CMT2380F32/i2c.d \
./system/src/CMT2380F32/interrupts_CMT2380F32.d \
./system/src/CMT2380F32/lpm.d \
./system/src/CMT2380F32/lpt.d \
./system/src/CMT2380F32/lpuart.d \
./system/src/CMT2380F32/lvd.d \
./system/src/CMT2380F32/pca.d \
./system/src/CMT2380F32/reset.d \
./system/src/CMT2380F32/rtc.d \
./system/src/CMT2380F32/spi.d \
./system/src/CMT2380F32/trim.d \
./system/src/CMT2380F32/uart.d \
./system/src/CMT2380F32/vc.d \
./system/src/CMT2380F32/wdt.d 

OBJS += \
./system/src/CMT2380F32/adc.o \
./system/src/CMT2380F32/adt.o \
./system/src/CMT2380F32/bt.o \
./system/src/CMT2380F32/clk.o \
./system/src/CMT2380F32/crc.o \
./system/src/CMT2380F32/ddl.o \
./system/src/CMT2380F32/flash.o \
./system/src/CMT2380F32/gpio.o \
./system/src/CMT2380F32/i2c.o \
./system/src/CMT2380F32/interrupts_CMT2380F32.o \
./system/src/CMT2380F32/lpm.o \
./system/src/CMT2380F32/lpt.o \
./system/src/CMT2380F32/lpuart.o \
./system/src/CMT2380F32/lvd.o \
./system/src/CMT2380F32/pca.o \
./system/src/CMT2380F32/reset.o \
./system/src/CMT2380F32/rtc.o \
./system/src/CMT2380F32/spi.o \
./system/src/CMT2380F32/trim.o \
./system/src/CMT2380F32/uart.o \
./system/src/CMT2380F32/vc.o \
./system/src/CMT2380F32/wdt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/CMT2380F32/%.o: ../system/src/CMT2380F32/%.c system/src/CMT2380F32/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/CMT2380F32" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


