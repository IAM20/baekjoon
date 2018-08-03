#include <stdio.h>

// https://www.acmipc.net/problem/2739

int main(void)
{
	int i, n;
	scanf("%d", &n);

	for(i = 1; i<10; i++)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}return 0;
}
