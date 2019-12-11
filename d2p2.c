#include<stdio.h>
int d2p2()
{
	int a = 5;
	int b = 6;
	printf("a = %d,b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d,b = %d\n", a, b);
	system("pause");
	return 0;

}