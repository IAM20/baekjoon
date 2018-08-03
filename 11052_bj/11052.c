#include <stdio.h>
#include <stdlib.h>

int cal(int *, int);

int main(int argc, char * argv[])
{
	int n, *p, i = 1, tmp, remain, result = 0;
	scanf("%d", &n);
	p = (int *)malloc(sizeof(int)*(n+1));
	if(p == NULL)
	{
		fprintf(stderr, "Failed to memory allocation\n");
		return 1;
	}p[0] = -1;
	
	for(; i <= n; i++)
	{
		scanf("%d", &p[i]);
	}
	int pos = cal(p, n);
	tmp = n / pos;
	result += tmp * p[pos];
	remain = n % pos;
	while(remain != 0)
	{
		pos = cal(p, remain);
		tmp = remain / pos;
		result += tmp * p[pos];
		remain %= pos;
	}
	printf("%d\n", result);
	return 0;
}

// n   = remain.
// arr = price of set.
// all = number of all
int cal(int * arr, int n)
{
	int i, pos = 1;
	double m = 0.0;
	for(i = 1; i <= n; i++)
	{
		if(m < (double)arr[i] / (double)i)
		{	m = (double)arr[i] / (double)i;
			pos = i;
		}
	}
	return pos;
}
