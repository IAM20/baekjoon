#include <stdio.h>
#pragma warning(disable : 4996)

int
_fibo(int n)
{
	int retval = 0, a = 0, b = 1;
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else {
		for (int i = 0; i < n; i++) {
			retval = a + b;
			a = b;
			b = retval;
		}

		return retval;
	}
}

int
main(int argc, char * argv)
{
	int n, iter, _zero, _one;
	scanf("%d", &iter);
	for (int i = 0; i < iter; i++) {
		scanf("%d", &n);

		if (n == 0)
			_zero = 1;
		else
			_zero = _fibo(n - 2);
		_one = _fibo(n - 1);

		printf("%d %d\n", _zero, _one);
	}

	return 0;
}