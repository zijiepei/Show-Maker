#include<stdio.h>
#include<stdlib.h>
int d3p1()
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {6,7,8,9,0};
	int i;
	for (i = 0; i <= 4; i++)
	{
		printf("%d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	putchar('\n');
	int tmp;
	for (i = 0; i < 5; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;






}