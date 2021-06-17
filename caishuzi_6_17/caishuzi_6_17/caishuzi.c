#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void menu()
{
	printf("###############################\n");
	printf("######  1.开始   0.退出  ######\n");
	printf("###############################\n");
}
void game()
{
	//生成随机数字
	int shu = 0;
	int cai = 0;
	shu = rand();//生成随机数
	shu = shu % 100 + 1;
	printf("请猜一个数:>");
	printf("%d", shu);
	scanf("%d", &cai);
	//猜数字
	
	while (1)
	{

		if (cai == shu)
		{
			system("cls");
			printf("猜对了\n");
			Sleep(3000);
			system("cls");
			break;
		}
		else if (cai > shu)
		{
			printf("猜大了\n");
			scanf("%d", &cai);
		}
		else
		{
			printf("猜小了\n");
			scanf("%d", &cai);
		}
	}
}
int main()
{
	int a=0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		default:
			printf("请输入正确选项:>\n");
			break;
		case 0:
			break;
		}
	} while (a);
	return 0;
}