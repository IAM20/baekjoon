#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[9], i, max = 0, pos = 0;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
			pos = i;
		}
	}
	printf("%d\n%d\n", max, pos+1);
	return 0;
}