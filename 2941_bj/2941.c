#include <stdio.h>
#include <string.h>
#define BUF_SIZE 128

//
// https://www.acmicpc.net/problem/2941
// Count the number of Kroatia alphabet
// LEE CSE HYU 2013008264
//

int main(int argc, char * argv[])
{
	char buf[BUF_SIZE];
	int number_of_alph = 0, i;
	
	scanf("%s", buf);
	int len = strlen(buf);
	
	for(i = 0; i < len; i++)
	{	
		number_of_alph++;
		switch(buf[i])
		{
		case 'c':
			if(i < len -1 && (buf[i+1] == '-' || buf[i+1] == '='))
				i++;
			break;
		case 'd':
			if(i < len-1 && buf[i+1] == '-')
				i++;
			else if(i < len-2 &&buf[i+1] == 'z' && buf[i+2] == '=')
				i += 2;
			break;
		case 'j':
			if((i != 0) && ((buf[i-1] == 'l' || buf[i-1] == 'n')))
				number_of_alph--;
			break;
		case '=':
			if((i != 0) && ((buf[i-1] == 's' || buf[i-1] == 'z')))
				number_of_alph--;
			break;
		}
	}
	printf("%d\n", number_of_alph);
	return 0;
}

