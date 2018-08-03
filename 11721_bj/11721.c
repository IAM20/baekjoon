#include <stdio.h>
#include <stdlib.h>

/*
 * https://www.acmicpc.net/problem/11721
 * Print out 10 characters
 * HYU 2013008264 LEE
 */

int main(void)
{
	char str[100];
	scanf("%s", str);

	int i, j, iter;
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		if((i++)%10 == 9)
			printf("\n");
	}
	if(i != 100)
		printf("\n");
	return 0;
}
