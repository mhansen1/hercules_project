################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
src/sys_setup.obj: ../src/sys_setup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.12.0.STS/bin/armcl" -mv7R5 --code_state=32 --float_support=VFPv3D16 -me --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.12.0.STS/include" --include_path="C:/Users/bob/workspace_v7/test/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --enum_type=packed --abi=eabi --preproc_with_compile --preproc_dependency="src/sys_setup.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


