#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

#define TRUE 1
#define FALSE 0

int main()
{
	int child, house_num;
	int *arr, *sum, i, * exist;
	while (scanf("%d%d", &child, &house_num))
	{
		if (child == 0 || house_num == 0)
			return 0;
		else
		{
			arr = (int *)malloc(sizeof(int)*(house_num + 1));
			sum = (int *)malloc(sizeof(int)*(house_num + 1));
			exist = (int *)malloc(sizeof(int)*(child ));
			for (i = 0; i < child; i++)
				exist[i] = 0;
			if (arr == NULL || sum == NULL)
			{
				fprintf(stderr, "Failed to memory allocation\n");
				return 1;
			}
			for (i = 1; i <= house_num; i++)
			{
				scanf("%d", &arr[i]);
			}
			int left_end = 0, right_end = 0;
			int pos = -1;
			sum[0] = arr[0] = 0;
			for (i = 1; i <= house_num; i++)
			{
				sum[i] = (sum[i - 1] + arr[i]) % child;
				if (!exist[sum[i]] && right_end == 0)
					exist[sum[i]] = i;
				else if(exist[sum[i]] > 0 && right_end == 0)
				{
					left_end = exist[sum[i]] + 1;
					right_end = i;
					break;
				}

				if (sum[i] == 0)
				{
					pos = i;
					break;
				}
			}
			if (pos > 0)
			{//Adding all elements, in this position fit to children.
				printf("%d", 1);
				for (i = 2; i <= pos; i++)
					printf(" %d", i);
				printf("\n");
			}
			else if (left_end != 0)
			{
				printf("%d", left_end);
				for (i = left_end + 1; i <= right_end; i++)
					printf(" %d", i);
				printf("\n");
			}
			else
			{
				printf("No sweets\n");
			}
			free(arr);
			free(sum);
			free(exist);
		}
	}
}