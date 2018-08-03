#include <stdio.h>
#pragma warning(disable : 4996)

int
main(void)
{
	int real_price, tmp = 0, i;
	int arr[9];

	scanf("%d", &real_price);
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		tmp += arr[i];
	}

	int diff = real_price - tmp;

	printf("%d\n", diff);

	return 0;
}