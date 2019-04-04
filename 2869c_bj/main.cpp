#include <stdio.h>

long func(long a, long b, long v) {
	return (v - a) / (a - b) + (((v - a) % (a - b)) ? 1 : 0) + 1;
}

int main() {
	long a, b, v;
	scanf("%ld %ld %ld", &a, &b, &v);
	printf("%ld\n", func(a, b, v));

	return 0;
}