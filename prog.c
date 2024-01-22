#include <stdio.h>
#include <func.h>


void print_hello(void) {
	printf("hello\n");
}

void print_goodbye(void) {
	printf("goodbye\n");
}

int main() {
	printf("hello, world!\n");
	print_hello();
	int a = 2;
	int b = 4;
	int s = sum(a,pow(a, b));
	printf("%d\n", s);
	print_goodbye();
	return 0;
}
