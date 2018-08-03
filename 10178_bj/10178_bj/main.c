#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int num_candy, num_bro, iter, i;
	scanf("%d", &iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d %d", &num_candy, &num_bro);
		if (num_bro == 0) {
			num_candy = 0;
			num_bro = 1;
		}
		printf("You get %d piece(s) and your dad gets %d piece(s)\n", num_candy / num_bro, num_candy % num_bro);
	}
	return 0;
}