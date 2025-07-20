################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/env_Eclipse/handlers.c \
../system/src/env_Eclipse/init.c \
../system/src/env_Eclipse/your_printf.c 

S_UPPER_SRCS += \
../system/src/env_Eclipse/entry.S \
../system/src/env_Eclipse/start.S 

OBJS += \
./system/src/env_Eclipse/entry.o \
./system/src/env_Eclipse/handlers.o \
./system/src/env_Eclipse/init.o \
./system/src/env_Eclipse/start.o \
./system/src/env_Eclipse/your_printf.o 

S_UPPER_DEPS += \
./system/src/env_Eclipse/entry.d \
./system/src/env_Eclipse/start.d 

C_DEPS += \
./system/src/env_Eclipse/handlers.d \
./system/src/env_Eclipse/init.d \
./system/src/env_Eclipse/your_printf.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/env_Eclipse/%.o: ../system/src/env_Eclipse/%.S system/src/env_Eclipse/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross Assembler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -x assembler-with-cpp -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

system/src/env_Eclipse/%.o: ../system/src/env_Eclipse/%.c system/src/env_Eclipse/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -DUSE_STDPERIPH_DRIVER -DGD32VF103V_EVAL -I"D:\eclipse-workspace\gd32vf103_template\inc" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\gd32vf103" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\riscv" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\stubs" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


