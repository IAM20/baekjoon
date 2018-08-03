#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int input[4], output[4], i, result[4];
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d", &output[i], &input[i]);
		result[i] = input[i] - output[i];
	}for (i = 1; i < 4; i++)
		result[i] += result[i - 1];
	int max = 0;
	for (i = 0; i < 4; i++)
	{
		if (max < result[i])
			max = result[i];
	}
	printf("%d\n", max);
	return 0;
}