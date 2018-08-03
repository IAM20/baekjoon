#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int
main(void) 
{
	int n, result;
	scanf("%d", &n);
	int * arr = (int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	result = 0;
	for (int i = 0; i < n; i++) {
		result += arr[i];
	}
	printf("%d\n", result - n + 1);
	free(arr);

	return 0;
}