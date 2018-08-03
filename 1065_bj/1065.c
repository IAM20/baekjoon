#include <stdio.h>
#include <stdlib.h>

/*
 * https://www.acmicpc.net/problem/1065
 * 한수 출력하기
 * 2013008264 HYU LEE
 */

int ishan(int number);

int main(void)
{
	int number, result = 0, i;
	scanf("%d", &number);
	if(number < 100)
	{
		result = number;
	}
	else
	{
		result = 99;
		for(i = 100; i <= number; i++)
		{
			if(ishan(i))
			{	
				result++;
			}
		}
	}
	printf("%d\n", result);

	return 0;
}

int ishan(int number)
{
	if(number == 1000)
		return 0;
	
	int a, b, c;
	a = number / 100;
	b = (number % 100) / 10;
	c = number % 10;

	if((a-b) == (b-c))
		return 1;
	else
		return 0;
}
