#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	unsigned long long a, b, c;
	scanf("%llu %llu %llu", &a, &b, &c);
	printf("%llu\n", a + b + c);
	return 0;
}