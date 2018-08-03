#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, i, iter, j, tmp;
	scanf("%d", &iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d %d", &a, &b);
		tmp = a;
		for (j = 0; j < b - 1; j++)
		{
			a = a * tmp;
			a %= 10;
		}
		a %= 10;
		printf("%d\n", a);
	}
	return 0;
}