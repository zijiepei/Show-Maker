#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int d1p1()
{
	int i;
	int n;

	for (n = 100; n <= 200; n++)
	{
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}

		if (i == sqrtres + 1)
		{
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}