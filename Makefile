src_main 	= Source_files/main.c
src_mult 	= Source_files/mult.c
src_div		= Source_files/div.c

obj_mult	= Object_files/mult.o
obj_div		= Object_files/div.o

so_mult		= Dynamic_libraries/mult.so
so_div		= Dynamic_libraries/div.so

exe_main	= Executable_files/main

shell_dirs	= Shell_files/directories.sh
shell_test	= Shell_files/test.sh

# all: directories clean main mult.o div.o mult.so div.so rm_obj msg test
all: directories rm_obj msg test

directories:
	@./$(shell_dirs)

rm_obj:
	rm -rf Object_files

clean:
	rm -rf Executable_files/* Dynamic_libraries/*

msg:
	@echo "**************************************************************************************";

test:
	@./$(shell_test)