#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr_sci[4], arr_moon[2];
	int result = 0, min = 999, i;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr_sci[i]);
		result += arr_sci[i];
		if (arr_sci[i] < min)
			min = arr_sci[i];
	}result -= min;

	for (i = 0; i < 2; i++)
	{
		scanf("%d", &arr_moon[i]);
	}
	if (arr_moon[0] > arr_moon[1])
		result += arr_moon[0];
	else
		result += arr_moon[1];

	printf("%d\n", result);
	return 0;
}