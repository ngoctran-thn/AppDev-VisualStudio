#include"pascal.h"


int get_int(int min, int max) {
	int t;
	do {
		printf("Enter an positive imteger\ between (%d, %d): ", min, max);
		scanf_s("%d", &t);
		int r = t;
		if (r < 1) t = 0;
	} while (t< min || t > max);
	return t;
}