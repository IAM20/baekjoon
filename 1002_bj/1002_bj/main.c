#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int func(int x1, int y1, int r1, int x2, int y2, int r2);

int main(int argc, char * argv[])
{
	int i, iter, x1, x2, y1, y2, r1, r2, * result;
	scanf("%d", &iter);
	result = (int *)malloc(sizeof(int)*iter);
	for (i = 0; i < iter; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		result[i] = func(x1, y1, r1, x2, y2, r2);
	}
	for (i = 0; i < iter; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}

int func(int x1, int y1, int r1, int x2, int y2, int r2)
{
	//Don't use float, double
	if ((x1 == x2) && (y1 == y2) && (r1 == r2))
		return -1;
	if ((x1 == x2) && (y1 == y2) && (r1 != r2))
		return 0;
	int x_distance, y_distance, add_r, sub_r;
	x_distance = x1 - x2;
	y_distance = y1 - y2;
	add_r = r1 + r2;
	sub_r = r1 - r2;
	x_distance *= x_distance;
	y_distance *= y_distance;
	add_r *= add_r;
	sub_r *= sub_r;
	
	if (x_distance + y_distance < add_r || x_distance + y_distance > sub_r)
		return 2;
	else if (x_distance + y_distance == add_r || x_distance + y_distance == sub_r)
		return 1;
	else
		return 0;
}