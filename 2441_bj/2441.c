#include <stdio.h>

//
// https://www.acmicpc.net/problem/2441
// using for loop
// 2013008264 LEE 2018.03.15
//

int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
	    for(j=0; j<i; j++)
		printf(" ");
	    for(j=n-i; j>0; j--)
		printf("*");
	    printf("\n");
	}
	
	return 0;
}
