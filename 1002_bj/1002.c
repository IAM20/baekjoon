#include <stdio.h>
#include <stdlib.h>

/*
 * https://acmicpc.net/problem/1002
 * Turret
 * LEE CSE 2013008264 HYU
 */

int ret_numpoint(int x1, int y1, int r1, int x2, int  y2, int r2);

int main(int argc, char * argv[])
{
	int iter, x1, x2, y1, y2, r1, r2, i;
	scanf("%d", &iter);
	for(i = 0; i < iter; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d\n", ret_numpoint(x1, y1, r1, x2, y2, r2));
	}
	return 0;
}

int ret_numpoint(int x1, int y1, int r1, int x2, int y2, int r2)
{
	if(x1 == x2 && y1 == y2)
	{
		if(r1 == r2)
			return -1;
		else
			return 0;
	}
	int d_square = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
	int r_sub = r1 - r2;
	r_sub *= r_sub;
	int r_add = r1 + r2;
	r_add *= r_add;
	
	int retval;
	if((r1*r1) > d_square || (r2*r2) > d_square){
		if(d_square < r_sub)
			return 0;
		else if(d_square > r_sub)
			return 2;
		else
			return 1;
	}else{
		if(d_square > r_add)
			return 0;
		else if(d_square < r_add)
			return 2;
		else
			return 1;
	}
}
