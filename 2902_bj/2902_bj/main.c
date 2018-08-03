#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int
getfirst(char * str)
{
	char tmp[100][100], * ttmp, * result;
	int len = strlen(str), i = 0, j;
	

	strcpy(tmp[i++], strtok(str, "-"));
	while (ttmp = strtok(NULL, "-"))
		strcpy(tmp[i++], ttmp);

	result = (char *)malloc(sizeof(char)* i+1);
	for (j = 0; j < i; j++) {
		result[j] = tmp[j][0];
	}result[j] = '\0';

	printf("%s\n", result);
	free(result);
	
	return 0;
}

int
main(int argc, char * argv[])
{
	char str[128];
	scanf("%s", str);

	getfirst(str);
	return 0;
}