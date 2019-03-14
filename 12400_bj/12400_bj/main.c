#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

char convert(char, int);

int main(int argc, char * argv[])
{
	int n, i, j, len;
	char arr[30][101];
	scanf("%d", &n);
	while (fgetc(stdin) != '\n');
	for (i = 0; i < n; i++)
	{
		fgets(arr[i], 101, stdin);
		len = strlen(arr[i]);
		arr[i][len - 1] = '\0';
		for (j = 0; j < len; j++)
		{
			arr[i][j] = convert(arr[i][j], 5);
		}
	while (fgetc(stdin) != '\n');
	}
	for (i = 0; i < n; i++)
	{
		printf("Case #%d: %s\n", i + 1, arr[i]);
	}
	return 0;
}

char convert(char a, int len)
{
	switch (a)
	{
	case 'a': return 'y';
	case 'b': return 'h';
	case 'c': return 'e';
	case 'd': return 's';
	case 'e': return 'o';
	case 'f': return 'c';
	case 'g': return 'v';
	case 'h': return 'x';
	case 'i': return 'd';
	case 'j': return 'u';
	case 'k': return 'i';
	case 'l': return 'g';
	case 'm': return 'l';
	case 'n': return 'b';
	case 'o': return 'k';
	case 'p': return 'r';
	case 'q': return 'z';
	case 'r': return 't';
	case 's': return 'n';
	case 't': return 'w';
	case 'u': return 'j';
	case 'v': return 'p';
	case 'w': return 'f';
	case 'x': return 'm';
	case 'y': return 'a';
	case 'z': return 'q';
	default :
		return a;
	}

	//return (a % (10^((len - 1)*10)) + a/(10^(len -1)));
}