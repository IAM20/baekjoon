#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	unsigned long long a;
	int result = 1;
	scanf("%llu", &a);
	while (a)
	{
		if (a == 1)
			break;
		if (a % 2) {
			result = 0;
			break;
		}
		else a /= 2;
	}
	printf("%d\n", result);
}