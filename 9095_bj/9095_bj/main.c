#include <stdio.h>
#pragma warning(disable : 4996)
int func(int n)
{
	if (n <= 0)
		return 0;
	switch (n)
	{
	case 1:
		return 1;
	case 2:
		return 2;
	case 3:
		return 4;
	default:
		return func(n - 1) + func(n - 2) + func(n - 3);
	}
}

int main(void)
{
	int n, iter, i;
	scanf("%d", &iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d", &n);
		printf("%d\n", func(n));
	}
	return 0;
}