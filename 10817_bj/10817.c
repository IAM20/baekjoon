#include <stdio.h>

/*
 * https://www.acmicpc.net/problem/10817
 * print secondary.
 * 2013008264 HYU LEE
 */

int main(void)
{
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);
	if(a >= b && b >= c)
		printf("%d\n", b);
	else if(b >= a && a >= c)
		printf("%d\n", a);
	else
		printf("%d\n", c);

	return 0;
}
