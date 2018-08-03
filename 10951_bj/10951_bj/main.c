#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, a, b, iter;
	scanf("%d", &iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}