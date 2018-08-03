#include <stdio.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int min[4], man[4], result_min = 0, result_man = 0;
	int i;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &min[i]);
		result_min += min[i];
	}
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &man[i]);
		result_man += man[i];
	}
	
	if (result_man > result_min)
		printf("%d\n", result_man);
	else
		printf("%d\n", result_min);
	return 0;
}