#include <stdio.h>
#pragma warning (disable : 4996)

int main(int argc, char * argv[])
{
	int r1, s, result;
	scanf("%d %d", &r1, &s);

	result = (s<<1) - r1;
	printf("%d\n", result);
	return 0;
}