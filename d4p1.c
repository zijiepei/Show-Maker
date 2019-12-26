#include<stdio.h>
#include<stdlib.h>
int d4p1()
{
	int i;
	int n;
	int j = 7;
	for (i = 1; i <= j; i++)
	{
		for (n = 1; n <= 2 * i - 1;n++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = j - 1; i > 0; i--)
	{
		for (n = 1; n <= 2 * i - 1; n++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;


}