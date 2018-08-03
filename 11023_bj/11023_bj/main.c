#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int result = 0;
	int tmp;
	while (scanf("%d", &tmp) != EOF)
		result += tmp;
	printf("%d\n", result);
	return 0;
}