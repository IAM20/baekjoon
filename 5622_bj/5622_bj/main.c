#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

#define ABC 3
#define DEF 4
#define GHI 5
#define JKL 6
#define MNO 7
#define PQRS 8
#define TUV 9
#define WXYZ 10
#define OPERATOR 0

int main(int argc, char * argv[])
{
	char str[16];
	scanf("%s", str);
	int i, result = 0;
	for (i = 0; i < strlen(str); i++)
	{
		switch (str[i])
		{
		case 'A': case 'B': case'C':
			result += ABC;
			break;
		case 'D': case 'E': case 'F':
			result += DEF;
			break;
		case 'G': case 'H': case 'I':
			result += GHI;
			break;
		case 'J' : case 'K': case 'L':
			result += JKL;
			break;
		case 'M': case 'N': case 'O':
			result += MNO;
			break;
		case 'P': case 'Q': case 'R': case 'S':
			result += PQRS;
			break;
		case 'T': case 'U': case 'V':
			result += TUV;
			break;
		case 'W': case 'X': case 'Y': case 'Z':
			result += WXYZ;
			break;
		default:
			break;
		}
	}
	printf("%d\n", result);
	return 0;
}