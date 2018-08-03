#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define BUF_SIZE 32

int compare(void * first, void * second);

int main(void)
{
	char buf[BUF_SIZE];
	scanf("%s", buf);
	int arr[10] = { 0 };
	int len = strlen(buf), i;
	for (i = 0; i < len; i++)
	{
		switch (buf[i]) {
		case '6':
			if (arr[6] > arr[9])
				arr[9]++;
			else
				arr[6]++;
			break;
		case '9':
			if (arr[9] > arr[6])
				arr[6]++;
			else
				arr[9]++;
			break;
		default:
			arr[buf[i] - 48]++;
			break;
		}
	}qsort(arr, 10, sizeof(int), &compare);
	printf("%d\n", arr[0]);
}

int compare(void * first, void * second)
{
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}