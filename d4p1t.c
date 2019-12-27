#include<stdio.h>
#include<stdlib.h>
int d4p1t()
{
	int i;
	int j;
	int n = 7;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= 2 * i - 2;j += 2)
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;




}
	