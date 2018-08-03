#include <stdio.h>
#pragma warning(disable :4996)

int main(void)
{
	int line, iter, k, i, j=0;
	scanf("%d", &line);
	iter = line * 2;
	for (i = 0; i < line; i++)
	{
		for (k = 0; k < iter; k++) {
			if (k <= j || k >= iter - j - 1)
				printf("*");
			else
				printf(" ");
		}printf("\n");
		j++;
	}
	j -= 2;
	for (i = 1; i < line; i++)
	{
		for (k = 0; k < iter; k++)
		{
			if (k <= j || k >= iter - j - 1)
				printf("*");
			else
				printf(" ");
		}printf("\n");
		j--;
	}
	return 0;
}