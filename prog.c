#include <stdio.h>
#include "func.h"

/*
 * some comment
 */

void my_print(void);


int main() {
	printf("hello, world!\n");
	my_print();
	int a = 2;
	int b = 4;
	int s = sum(a,pow(a, b));
	int m = mul(4, 5);
	int total = s / m;
	printf("%d\n", s);
	printf("(%d\n", total);
	return 0;
}
