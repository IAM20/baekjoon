#include <stdio.h>
#include <stdlib.h>

//
// https://acmicpc.net/problem/1085
// Find the shortest way to line.
// LEE 2013008264 HYU
//

int compare(const void * first, const void * second)
{
	if(*(int*)first < *(int*)second)
		return -1;
	else if(*(int*)first > *(int*)second)
		return 1;
	else
		return 0;
}

int main(int argc, char * argv[])
{
	int x, y, w, h, arr[4];
	scanf("%d %d %d %d", &x, &y, &w, &h);
	arr[0] = w - x;
	arr[1] = h - y;
	arr[2] = x;
	arr[3] = y;
	qsort(arr, 4, sizeof(int), &compare);
	
	printf("%d\n", arr[0]);

	return 0;
}
