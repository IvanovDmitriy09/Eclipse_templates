################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/stubs/_exit.c \
../system/src/stubs/close.c \
../system/src/stubs/fstat.c \
../system/src/stubs/isatty.c \
../system/src/stubs/lseek.c \
../system/src/stubs/read.c \
../system/src/stubs/sbrk.c \
../system/src/stubs/write.c \
../system/src/stubs/write_hex.c 

OBJS += \
./system/src/stubs/_exit.o \
./system/src/stubs/close.o \
./system/src/stubs/fstat.o \
./system/src/stubs/isatty.o \
./system/src/stubs/lseek.o \
./system/src/stubs/read.o \
./system/src/stubs/sbrk.o \
./system/src/stubs/write.o \
./system/src/stubs/write_hex.o 

C_DEPS += \
./system/src/stubs/_exit.d \
./system/src/stubs/close.d \
./system/src/stubs/fstat.d \
./system/src/stubs/isatty.d \
./system/src/stubs/lseek.d \
./system/src/stubs/read.d \
./system/src/stubs/sbrk.d \
./system/src/stubs/write.d \
./system/src/stubs/write_hex.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/stubs/%.o: ../system/src/stubs/%.c system/src/stubs/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-none-elf-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -g3 -DUSE_STDPERIPH_DRIVER -DGD32VF103V_EVAL -I"D:\eclipse-workspace\gd32vf103_template\inc" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\drivers" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\gd32vf103" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\riscv" -I"D:\eclipse-workspace\gd32vf103_template\system\inc\stubs" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


