################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/controllers/aliens.c \
../src/controllers/tank.c 

OBJS += \
./src/controllers/aliens.o \
./src/controllers/tank.o 

C_DEPS += \
./src/controllers/aliens.d \
./src/controllers/tank.d 


# Each subdirectory must supply rules for building sources it contributes
src/controllers/%.o: ../src/controllers/%.c
	@echo Building file: $<
	@echo Invoking: MicroBlaze gcc compiler
	mb-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../lab_3_bsp_0/microblaze_0/include -mlittle-endian -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.20.b -mno-xl-soft-mul -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '


