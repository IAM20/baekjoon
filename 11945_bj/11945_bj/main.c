#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main(void)
{
	int x, y, i, j;
	char ** strs;
	scanf("%d %d", &y, &x);

	strs = (char **)malloc(sizeof(char *)*y);
	
	for (i = 0; i < y; i++)
	{
		strs[i] = (char *)malloc(sizeof(char)*x);
		scanf("%s", strs[i]);
	}
	int len;
	for (i = 0; i < y; i++)
	{
		len = strlen(strs[i]);
		for (j = len - 1; j >= 0; j--)
		{
			printf("%c", strs[i][j]);
		}printf("\n");
	}
	return 0;
}