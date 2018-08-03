#include <stdio.h>
#pragma warning(disable : 4996)
int isGroup(char * str);

int main(void)
{
	int n, i, result = 0;
	scanf("%d", &n);
	char buf[101];

	for (i = 0; i < n; i++)
	{
		scanf("%s", buf);
		result += isGroup(buf);
	}
	printf("%d\n", result);
	return 0;
}

int isGroup(char * str)
{
	int len = strlen(str);
	int i, arr[128] = { 0 };
	for (i = 0; i < len; i++)
	{
		if (arr[(int)str[i]] != 0 && (str[i - 1] != str[i]))
			return 0;
		arr[(int)str[i]]++;
	}
	return 1;
}