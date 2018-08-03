#include <stdio.h>
#pragma warning(disable : 4996)

int func(int n);

int main(int argc, char * argv[])
{
	int result;
	scanf("%d", &result);
	result = func(result);

	printf("%d\n", result);
	return 0;
}

int func(int n)
{
	int a, a_1 = 3, a_2 = 1, i;
	if (n == 1)
		return a_2;
	else if (n == 2)
		return a_1;
	for (i = 3; i <= n; i++)
	{
		a = 2 * a_2 + a_1;
		a %= 10007;
		a_2 = a_1;
		a_1 = a;
	}

	return a;
}
