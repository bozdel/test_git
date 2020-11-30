int sum(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}

int poww(int a, int p) {
	int res = 1;
	while (p > 0) {
		res *= a;
		p--;
	}
	return res;
}
