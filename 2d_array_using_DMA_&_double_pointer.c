#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int  **p;
	p = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; i++)
	{
		p[i] = (int*)malloc(n * sizeof(n));

	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &p[i][j]);
		}

	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");

	}
	free(p);

}
