#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
int main()
{
	//求阶乘
	//int n = 0;
	//int i = 0;
	//scanf("%d", &n);
	//for (i=n-1; i != 0; i--)
	//{
	//	n = n*i;
	//}
	//printf("n!=%d\n", n);

	//阶乘的和
	int i = 0;
	int j = 0;
	int n = 0;
	int s = 0;
	int a = 0;
	printf("求阶乘的和；请输入一个数：");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		n = i;
		for (j = n-1; j!=0; j--)
		{
			n = n*j;
		}
		s = s + n;
		if (i < a)
		{
			printf("%d!+", i);
		}
		else
		{
			printf("%d!=", i);
		}
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}