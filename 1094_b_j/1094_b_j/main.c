#include <stdio.h>
#pragma warning(disable : 4996)

int
func(int len)
{
	if (len == 1 || len == 2 || len == 4 ||
		len == 8 || len == 16 || len == 32 ||
		len == 64)
		return 1;

	if (len > 64)
		return 0;
	else if (len < 64 && len > 32)
		return 1 + func(len - 32);
	else if (len < 32 && len > 16)
		return 1 + func(len - 16);
	else if (len < 16 && len > 8)
		return 1 + func(len - 8);
	else if (len < 8 && len > 4)
		return 1 + func(len - 4);
	else if (len < 4 && len > 2)
		return 1 + func(len - 2);
	else
		return 1 + func(len - 1);
}

int
main(int argc, char * argv[])
{
	int result = 0, len;
	scanf("%d", &len);

	printf("%d\n", func(len));
}