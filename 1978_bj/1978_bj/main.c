#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int arr[1001] = { 0 };
	int i, tmp;
	arr[0] = arr[1] = 1;
	for (i = 2; i <= 1000; i++)
	{
		if (!arr[i])
		{
			tmp = i;
			i += tmp;
			for (i; i <= 1000; i += tmp)
				arr[i] = 1;
			i = tmp;
		}
		else
			continue;
	}
	int n, result = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		if (!arr[tmp])
			result++;
	}
	printf("%d\n", result);
}