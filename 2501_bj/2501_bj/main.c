#include <stdio.h>
#pragma warning(disable :4996)

int main(int argc, char * argv[])
{
	int n, i, count = 0, k;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		if (!(n % i))
			++count;
		if (count == k)
		{
			printf("%d\n", i);
			return 0;
		}
	}
}