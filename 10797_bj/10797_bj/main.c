#include <stdio.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	int arr[5] = { 0 };
	int day, result = 0;
	scanf("%d", &day);

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
		if (day == arr[i]) result++;

	printf("%d\n", result);
	return 0;
}