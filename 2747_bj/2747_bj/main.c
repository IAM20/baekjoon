#include <stdio.h>
#pragma warning(disable : 4996)

int 
fibo(int n) 
{
	int a = 0, b = 1;
	int retval = 0;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	for (int i = 2; i <= n; i++){
		retval = a + b;
		a = b;
		b = retval;
	} return retval;
}

int 
main(int argc, char * argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
	return 0;
}