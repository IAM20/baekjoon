#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int right_arr[6] = { 1, 1, 2, 2, 2, 8 };
	int ur_arr[6];
	int i, tmp;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &tmp);
		ur_arr[i] = right_arr[i] - tmp;
	}printf("%d", ur_arr[0]);
	for (i = 1; i < 6; i++)
	{
		printf(" %d", ur_arr[i]);
	}printf("\n");
	return 0;
	
}