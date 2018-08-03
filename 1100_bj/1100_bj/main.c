#include <stdio.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	char grid[8][9];
	int result = 0, j;
	for (int i = 0; i < 8; i++) {
		scanf("%s", grid[i]);
		for (j = 0; j < 8; j++) {
			if (grid[i][j] == 'F') {
				if ((i + j) % 2)
					;
				else
					result++;
			}
		}
				
	}

	printf("%d\n", result);

	
}