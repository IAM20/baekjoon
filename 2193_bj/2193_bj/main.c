#include <stdio.h>

#pragma warning(disable : 4996)

long double func(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%.0Lf\n", func(n));
	return 0;
}

long double func(int n)
{
	long double first = 1.0, second = 1.0;
	if (n <= 0)
		return 0.0;
	if (n == 1)
		return 1.0;
	else if (n == 2)
		return 1.0;
	else
	{
		int i;
		long double result = 0;
		for (i = 0; i < n-2; i++)
		{
			result = first + second;
			first = second;
			second = result;
		}
		return result;
	}

}
