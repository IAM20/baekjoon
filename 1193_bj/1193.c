#include <stdio.h>
#include <math.h>

//
// https://www.acmicpc.net/problem/1193
// Find the fraction's rule.
// LEE 2013008264HYU CSE
//

int main(void)
{
	int line, where, x, y, tmp;
	double findline;

	scanf("%d", &where);
	tmp = where;

	where *= 8;
	where += 1; //8x+1
	
	findline = sqrt(where); // root(8x+1)
	findline /= 2; //root(8x+1) / 2

	line = (int)findline; // 정수 부분 만들기 위해서..
	if(findline - line <= 0.5)
	{}
	else
		line++;
	printf("line : %d\n", line);	
	x = tmp - (line *(line -1)/2);
	y = line + 1 - x;
	if(line % 2)
		printf("%d/%d\n", y, x);
	else
		printf("%d/%d\n", x, y);
	return 0;
}
