#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
int compare(void * first, void * second)
{
	if (*(int*)first < *(int*)second)
		return -1;
	else if (*(int*)first > *(int*)second)
		return 1;
	else
		return 0;
}
int main()
{
	int arr[9], i, j, sum = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == i)
				continue;
			if ((sum - arr[i] - arr[j]) == 100)
			{
				arr[i] = arr[j] = 0;
				break;
			}
		}
		if (arr[i] == 0)
			break;
	}
	qsort(arr, 9, sizeof(int), &compare);
	for (i = 2; i < 9; i++)
		printf("%d\n", arr[i]);
	return 0;
}

