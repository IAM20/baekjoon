#include <stdio.h>

//
// https://www.acmicpc.net/problem/2438
// print * n times
//

int main(int argc, char * argv[])
{
	if(argc != 1)
		return 0;

	int i, j, n;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}printf("\n");
	}
	return 0;

}
