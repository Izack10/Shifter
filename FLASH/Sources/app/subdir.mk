################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/app/RGB_LEDs.c" \
"../Sources/app/Shifter.c" \

C_SRCS += \
../Sources/app/RGB_LEDs.c \
../Sources/app/Shifter.c \

OBJS += \
./Sources/app/RGB_LEDs.o \
./Sources/app/Shifter.o \

C_DEPS += \
./Sources/app/RGB_LEDs.d \
./Sources/app/Shifter.d \

OBJS_QUOTED += \
"./Sources/app/RGB_LEDs.o" \
"./Sources/app/Shifter.o" \

C_DEPS_QUOTED += \
"./Sources/app/RGB_LEDs.d" \
"./Sources/app/Shifter.d" \

OBJS_OS_FORMAT += \
./Sources/app/RGB_LEDs.o \
./Sources/app/Shifter.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/app/RGB_LEDs.o: ../Sources/app/RGB_LEDs.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/RGB_LEDs.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/RGB_LEDs.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/Shifter.o: ../Sources/app/Shifter.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/Shifter.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/Shifter.o"
	@echo 'Finished building: $<'
	@echo ' '


