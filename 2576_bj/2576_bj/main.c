#include <stdio.h>
#pragma warning(disable : 4996)
#define MAX_INPUT 128

int main(void)
{
	int i, result = 0, tmp, min = MAX_INPUT;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &tmp);
		if (tmp % 2)
		{
			if(tmp < min)
				min = tmp;
			result += tmp;
		}
	}
	if (result == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", result, min);
	return 0;
}