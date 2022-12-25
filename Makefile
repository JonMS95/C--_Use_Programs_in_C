src_C		= Source_files/C/*

obj_All		= Object_files/*

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