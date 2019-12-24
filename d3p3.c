#include<stdio.h>
#include<stdlib.h>
int d3p3()
{
	int i;
	int num = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			num++;
		}
		if (i / 10 == 0)
		{
			num++;
		}
	}

	printf("%d", num);
	system("pause");
	return 0;

}