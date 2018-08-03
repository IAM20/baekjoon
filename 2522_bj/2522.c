#include <stdio.h>
#include <stdlib.h>

//
// https://www.acmicpc.net/problem/2522
// Print stars.
// HYU CSE LEE.
// 

int main(int argc, char * argv[])
{	int n, i, j;
	scanf("%d", &n);
	for(i = 1; i < n; i++)
	{
		for(j = n - 1; j >= i; j--)
		{	printf(" ");
		}for(j = 0; j < i; j++)
		{	printf("*");
		}printf("\n");
	}
	for(i = 0; i < n; i++)
		printf("*");
	printf("\n");
	for(i = 1; i < n; i++)
	{
		for(j = 0; j < i; j++)
			printf(" ");
		for(j = n - 1; j >= i; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
