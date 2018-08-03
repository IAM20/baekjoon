#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a;
	char * ptr;
	char buf[128];
	scanf("%s", buf);
	switch (buf[0])
	{
	case '0':
		if (buf[1] == 'x')
			a = strtol(buf, &ptr, 16);
		else
			a = strtol(buf, &ptr, 8);
		break;
	default:
		a = strtol(buf, &ptr, 10);
		break;
	}
	printf("%d\n", a);
}