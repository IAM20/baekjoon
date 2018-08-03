#include <stdio.h>
#pragma warning (disable : 4996)

#define ASCEND -1
#define DESCEND 1
#define MIX 2

int main(int argc, char * argv[])
{
	int arr[8], i, sub = 1, judge = ASCEND;
	
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}
	judge = arr[0] - arr[1];
	for (i = 1; i < 7; i++)
	{
		if (arr[i] - arr[i + 1] != judge)
		{
			judge = MIX;
			break;
		}
	}
	switch (judge)
	{
	case ASCEND:
		printf("ascending\n");
		break;
	case DESCEND:
		printf("descending\n");
		break;
	case MIX:
		printf("mixed\n");
		break;
	default:
		break;
	}
	return 0;
}