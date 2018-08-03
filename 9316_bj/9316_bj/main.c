#include <stdio.h>
#pragma warning(disable : 4996)

int main(int argc, char * argv[])
{
	int iter, i;
	scanf("%d", &iter);
	for (i = 1; i <= iter; i++)
	{
		printf("Hello World, Judge %d!\n", i);
	}
	return 0;
}