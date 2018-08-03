#include <stdio.h>
//
// https://www.acmipc.net/submit/10869
// Print arithmetic operation of two digits
// 2018.03.14
//

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);
}
