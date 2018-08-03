#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int compare(const void * first, const void * second)
{
	if (*(double *)first < *(double *)second)
		return -1;
	else if (*(double *)first > *(double *)second)
		return 1;
	else return 0;
}

int cal_trimmed(double * arr, int n, int k);
int cal_correction(double * arr, int n, int k);

int main(int argc, char * argv[])
{
	int n, k, i;
	double * score;
	scanf("%d %d", &n, &k);
	score = (double *)malloc(sizeof(double)*n);

	for (i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
	}qsort(score, n, sizeof(double), &compare);
	
	int trimmed = cal_trimmed(score, n, k);
	int correction = cal_correction(score, n, k);
	
	//printf("%d.", trimmed / ((n - 2 * k) * 10));
	//trimmed %= ((n-2*k)*10);
	//trimmed *= 10;

	int tmp;

	for (i = 0; i < 3; i++)
	{
		tmp = trimmed / ((n - 2 * k) * 10);
		
		//printf("%d", tmp);
		trimmed %= (n- 2*k)*10;
		trimmed *= 10;
		if (i == 2)
		{
			if ((trimmed / ((n - 2 * k) * 10)) >= 5)
				tmp++;
			printf("%d", tmp);
		}
		else if (i == 0)
			printf("%d.", tmp);
		else
			printf("%d", tmp);
	}printf("\n");

	for (i = 0; i < 3; i++)
	{
		tmp = correction / (n * 10);
		correction %= (n*10);
		correction *= 10;
		if (i == 2)
		{
			if ((correction / ((n * 10))) >= 5)
				tmp++;
			printf("%d", tmp);
		}
		else if (i == 0)
		{
			printf("%d.", tmp);
		}else
			printf("%d", tmp);
	}printf("\n");

	return 0;
}
int cal_trimmed(double * arr, int n, int k)
{
	int result = 0;
	int i;
	for (i = k; i < n - k; i++)
	{
		result += (int)10*arr[i];
	}
	return result;
}
int cal_correction(double * arr, int n, int k)
{
	int result = 0;
	int i;
	for (i = k; i < n - k; i++)
	{
		result += (int)10*arr[i];
	}for (i = 0; i < k; i++)
	{
		result += (int)10*arr[k];
		result += (int)10*arr[n - k - 1];
	}
	return result;
}
