#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int compare(void * first, void * second);

int main(void)
{
	int num_p, *person, i, tmp = 0, result = 0;
	scanf("%d", &num_p);
	person = (int*)malloc(sizeof(int)*num_p);
	
	for (i = 0; i < num_p; i++)
	{
		scanf("%d", &person[i]);
	}qsort(person, num_p, sizeof(int), &compare);

	for (i = 0; i < num_p; i++)
	{
		result += person[i];
		tmp += result;
	}
	printf("%d\n", tmp);
	return 0;
}

int compare(void * first, void * second)
{
	if (*(int *)first < *(int*)second)
		return -1;
	else if (*(int*)first > *(int*)second)
		return 1;
	else return 0;
}