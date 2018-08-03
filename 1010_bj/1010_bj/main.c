#include <stdio.h>
#pragma warning(disable : 4996)

unsigned long long combination(n, m); // nCm

int main(int argc, char * argv[])
{
	int iter, n, m, i = 0;
	scanf("%d", &iter);
	for (; i < iter; i++) {
		scanf("%d %d", &n, &m);
		printf("%llu\n", combination(m, n));
	}
	return 0;
}

unsigned long long combination(n, m)
{
	if (n - m < m)
		return combination(n, n - m);
	else
	{
		int i = 0; unsigned long long result = 1;
		if (n == 30) {
			result = (combination(n - 1, m - 1));
			result *= 30;
			result /= m;
			return result;
		}
		for (; i < m; i++)
			result *= n--;
		for (i = 1; i <= m; i++)
			result /= i;
		return result;
	}
}