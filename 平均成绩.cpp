#include<stdio.h> 
#include<math.h> 
int main()
{
	int a[50][50];
	double x, y, aver1[50], aver2[50], sum;
	int i, j, n, m, count, p;
	while (~scanf("%d%d", &n, &m))
	{
		count = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		for (i = 0; i < n; i++)
		{
			sum = 0;
			for (j = 0; j < m; j++)
				sum += a[i][j];
			aver1[i] = sum / m;
		}
		for (j = 0; j < m; j++)
		{
			sum = 0;
			for (i = 0; i < n; i++)
				sum += a[i][j];
			aver2[j] = sum / n;
		}
		for (i = 0; i < n; i++)
		{
			p = 1;
			for (j = 0; j < m; j++)
				if (a[i][j] < aver2[j])
				{
					p = 0;
					break;
				}
			if (p)
				count++;
		}
		for (i = 0; i < n - 1; i++)
			printf("%.2lf ", aver1[i]);
		printf("%.2lf\n", aver1[i]);
		for (i = 0; i < m - 1; i++)
			printf("%.2lf ", aver2[i]);
		printf("%.2lf\n", aver2[i]);
		printf("%d\n\n", count);
	}
	return 0;
}