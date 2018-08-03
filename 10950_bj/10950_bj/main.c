#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int iter, *result, a, b, i;
	
	scanf("%d", &iter);
	result = (int *)malloc(sizeof(int)*iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d %d", &a, &b);
		result[i] = a + b;
	}
	for (i = 0; i < iter; i++)
		printf("%d\n", result[i]);
	free(result);
	return 0;
}