#include <stdio.h>

/*
 * https://www.acmicpc.net/problem/4673
 * Print self number.
 * HYU 2013008264 LEE
 */

int number[10001];
int func(int number);

int main(void)
{
	int i, result;
	for(i = 1; i <= 10000; i++)
	{
		if(number[i] == 0)
		{
			printf("%d\n", i);
			result = func(i);
			while(result <= 10000)
			{
				number[result] = 1;
				result = func(result);
			}
		}
	}
	return 0;
}

int func(int number)
{
	int a, b, c, d;
	a = number / 1000;
	b = (number % 1000) / 100;
	c = (number % 100) / 10;
	d = (number % 10);

	return number+a+b+c+d;
}
