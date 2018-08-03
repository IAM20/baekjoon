#include <stdio.h>
#pragma warning(disable : 4996)

int
_fibo(int n)
{
	int retval = 0, a = 0, b = 1;
	for (int i = 0; i < n; i++) {
		retval = a + b;
		retval %= 10007;
		a = b;
		b = retval;
	}

	return retval;
}

int
main(int argc, char * argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", _fibo(n));
}