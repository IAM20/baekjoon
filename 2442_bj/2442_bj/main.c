#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main(void)
{
	int line, number, i, j, k;
	scanf("%d", &line);
	number = (2 * line) - 1;

	for (i = 1; i <= line; i++)
	{
		j = line - i;
		for (j; j > 0; j--)
		{
			printf(" ");
		}for (k = 0; k < (2 * i - 1); k++)
		{
			printf("*");
		}printf("\n");
	}

	return 0;
}