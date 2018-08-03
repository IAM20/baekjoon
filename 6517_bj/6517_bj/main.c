
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define N 100005
long long int a[N];
long long int sum[N];
int main()
{
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		if (m == 0 || n == 0)
		{
			break;
		}
		else
		{
			for (int i = 1; i <= m; i++)
			{
				scanf("%lld", &a[i]);
			}
			int pos = -1;
			sum[0] = 0;
			for (int i = 1; i <= m; i++)
			{
				sum[i] = (sum[i - 1] + a[i]) % n;
				if (sum[i] == 0)
				{
					pos = i;
				}
			}
			if (pos>0)
			{
				printf("%lld", 1);
				for (int i = 2; i <= pos; i++)
				{
					printf(" %lld", i);
				}
				printf("\n");
			}
			else
			{

				int x, y;
				for (int i = 1; i <= m; i++)
				{
					for (int j = 1; j <= i; j++)
					{
						if (sum[i] - sum[j] == 0)
						{
							x = i;
							y = j;
							break;
						}
					}
				}
				printf("%lld", y + 1);
				for (int k = y + 2; k <= x; k++)
				{
					printf(" %lld", k);
				}
				printf("\n");


			}

		}

	}
}