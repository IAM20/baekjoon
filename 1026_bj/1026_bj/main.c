#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)


int compare(void * first, void * second)
{
	if (*(int *)first < *(int*)second)
		return -1;
	else if (*(int*)first > *(int*)second)
		return 1;
	else
		return 0;
}

int main(int argc, char * argv[])
{
	int n, *a, *b, i, result = 0;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int)*n);
	b = (int *)malloc(sizeof(int)*n);

	if (a == NULL || b == NULL)
	{
		printf("Heap is full\n");
		return 1;
	}

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &b[i]);

	qsort(a, n, sizeof(int), &compare);
	qsort(b, n, sizeof(int), &compare);
	for (i = 0; i < n; i++)
	{
		result += a[i] * b[n - i - 1];
	}
	free(a);
	free(b);
	printf("%d\n", result);
	return 0;
}