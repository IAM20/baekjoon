#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

#define TRUE 1
#define FALSE 0

int main(int argc, char * argv[])
{
	int w, h, **map, result = 0;
	int i, j;
	while (TRUE) {
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			return 0;
		if ((map = (int **)malloc(sizeof(int *)*(h + 2))) == NULL)
		{
			printf("Heap is full\n");
			return 1;
		}
		for (i = 0; i < h + 2; i++)
		{
			if ((map[i] = (int *)malloc(sizeof(int)*(w + 2))) == NULL)
			{
				printf("Heap is full\n");
				return 1;
			}
			if (i == 0 || i == h + 1)
			{
				for (j = 0; j < w; j++)
					map[i][j] = 0;
			}
			else {
				for (j = 1; j <= w; j++) {
					scanf("%d", &map[i][j + 1]);
				}map[i][0] = map[i][w + 1] = 0;
			}
		}

		for (i = 1; i <= h; i++)
		{
			for (j = 1; j <= w; j++)
			{
				if (map[i][j]) {
					if (map[i - 1][j] || map[i + 1][j] ||
						map[i][j + 1] || map[i][j - 1])
						continue;
					else
						result++;
				}
			}
		}
		for (i = h+1; i >= 0; i--)
			free(map[i]);
		free(map);
		printf("%d\n", result);
	}
	return 0;
}