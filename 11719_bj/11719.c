#include <stdio.h>

// 
// https://www.acmicpc.net/problem/11719
// Print all your input.
// 2013008264 HYU LEE
//

#define BUF_SIZE 128

int main(void)
{
	char strs[BUF_SIZE][BUF_SIZE];
	int i, count = 0;

	for(i = 0; i < BUF_SIZE; i++)
	{	
		if(fgets(strs[i], BUF_SIZE, stdin) == NULL)
			break;
		count++;
	}
	for(i = 0; i < count; i++)
	{
		printf("%s", strs[i]);
	}
	return 0;
}
