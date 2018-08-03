#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n, h, m;
	scanf("%d %d", &h, &m);
	scanf("%d", &n);
	int add_h, add_m;
	add_h = n / 60;
	add_m = n % 60;

	m += add_m;
	if (m / 60)
	{
		add_h++;
	}m %= 60;
	h += add_h;
	h %= 24;
	printf("%d %d", h, m);
	return 0;
}