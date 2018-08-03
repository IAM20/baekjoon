#include <stdio.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	int n, m, result = 1;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		result *= i;

	for (int i = 1; i <= m; i++)
		result /= i;

	for (int i = 1; i <= n - m; i++)
		result /= i;

	printf("%d\n", result);
	return 0;
}