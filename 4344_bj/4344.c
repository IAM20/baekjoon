#include <stdio.h>
#include <stdlib.h>
/*
 * https://www.acmicpc.net/problem/4344
 * I am over average. 
 * HYU 2013008264 LEE
 */

int main(void)
{
	int number_student, *score, iter, average, good, i, j;
	double per;

	scanf("%d", &iter);
	for(i = 0; i < iter; i++)
	{
		scanf("%d", &number_student);
		score = (int *)malloc(sizeof(int)*number_student);
		average = 0;
		for(j = 0; j < number_student; j++)
		{
			scanf("%d", &score[j]);
			average += score[j];
		}
		average = average/number_student;
		good = 0;
		for(j = 0; j < number_student; j++)
		{
			if(average < score[j])
				good++;
		}

		per = (double)good/(double)number_student;
		printf("%.3lf%%\n", per*100);
		free(score);
	}
	return 0;
}


