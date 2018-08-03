#include <stdio.h>
#pragma warning(disable : 4996)


int main(int argc, char * argv[])
{
	int n, i, a, b, j, result = 1, min;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		min = (a < b) ? a : b;
		for (j = 1; j <= min; j++)
		{
			if (!(a % j) && !(b % j))
				result = j;
		}
		printf("%d\n", (a * b) / result);
	}
	return 0;
}