#include <stdio.h>
#include "func.h"

void my_print(void);

int main() {
	printf("hello, world!\n");
	my_print();
	int a = 2;
	int b = 4;
	int s = sum(a,poww(a, b));
	printf("%d\n", s);
	printf("end2\n");
	return 0;
}
