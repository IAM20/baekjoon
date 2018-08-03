#include <stdio.h>

//
// https://acmicpc.net/problems/11718
// Print what you input. Until EOF
// 2013008264 LEE
//

#define BUF_SIZE 128

int main(int argc, char * argv[])
{
	char strs[BUF_SIZE][BUF_SIZE];
	int i, count = 0;
	for(i = 0; i < BUF_SIZE; i++)
	{
		if(fgets(strs[i], BUF_SIZE, stdin) == NULL)
			break;	
		count++;	
	}
	for(i = 0; i < count; i++)
	{
		fprintf(stdout, "%s", strs[i]);
	}
	return 0;
}
