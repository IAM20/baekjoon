#include <stdio.h>
#pragma warning(disable : 4996)

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main(int argc, char * argv[])
{
	int a, b, i, tmp_a, result = 1;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= min(a, b); i++)
		if (!(a % i) && !(b % i))
			result = i;
	printf("%d\n", result);

	tmp_a = a * b;
	printf("%d\n", tmp_a / result);
	return 0;
}