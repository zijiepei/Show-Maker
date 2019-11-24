#include<stdio.h>
#include<stdlib.h>
int d1p2()
{
	int n = 9;
	int i,j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d == %d", j, i, i * j);
		}
		putchar('\n');
	}
	system("pause");
	return 0;





}
