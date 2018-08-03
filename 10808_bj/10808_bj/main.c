#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//97 ~ 122
int
main(int argc, char * argv[])
{
	char str[128];
	int arr[26] = { 0 }, len, i;
	scanf("%s", str);

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		arr[str[i] - 97]++;
	}

	for (i = 0; i < 25; i++)
	{
		printf("%d ", arr[i]);
	}printf("%d\n", arr[i]);
	
	return 0;
}