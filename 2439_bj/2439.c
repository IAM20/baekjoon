#include <stdio.h>

//
// https://www.acmicpc.net/problem/2439
// print n*i * Allign right side
// HYU LEE
//

int main(int argc, char * argv[])
{
	if(argc != 1)
		return 0;
	
	int i, j, n;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = n-1; j > i; j--)
			printf(" ");
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}printf("\n");
	}return 0;

}
