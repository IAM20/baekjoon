#include <stdio.h>
#include <string.h>
#define BUF_SIZE 32
//
// https://www.acmicpc.net/problem/2675
// print string with iterator
// LEE CSE HYU 2013008264
//


int main(void)
{
	int num_case;
	int iter, j, i, k, len; char buf[BUF_SIZE];
	
	scanf("%d", &num_case);
	for(k = 0; k < num_case; k++){
		scanf("%d", &iter);
		scanf("%s", buf);
		len = (int)strlen(buf);
		for(i = 0; i < len; i++)
		{
			for(j = 0; j < iter; j++)
				printf("%c", buf[i]);
		}printf("\n");
	}
	return 0;
}
