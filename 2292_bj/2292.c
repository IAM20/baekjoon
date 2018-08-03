#include <stdio.h>
#include <math.h>

//
// https://acmicpc.net/problems/2292
// Print hive's shortest path.
// LEE HYU 2013008264 CSE

int main(int argc, char * argv[])
{
	int result; 
	long n;
	double tmp;
	scanf("%ld", &n);

	n *= 12;
	n -= 3;

	tmp = sqrt(n);
	tmp /= 6;
	
	result = (int)tmp;
	if((tmp - result) <= 0.5)
	{}else
		result++;

	printf("%d\n", result+1);

	return 0;

}

