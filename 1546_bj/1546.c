#include <stdio.h>
#include <stdlib.h>

/*
 * https://www.acmicpc.net/problem/1546
 * Cheating test score
 * HYU 2013008264 LEE
 */

int main(void)
{
	int number, i;
	double *score, max = 0.0, result = 0.0;
	
	scanf("%d", &number);
	score = (double *)malloc(sizeof(double)*number);
	for(i = 0; i < number; i++)
	{
		scanf("%lf", &score[i]);
		if(max < score[i])
			max = score[i];
	}
	for(i = 0; i < number; i++)
	{
		score[i] = (score[i]/max)*100;
		result += score[i];
	}
	result = result/(double)number;
	printf("%.2lf\n", result);
	free(score);	
	return 0;
}

