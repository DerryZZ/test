#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x,a,b;
	scanf("%d", &x);
	//偶数
	if (x % 2 == 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	//大于4且不大于12
	if (x > 4 && x <= 12)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	//小A
	if (a == 1 && b == 1)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	//uim
	if (a == 1 || b == 1)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	//八尾勇
	if (a != b)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	//正妹
	if (a == 0 && b == 0)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	return 0;
}