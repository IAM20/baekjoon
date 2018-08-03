#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i;
	unsigned long long n, m;
	unsigned long long parent = 1, child = 1;
	scanf("%llu %llu", &n, &m);
	if (m > n - m)
	{
		for (i = 0; i < n - m; i++)
		{
			child *= n--;
		}for (i = 0; i < n - m; i++)
		{
			parent *= (i + 1);
		}
	}else
	{
		for (i = 0; i < m; i++)
		{
			child *= n--;
		}for (i = 0; i < m; i++)
		{
			parent *= (i + 1);
		}
	}
	unsigned long long result = child / parent;
	printf("%llu\n", result);
}