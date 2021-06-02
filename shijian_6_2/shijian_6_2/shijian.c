#define _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <stdio.h>
int main()
{
	int a,b,c,d,s = 0;
	scanf("%d%d%d%d", &a, &b,&c,&d);
	s = 60 * (c - a) + d - b;
	printf("%d %d", s / 60, s % 60);
	system("pause");
	return 0;
}