#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, j, yoot[4], result;
	for (i = 0; i < 3; i++)
	{
		result = 0;
		scanf("%d %d %d %d", &yoot[0], &yoot[1], &yoot[2], &yoot[3]);
		for (j = 0; j < 4; j++)
			result += yoot[j];
		switch (result)
		{
		case 4:
			printf("E\n");
			break;
		case 3:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 1:
			printf("C\n");
			break;
		case 0:
			printf("D\n");
			break;
		default :
			break;
		}
	}
}