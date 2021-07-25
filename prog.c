#include <stdio.h>
#include <func.h>


int main() {
	printf("hello, world!\n");
	int a = 2;
	int b = 4;
	int s = sum(a,pow(a, b));
	printf("%d\n", s);
	return 0;
}
