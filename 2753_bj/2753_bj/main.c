#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int year;
	scanf("%d", &year);
	if (!(year % 4) && ((year % 100) || !(year % 400)))
		printf("1\n");
	else
		printf("0\n");
	return 0;
}