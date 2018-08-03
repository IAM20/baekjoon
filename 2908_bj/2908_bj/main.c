#include <stdio.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int a, b, tmp1 = 0, tmp2 = 0;
	scanf("%d %d", &a, &b);

	tmp1 += a / 100;
	tmp1 += ((a % 100) / 10) * 10;
	tmp1 += (a % 10) * 100;
	tmp2 += b / 100;
	tmp2 += ((b % 100) / 10) * 10;
	tmp2 += (b % 10) * 100;

	if (tmp2 > tmp1)
		printf("%d\n", tmp2);
	else
		printf("%d\n", tmp1);
	return 0;
}