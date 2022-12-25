src_C_fib	= Source_files/C/fibonacciNumber.c
src_C_swap	= Source_files/C/swapIntegers.c
src_CPP_main= Source_files/C++/main.cpp

obj_C_fib	= Object_files/C_obj_fib.o
obj_C_swap	= Object_files/C_obj_swap.o
obj_CPP_main= Object_files/CPP_obj.o

exe_main	= Executable_files/main

shell_dirs	= Shell_files/directories.sh
shell_test	= Shell_files/test.sh

all: directories clean C_obj CPP_obj exec rm_obj msg test

directories:
	@./$(shell_dirs)

C_obj_fib:
	gcc -c $(src_C_fib) -o $(obj_C_fib)

C_obj_swap:
	gcc -c $(src_C_swap) -o $(obj_C_swap)

CPP_obj:
	g++ -c $(src_CPP_main) -o $(obj_CPP_main)

exec:
	g++ $(obj_C_fib) $(obj_C_swap) $(obj_CPP) -o $(exe_main)

rm_obj:
	rm -rf Object_files

clean:
	rm -rf Executable_files/*

test:
	@./$(shell_test)