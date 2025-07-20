################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/riscv/system_gd32vf103.c 

OBJS += \
./system/src/riscv/system_gd32vf103.o 

C_DEPS += \
./system/src/riscv/system_gd32vf103.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/riscv/%.o: ../system/src/riscv/%.c system/src/riscv/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -DUSE_STDPERIPH_DRIVER -DGD32VF103V_EVAL -I"D:\eclipse-workspace\gd32vf103_template\inc" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\gd32vf103" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\riscv" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\stubs" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


