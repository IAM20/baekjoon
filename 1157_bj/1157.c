#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1000001

int main(void)
{
	char result;
	int max = 0,  i, arr[128] = {0};
	char str[BUF_SIZE];
	scanf("%s", str);

	for(i = 0; i < (int)strlen(str); i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			arr[(int)str[i] - 32] ++;
		}else
			arr[(int)str[i]]++;
	}
	for(i = 65; i <= 90; i++)
	{
		if(max < arr[i]) {
			max = arr[i];
			result = i;
		}
		else if(max == arr[i] && max != 0)
			result = 63;
	}
	printf("%c\n", result);
	return 0;
}
