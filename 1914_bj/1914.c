#include <stdio.h>
#include <string.h>

//
// https://acmicpc.net/problems/1914
// make hanoi top. handle and print extremely big numbers.
// 2013008264 lee hyu
// 2 4 8 6 2 4 8 6
// 1 3 7 5 1 3 7 5 


int hanoi(int n, int from, int by, int to);
int move(int from, int to);
long double big_hanoi(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	char buf[128];
	sprintf(buf, "%.0Lf\n", big_hanoi(n));
	buf[strlen(buf)-2] -= 1;

	if(n <= 20){
		printf("%s\n", buf);
		hanoi(n, 1, 2, 3);
	}
	else
		printf("%s\n", buf);
	return 0;
}

int hanoi(int n, int from, int by, int to)
{
	int count = 0;
	if(n == 1)
		return move(from, to);
	else
	{
		count += hanoi(n-1, from, to, by);
		count += move(from, to);
		count += hanoi(n-1, by, from, to);
	}
	return count;
}

int move(int from, int to)
{
	printf("%d %d\n", from, to);
	return 1;
}

long double big_hanoi(int n)
{
	int i;
	long double result = 1.0;
	for(i = 0; i < n; i++)
	{
		result *= 2;
	}
	return result;
}
