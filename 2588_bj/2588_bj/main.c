#include <stdio.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	int n1, n2, n3, n4, n5, n6;
	scanf("%d", &n1);
	scanf("%d", &n2);

	n3 = n1 * (n2 % 10);
	n4 = n1 * ((n2 / 10) % 10);
	n5 = n1 * ((n2 / 100));

	n6 = n3 + n4 * 10 + n5 * 100;
	printf("%d\n%d\n%d\n%d\n", n3, n4, n5, n6);
}