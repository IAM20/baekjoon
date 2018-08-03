#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int compare(void * first, void * second);
int main(void)
{
	int * arr, iter, i;
	scanf("%d", &iter);

	arr = (int *)malloc(sizeof(int)*iter);
	for (i = 0; i < iter; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, iter, sizeof(int), &compare);
	for (i = 0; i < iter; i++)
		printf("%d\n", arr[i]);
	return 0;
}
int compare(void * first, void * second)
{
	if (*(int*)first < *(int*)second)
		return -1;
	else if (*(int *)first > *(int *)second)
		return 1;
	else
		return 0;
}