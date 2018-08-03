#include <stdio.h>

//
// https://www.acmicpc.net/problem/2741
// Using for loop to print 1 ~ N
// Start date 2018.03.14 HYU LEE
// Success date
//

int main(void)
{
	int i, n;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("%d\n", i+1);
	}
	return 0;
}
