#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int compare(void * first, void * second)
{
	if (*(int *)first < *(int *)second)
		return -1;
	else if (*(int *)first > *(int *)second)
		return 1;
	else
		return 0;
}

int main(void)
{
	int arr[3];
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	qsort(arr, 3, sizeof(int), &compare);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	return 0;
}