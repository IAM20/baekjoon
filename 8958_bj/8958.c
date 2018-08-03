#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 
// https://www.acmicpc.net/problem/8958
// Print the score of OX Quiz
// LEE HYU 2013008264
//

#define BUF_SIZE 128

int main(void)
{
	char buf[BUF_SIZE];
	int iter, i, j, *score, correct;
	scanf("%d", &iter);
	score = (int *)malloc(sizeof(int)*iter);
	
	for(i = 0; i < iter; i++)
	{
		correct = 0;
		score[i] = 0;
		scanf("%s", buf);
		for(j = 0; j < strlen(buf); j++)
		{
			switch(buf[j])
			{
			case 'O':
				score[i] += ++correct;
				break;
			case 'X':
				correct = 0;
				break;
			default:
				break;
			}
		}
	}
	for(i = 0; i < iter; i++)
	{
		printf("%d\n", score[i]);
	}
	return 0;
}
