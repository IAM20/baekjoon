#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	char str[128];
	scanf("%s", str);

	int len = strlen(str);
	int result = 10;
	for (int i = 1; i < len; i++) {
		if (str[i] == str[i - 1])
			result += 5;
		else
			result += 10;
	}

	printf("%d\n", result);
}