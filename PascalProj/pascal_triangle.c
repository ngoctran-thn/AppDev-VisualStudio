#include"pascal.h"

void parscal_triangle(int v) {
	int i, j;
	for (i = 0; i < v; i++) {
		// some spaces to make an equal-lateral triangle
		for (j = 0; j < (v - i) * 3; j++) print("");
		for (j = 0; j <= i; j++) {
			printf("%4d", comb(i, j));
		}
		printf("\n");
	}
}
int comb(int n, int m) {
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}
long long fact(int n) {
	if (n == 0) return 1;
	long long p = 1;
	for (int i = 2; i <= n; i++) {
		p = p * i;
	}
	return p;
}