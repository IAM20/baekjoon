#include <stdio.h>

int main()
{
	int n, m, tmp, num, c;
	n = 0;
	m = 0;
	c = 0;
	scanf("%d", &num);
	int i , j;

	for(i = 0; num != c; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if(c == 0){ n = 1; m = 1; c++; }
			else if(j == 0)
			{
				if( i % 2 == 1) m++;
				else n++;
				c++;
			}
			else if(j != 0 && i % 2 == 1)
			{
				n++;
				m--;
				c++;
			}
			else if(j != 0 && i %2 == 0)
			{
				n--;
				m++;
				c++;
			}
			if(num == c) break;
		}
		if(num == c) break;
	}
	printf("%d/%d\n", n, m);
	return 0;

}
