#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
//函数
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏
#define Max(x,y) (x>y?x:y)//将Max(x,y)替换为(x>y?x:y)
int main()
{
	int a = 0;
	int b = 0;
	int 函数max = 0;
	int 宏max = 0;
	printf("请输入两个数字\n");
	scanf("%d%d", &a, &b);
	//函数
	函数max = MAX(a, b);
	printf("max = %d\n", 函数max);
	//宏
	宏max = Max(a, b);//man = Max(x,b) = (a>b?x:y)
	printf("max = %d\n", 宏max);
	system("pause");
	return 0;
}