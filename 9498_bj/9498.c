#include <stdio.h>

/*
 * https://www.acmicpc.net/problem/9498
 * Print the score of test
 * 2013008264 HYU LEE
 */

int main(void)
{
	int score;
	scanf("%d", &score);
	
	if(score >= 90 && score <= 100)
		printf("A\n");
	else if(score >= 80 && score < 90)
		printf("B\n");
	else if(score >= 70 && score < 80)
		printf("C\n");
	else
		printf("F\n");
	return 0;
}
