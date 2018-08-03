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

int m_gap(int * arr, int n)
{
	int i = 0, result = 0, tmp;
	for (; i < n - 1; i++)
	{
		tmp = arr[i + 1] - arr[i];
		if (tmp < 0)
			tmp *= -1;
		if (tmp > result)
			result = tmp;
	}return result;
}

int main(int argc, char * argv[])
{
	int k, n, iter, i, ** arr, ** result;
	scanf("%d", &k);
	arr = (int **)malloc(sizeof(int *)*k);
	result = (int **)malloc(sizeof(int *)*k);
	for (iter = 0; iter < k; iter++)
	{
		result[iter] = (int *)malloc(sizeof(int) * 3);
		
		scanf("%d", &n);
		arr[iter] = (int *)malloc(sizeof(int)*n);
		for (i = 0; i < n; i++)
			scanf("%d", &arr[iter][i]);
		qsort(arr[iter], n, sizeof(int), &compare);
		result[iter][0] = arr[iter][0];
		result[iter][1] = arr[iter][n - 1];
		result[iter][2] = m_gap(arr[iter], n);
	}
	for (i = 0; i < k; i++)
	{
		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", result[i][1], result[i][0], result[i][2]);
	}
	return 0;
}