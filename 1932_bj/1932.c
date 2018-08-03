#include <stdio.h>
#include <stdlib.h>

//
// https://www.acmicpc.net/problem/1932
// Greedy Algorithm 4 Binary tree
// LEE HYU CSE
//

int main(int argc, char * argv[])
{
	int ** tree, iter, i, j;
	scanf("%d", &iter);
	tree = (int **)malloc(sizeof(int *)*iter);
	for(i = 0; i < iter; i++)
	{
		tree[i] = (int *)malloc(sizeof(int)*(i+1));
		for(j = 0; j <= i; j++)
			scanf("%d", &tree[i][j]);
	}
	
	int result = 0; j = 0;
	result += tree[0][0];
	for(i = 0; i < iter-1;)
	{
		if(tree[++i][j] < tree[i][j+1])
			result += tree[i][++j];
		else
			result += tree[i][j];
	}
	printf("%d\n", result);
	return 0;
}
