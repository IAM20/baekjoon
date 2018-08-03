#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define BUF_SIZE 64

int main(void)
{
	char buf[BUF_SIZE];
	int iter, i, j, len, result;
	scanf("%d", &iter);
	for (i = 0; i < iter; i++) {
		scanf("%s", buf);
		len = strlen(buf);
		result = 0;
		for (j = 0; j < len; j++)
		{
			switch (buf[j])
			{
			case '(': result++;
				break;
			case ')': result--;
				break;
			default:
				break;
			}
			if (result < 0)
				break;
		}
		if (result)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}