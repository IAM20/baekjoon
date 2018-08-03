#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * https://www.acmicpc.net/problem/2448
 * Print stars
 * 2013008264 HYU LEE
 */

char * change_first(char * string, int len);
char * change_second(char * string, int len);
char * change_third(char * string, int len);
int print_stars(int line);

int main(void)
{
	int line;
	scanf("%d", &line);
	print_stars(line);
	return 0;

}

char * change_first(char * string, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(string[i] == '*'){
			string[i-1] = '*';
			string[i+1] = '*';
			string[i++] = ' ';
		}
	}
	return string;
}

char * change_second(char * string, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(string[i] == ' ' && string[i+1] == '*')
		{
			string[i++] = '*';
			string[i++] = '*';
			string[i++] = '*';
			string[i++] = '*';
			string[i] = '*';
		}
	}
	return string;
}

char * change_third(char * string, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if((string[i] == ' ') && (string[i+1] == ' ') && (string[i+2] == '*'))
		{
			string[++i] = '*';
			string[++i] = ' ';
		}
		else if((string[i] == '*') && (string[i+1] == ' ') && (string[i+2] == ' '))
		{
			string[i++] = ' ';
			string[i++] = '*';
		}
		else if(string[i] == '*')
		{
			string[i] = ' ';
		}
	}
	return string;
}

int print_stars(int line)
{
	if(line < 3 || line % 3 || line % 2)
		return -1;
	int number = (2*line - 1), i;
	char string[number];
	for(i = 0; i < number; i++)
	{
		string[i] = ' ';
	}
	string[number/2] = '*';

	//initial print

	printf("%s\n", string);
	change_first(string, number);
	printf("%s\n", string);
	change_second(string, number);
	printf("%s\n", string);

	while(string[0] != '*')
	{
		change_third(string, number);
		printf("%s\n", string);
		change_first(string, number);
		printf("%s\n", string);
		change_second(string, number);
		printf("%s\n", string);
	}
	return 0;

}
