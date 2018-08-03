#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * https://www.acmicpc.net/problem/1152
 * Print the count of words
 * 2013008264 LEE HYU
 */

int main(void)
{
	char buf[1000001];
	int count = 0;
	fgets(buf, 1000001, stdin);
	
	buf[strlen(buf)-1] = '\0';

	if(strtok(buf, " ") != NULL)
	{
		count++;
	}
	while(strtok(NULL, " ") != NULL)
		count++;
	printf("%d\n", count);
	return 0;

}
