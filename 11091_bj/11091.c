#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * https://www.acmicpc.net/problem/11091
 * Judge whether pangram or not.
 * HYU CSE LEE
 */

#define TRUE 1
#define FALSE 0
#define BUF_SIZE 128

int pengram(char *);

int main(int argc, char * argv[])
{
	char pengram[26] = { FALSE };
	int n, iter, len, i, result;
	char str[BUF_SIZE];
	fgets(str, BUF_SIZE, stdin);
	n = atoi(str);
	for(iter = 0; iter < n; iter++)
	{
		fgets(str, BUF_SIZE, stdin);
		len = strlen(str);
		for(i = 0; i < len; i++)
		{
			if(str[i] > 96 && str[i] < 123)
			{
				pengram[str[i] - 97] = TRUE;
			}else if(str[i] > 64 && str[i] < 91)
			{
				pengram[str[i] - 65] = TRUE;
			}
		}result = 0;
		for( i = 0; i < 26; i++)
		{
			result += pengram[i];
		}if(result == 26)
		{
			printf("pangram\n");
		}else
		{
			printf("missing ");
			for(i = 0; i < 26; i++)
			{
				if(!pengram[i]){
					printf("%c", i + 97);
				}
			}printf("\n");
		}
		for(i = 0; i < 26; i++)
		{
			pengram[i] = 0;
		}
	}
}

int toLower(char * str)
{//A 65 and a 97
// Z 90 and z 122
	int len = strlen(str);
	int i, retval;
	for(i = 0; i < len; i++)
	{
		if(str[i] > 96 && str[i] < 123)
			str[i] -= 32;

	}
	return FALSE;
}
