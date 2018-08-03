#include <stdio.h>
//
// https://www.acmicpc.net/problem/2742
// Using for loop to print N ~ 1
// 2018.03.14 LEE
//

int main(void)
{
	int i;
	scanf("%d", &i);
	
	for(i; i>0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}

