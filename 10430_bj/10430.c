#include <stdio.h>

//
// https://www.acmicpc.net/problem/10430
// Get result the operation below
// (A+B)%C & (A%C + B%C)%C
// (AxB)%C & (A%C x B%C)%C
// 2018.03.14 LEE
//

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a+b)%c);
	printf("%d\n", (a%c + b%c)%c);
	printf("%d\n", (a*b)%c);
	printf("%d\n", ((a%c) * (b%c))%c);
	
	return 0;
}

