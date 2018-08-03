#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	char score[3];
	double result;
	scanf("%s", score);
	switch (score[0])
	{
	case 'A':
		result = 4.0;
		break;
	case 'B':
		result = 3.0;
		break;
	case 'C':
		result = 2.0;
		break;
	case 'D':
		result = 1.0;
		break;
	case 'F':
		printf("0.0");
		return 0;
	default :
		return 1;
	}
	switch (score[1])
	{
	case '+':
		result += 0.3;
		printf("%.1lf\n", result);
		return 0;
	case '-':
		result -= 0.3;
		printf("%.1lf\n", result);
		return 0;
	case '0':
		printf("%.1lf\n", result);
		return 0;
	default:
		return 1;
	}
}