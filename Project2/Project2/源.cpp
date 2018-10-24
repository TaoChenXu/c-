#include<stdio.h>
int main()
{
	int n, m, i, j, count, s;
	double a[51][51], sum1[51], sum2[51];
	while (scanf("%d%d", &n, &m) != EOF)
	{
		for (j = 1; j <= m; j++)
		{
			sum2[j] = 0;
		}
		for (i = 1; i <= n; i++)
		{
			sum1[i] = 0;
			for (j = 1; j <= m; j++)
			{
				scanf("%lf", &a[i][j]);
				sum1[i] += a[i][j];
				sum2[j] += a[i][j];
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (i != n)
				printf("%.2lf ", sum1[i] / (double)m);
			else
				printf("%.2lf", sum1[i] / (double)m);
		}
		printf("\n");
		for (i = 1; i <= m; i++)
		{
			if (i != m)
				printf("%.2lf ", sum2[i] / (double)n);
			else
				printf("%.2lf", sum2[i] / (double)n);
		}
		printf("\n");
		count = 0;
		for (i = 1; i <= n; i++)
		{
			s = 0;
			for (j = 1; j <= m; j++)
			{
				if (a[i][j] >= sum2[j] / (double)n)
					s++;
			}
			if (s == m)
				count++;
		}
		printf("%d\n\n", count);
	}
}