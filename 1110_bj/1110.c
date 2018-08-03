#include <stdio.h>
#include <stdlib.h>

/*
 * https://www.acmicpc.net/problem/1110
 * Use if to cycle of +
 * HYU 2013008264 LEE
 */

int main(void)
{
	int origin, a, b, result = 0, temp = -1, tmp;
	scanf("%d", &origin);
	if(origin < 10)
	{
		a = origin;
		b = 0;
		origin *= 10;
	}else
	{
		a = origin / 10;
		b = origin % 10;
	}
	while(temp != origin)
	{
		tmp = (a+b)%10;
		a = b;
		b = tmp;
		temp = a * 10 + b;
		result++;
	}
	printf("%d\n", result);
	return 0;

}
