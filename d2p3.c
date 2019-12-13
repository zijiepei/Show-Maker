#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int d2p3()
{
    int max;
	int tmp;
	int a;
	int arr[10] = {0};
	
	for (a = 1; a <= 45; a++)
	{
		if (tmp > max)
		{
			max = tmp;
			printf("%d\n", max);
	    }
		if (tmp < max)
		{
			printf("%d\n", max);
		}
	}
	system("pause");
	return 0;



}

	







