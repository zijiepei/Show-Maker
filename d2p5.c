#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int d2p5()
{
	int a, b;
	int c;
	scanf("%d%d", &a,&b);
	c = a % b;
	while (c)
	{
		a = b;
		b = c;
		c = a % b;
		
	}
	printf("%d\n", b);
	system("pause");
	return 0;





}