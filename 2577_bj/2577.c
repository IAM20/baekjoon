#include <stdio.h>
#include <string.h>

// 
// https://www.acmicpc.net/problem/2577
// Print the number's frequencies.
// LEE 2013008264 HYU
//

int main(void)
{
	int a,b,c, i, number[10];
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	a *= b*c;
	char buf[16];
	sprintf(buf, "%d", a);
	
	for(i = 0; i < 10; i++)
	{
		number[i] = 0;
	}

	for(i = 0; i < strlen(buf); i++)
	{
		number[buf[i]-48]++;
	}

	for(i = 0; i < 10; i++)
	{
		printf("%d\n", number[i]);
	}
	return 0;
}
