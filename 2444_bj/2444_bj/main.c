#include <stdio.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	for (i = 0; i < 2 * n - 1; i++)
		printf("*");
	printf("\n");

	for (i = n - 1; i > 0; i--)
	{
		for (j = n - 1; j > i - 1; j--)
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}