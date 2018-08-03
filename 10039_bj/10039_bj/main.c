#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int i, result = 0, tmp;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &tmp);
		if (tmp < 40)
			tmp = 40;
		result += tmp;
	}result /= 5;

	printf("%d\n", result);
	return 0;
}