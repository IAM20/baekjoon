#include <stdio.h>
#include <stdlib.h>

//
// https://www.acmicpc.net/problem/1932
// Dijkstra Algorithm 4 Binary tree
// LEE HYU CSE
//

int main(int argc, char * argv[])
{
	int ** tree, **result, iter, i, j;
	scanf("%d", &iter);
	tree = (int **)malloc(sizeof(int *)*iter);
	result = (int **)malloc(sizeof(int *)*iter);
	for(i = 0; i < iter; i++)
	{
		tree[i] = (int *)malloc(sizeof(int)*(i+1));
		result[i] = (int *)malloc(sizeof(int)*(i+1));
		for(j = 0; j <= i; j++)
		{	scanf("%d", &tree[i][j]);
			result[i][j] = 0;
		}//All result is 0.
	}
	int tmp1, tmp2;
	result[0][0] = tree[0][0];
	for(i = 0; i < iter-1; i++)
	{for(j = 0; j <= i; j++)
		{
			tmp1 = tree[i+1][j] + result[i][j];
			tmp2 = tree[i+1][j+1] + result[i][j];
			if(tmp1 > result[i+1][j])
				result[i+1][j] = tmp1;
			if(tmp2 > result[i+1][j+1])
				result[i+1][j+1] = tmp2;
		}
	}
	tmp1 = 0;
	for(i = 0; i < iter; i++)
		if(tmp1 < result[iter-1][i])
			tmp1 = result[iter-1][i];
		
	printf("%d\n", tmp1);
	return 0;
}
