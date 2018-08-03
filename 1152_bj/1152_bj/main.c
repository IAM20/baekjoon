#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main(void)
{
	//tqtqerttqtqtqtq
	char buf[1000001];
	fgets(buf, 1000001, stdin);
	
	int i, result = 0;
	if (buf[0] == ' ' || buf[0] == '\0' 
		||buf[0] == '\n')
		result--;
	if (!(strcmp(buf, " \n")))
	{
		printf("0\n");
		return 0;
	}
	for (i = 0; i < (int)strlen(buf); i++)
	{
		if ((buf[i] == ' ' || buf[i] == '\n'))
			result++;
	}
	printf("%d\n", result);
}