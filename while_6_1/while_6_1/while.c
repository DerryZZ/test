#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	int queren = 0;
	int txt = 0;
	char mima[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", &mima);//将密码存入mima
	printf("密码是%s\n", mima);
	while ((txt = getchar()) != '\n')//读掉多余的字符，直到读完\n    确保下一次getchar读不到数据
	{
		putchar(txt);
		printf("被吃掉了\n");//验证一下每次读了什么
	}
	printf("是否确认（Y\\N)\n");
	queren = getchar();//输入Y/N
	if (queren == 'Y')
	{
		printf("成功\n");
	}
	else
	{
		printf("取消\n");
	}
	system("pause");
	return 0;
}