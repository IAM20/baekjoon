#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int compare(void * first, void * second)
{
	if (*(int*)first > *(int*)second)
	{
		return 1;
	}
	else if (*(int*)first, *(int*)second)
		return -1;
	else return 0;
}

int main(void)
{
	int arr[10];
	int arr_size = sizeof(arr) / sizeof(int);
	int j, i, iter;
	scanf("%d", &iter);
	for (j = 0; j < iter; j++) {
		for (i = 0; i < 10; i++)
			scanf("%d", &arr[i]);
		qsort(arr, arr_size, sizeof(int), compare);

		printf("%d\n", arr[7]);
	}
	return 0;
}