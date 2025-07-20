################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gd32vf103v_eval.c \
../src/main.c \
../src/systick.c 

OBJS += \
./src/gd32vf103v_eval.o \
./src/main.o \
./src/systick.o 

C_DEPS += \
./src/gd32vf103v_eval.d \
./src/main.d \
./src/systick.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -DUSE_STDPERIPH_DRIVER -DGD32VF103V_EVAL -I"D:\eclipse-workspace\gd32vf103_template\inc" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\gd32vf103" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\riscv" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\stubs" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


