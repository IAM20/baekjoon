#include <stdio.h>
//
// https://www.acmicpc.net/problem/8393
// sigma 1~n
// 2013008264 LEE 2018.03.15
//

int main(void)
{
	int n, result;
	scanf("%d", &n);
	
	result = (n * (n+1))/2;
	printf("%d\n", result);
	return 0;
}
