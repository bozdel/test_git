all: prog.o func.o hello.o
	gcc prog.o func.o hello.o -o sum_hello
prog.o: prog.c
	gcc -c prog.c
func.o: func.c
	gcc -c func.c
hello.o: hello.c
	gcc -c hello.c
clean:
	rm *.o
