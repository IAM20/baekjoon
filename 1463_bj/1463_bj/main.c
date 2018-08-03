#include <stdio.h>
#pragma warning(disable : 4996)

int
main(int argc, char * argv)
{
	int digit, result = 0;
	scanf("%d", &digit);

	while (digit != 1) {
		if (((digit % 3) == 1))
			digit -= 1;
		else if (!(digit % 3))
			digit /= 3;
		else if (digit % 2)
			digit -= 1;
		else if (!(digit % 2))
			digit /= 2;
		
		result++;
	}

	printf("%d\n", result);
}