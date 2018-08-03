#include <stdio.h>

int main(void)
{
	int a, b, i;
	int rest;

	scanf("%d %d", &a, &b);
	printf("%d.", a/b);
	
	a = (a % b) * 10;

	for(i = 0; i<10; i++)
	{
		rest = a;
		if(rest == 0) break;
		a = rest / b;
		printf("%d", a);
		a = (rest % b) * 10;
	}
	printf("\n");
	return 0;
}
