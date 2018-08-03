#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable :4996)

int
compare(void * a, void * b)
{
	return (*(int *)a - *(int *)b);
}

typedef struct node {
	int line;
	int _where;
}node;

int
main(int argc, char * argv[])
{
	int n, m, i, j, *arr;
	char ** grid;
	scanf("%d %d", &n, &m);

	node * _arr = (node *)malloc(sizeof(node)*n);
	grid = (char **)malloc(sizeof(char *)*n);

	for (i = 0; i < n; i++){
		(char *)malloc(sizeof(char)*m);
		scanf("%s", grid[i]);
		_arr[i].line = i + 1;
		for (j = 0; j < m-1; j++) {
			if (grid[i][j] != '.')
				_arr[i]._where = m - 1 - j;
		}
	}

	int min = m;

}