#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x,a,b;
	scanf("%d", &x);
	//ż��
	if (x % 2 == 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	//����4�Ҳ�����12
	if (x > 4 && x <= 12)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	//СA
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
	//��β��
	if (a != b)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	//����
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