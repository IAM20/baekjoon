#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, last = 0, tmp;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &tmp);
		last += (tmp * tmp);
	}last %= 10;
	printf("%d\n", last);
}N