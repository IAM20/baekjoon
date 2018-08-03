#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int _max(int a, int b)
{
	return (a < b) ? b : a;
}

int main(int argc, char * argv[])
{
	int n, *p, *r, i = 1, j, tmp;
	scanf("%d", &n);
	p = (int *)malloc(sizeof(int)*(n + 1));
	r = (int *)malloc(sizeof(int)*(n + 1));
	if (p == NULL || r == NULL)
	{
		printf("Failed to memory allocation\n");
		return 1;
	}p[0] = r[0] = -1;
	for (; i <= n; i++)
		scanf("%d", &p[i]);
	r[1] = p[1];
	for (i = 2; i <= n; i++)
	{
		r[i] = 0;
		for (j = 1; j < i; j++)
		{
			
			tmp = _max(r[i - j] + r[j], p[i]);
			if (r[i] < tmp)
				r[i] = tmp;
		}
	}printf("%d\n", r[n]);
	return 0;
}