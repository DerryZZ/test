#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	char ch;
	int a = 0;
	printf("请输入一个小写字母")；
	scanf("%c", &ch);
	a = ch-32;//小写改大写
	printf("%c", a);
	system("pause");
	return 0;
}