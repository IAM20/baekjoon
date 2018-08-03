#include <stdio.h>
#include <string.h>

//
// https://acmicpc.net/problems/10809
// Handling string with ascii code
// LEE HYU CSE 2013008264
//
#define BUF_SIZE 128

int main(int argc, char * argv[])
{
	if(argc != 1)
		return 0;

	char buf[BUF_SIZE];
	int tmp, i, len, arr[26];
	scanf("%s", buf);
	for(i =0; i < 26; i++)
		arr[i] = -1;

	len = strlen(buf);

	for(i = 0; i < len; i++)
	{
		tmp = (int)buf[i];
		printf("%d\n", tmp);
		if(!(tmp <= 122 && tmp >= 97))
			continue;
		if(arr[tmp - 97] == -1)
			arr[tmp - 97] = i;
	}

	for(i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}printf("\n");
	
	return 0;
}
