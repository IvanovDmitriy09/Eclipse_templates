################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32vf103/gd32vf103_adc.c \
../system/src/gd32vf103/gd32vf103_bkp.c \
../system/src/gd32vf103/gd32vf103_can.c \
../system/src/gd32vf103/gd32vf103_crc.c \
../system/src/gd32vf103/gd32vf103_dac.c \
../system/src/gd32vf103/gd32vf103_dbg.c \
../system/src/gd32vf103/gd32vf103_dma.c \
../system/src/gd32vf103/gd32vf103_eclic.c \
../system/src/gd32vf103/gd32vf103_exmc.c \
../system/src/gd32vf103/gd32vf103_exti.c \
../system/src/gd32vf103/gd32vf103_fmc.c \
../system/src/gd32vf103/gd32vf103_fwdgt.c \
../system/src/gd32vf103/gd32vf103_gpio.c \
../system/src/gd32vf103/gd32vf103_i2c.c \
../system/src/gd32vf103/gd32vf103_pmu.c \
../system/src/gd32vf103/gd32vf103_rcu.c \
../system/src/gd32vf103/gd32vf103_rtc.c \
../system/src/gd32vf103/gd32vf103_spi.c \
../system/src/gd32vf103/gd32vf103_timer.c \
../system/src/gd32vf103/gd32vf103_usart.c \
../system/src/gd32vf103/gd32vf103_wwdgt.c 

OBJS += \
./system/src/gd32vf103/gd32vf103_adc.o \
./system/src/gd32vf103/gd32vf103_bkp.o \
./system/src/gd32vf103/gd32vf103_can.o \
./system/src/gd32vf103/gd32vf103_crc.o \
./system/src/gd32vf103/gd32vf103_dac.o \
./system/src/gd32vf103/gd32vf103_dbg.o \
./system/src/gd32vf103/gd32vf103_dma.o \
./system/src/gd32vf103/gd32vf103_eclic.o \
./system/src/gd32vf103/gd32vf103_exmc.o \
./system/src/gd32vf103/gd32vf103_exti.o \
./system/src/gd32vf103/gd32vf103_fmc.o \
./system/src/gd32vf103/gd32vf103_fwdgt.o \
./system/src/gd32vf103/gd32vf103_gpio.o \
./system/src/gd32vf103/gd32vf103_i2c.o \
./system/src/gd32vf103/gd32vf103_pmu.o \
./system/src/gd32vf103/gd32vf103_rcu.o \
./system/src/gd32vf103/gd32vf103_rtc.o \
./system/src/gd32vf103/gd32vf103_spi.o \
./system/src/gd32vf103/gd32vf103_timer.o \
./system/src/gd32vf103/gd32vf103_usart.o \
./system/src/gd32vf103/gd32vf103_wwdgt.o 

C_DEPS += \
./system/src/gd32vf103/gd32vf103_adc.d \
./system/src/gd32vf103/gd32vf103_bkp.d \
./system/src/gd32vf103/gd32vf103_can.d \
./system/src/gd32vf103/gd32vf103_crc.d \
./system/src/gd32vf103/gd32vf103_dac.d \
./system/src/gd32vf103/gd32vf103_dbg.d \
./system/src/gd32vf103/gd32vf103_dma.d \
./system/src/gd32vf103/gd32vf103_eclic.d \
./system/src/gd32vf103/gd32vf103_exmc.d \
./system/src/gd32vf103/gd32vf103_exti.d \
./system/src/gd32vf103/gd32vf103_fmc.d \
./system/src/gd32vf103/gd32vf103_fwdgt.d \
./system/src/gd32vf103/gd32vf103_gpio.d \
./system/src/gd32vf103/gd32vf103_i2c.d \
./system/src/gd32vf103/gd32vf103_pmu.d \
./system/src/gd32vf103/gd32vf103_rcu.d \
./system/src/gd32vf103/gd32vf103_rtc.d \
./system/src/gd32vf103/gd32vf103_spi.d \
./system/src/gd32vf103/gd32vf103_timer.d \
./system/src/gd32vf103/gd32vf103_usart.d \
./system/src/gd32vf103/gd32vf103_wwdgt.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32vf103/%.o: ../system/src/gd32vf103/%.c system/src/gd32vf103/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -DUSE_STDPERIPH_DRIVER -DGD32VF103V_EVAL -I"D:\eclipse-workspace\gd32vf103_template\inc" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\gd32vf103" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\riscv" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\stubs" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


