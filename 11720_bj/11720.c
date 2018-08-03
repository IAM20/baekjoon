#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int result = 0; int iterator, i;
    char n = '\0';
	scanf("%d", &iterator);
	getchar();

	for(i = 0; i < iterator; i++)
	{
		n = getchar();
		result += atoi(&n);
	}
    
    printf("%d\n", result);
    return 0;
}
