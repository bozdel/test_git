all: prog.o func.o
	gcc prog.o func.o -o sum_hello
prog.o: prog.c
	gcc -c prog.c
func.o: func.c
	gcc -c fun.c
clean:
	rm *.o
