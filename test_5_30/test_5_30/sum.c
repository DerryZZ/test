#define _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个数字\n");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}