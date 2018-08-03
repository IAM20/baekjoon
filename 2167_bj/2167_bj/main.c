#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv[])
{
	int n, m, i, j, x, y, **matrix, result=0;
	scanf("%d %d", &n ,&m);

	matrix = (int **)malloc(sizeof(int *)*n);
	for (int k = 0; k < n; k++) {
		matrix[k] = (int *)malloc(sizeof(int)*m);
		for (int l = 0; l < m; l++)
			scanf("%d", &matrix[k][l]);
	}
	int t;
	scanf("%d", &t);
	for (int k = 0; k < t; k++) {
		scanf("%d %d %d %d", &i, &j, &x, &y);
		for (int a = i - 1; a < x; a++) {
			for (int b = j - 1; b < y; b++)
				result += matrix[a][b];
		}
		printf("%d\n", result);
		result = 0;
	}
	for (int k = n - 1; k >= 0; k--)
		free(matrix[k]);
	free(matrix);
	return 0;
}