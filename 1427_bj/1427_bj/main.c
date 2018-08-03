#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#define BUF_SIZE 16

int compare(void * first, void * second);

int main(void)
{
	char buf[BUF_SIZE];
	scanf("%s", buf);
	int len = strlen(buf);
	qsort(buf, len, sizeof(char), &compare);

	printf("%s", buf);
}

int compare(void * first, void * second)
{
	if (*(char*)first > *(char*)second)
		return -1;
	else if (*(char*)first < *(char*)second)
		return 1;
	else
		return 0;
}