#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int x1, x2, x3, y1, y2, y3, x_r, y_r;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	if (x1 == x2)
		x_r = x3;
	else if (x2 == x3)
		x_r = x1;
	else
		x_r = x2;

	if (y1 == y2)
		y_r = y3;
	else if (y2 == y3)
		y_r = y1;
	else
		y_r = y2;

	printf("%d %d\n", x_r, y_r);
	return 0;
}