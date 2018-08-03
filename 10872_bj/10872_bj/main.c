#include <stdio.h>
#pragma warning(disable : 4996)

int 
_strlen(char * str)
{
	int retval = 0, i = 0;
	while (str[i++])
		retval++;
	return retval;
}

int
main(int argc, char * argv)
{
	char str[128];
	scanf("%s", str);
	printf("%d\n", _strlen(str));
}