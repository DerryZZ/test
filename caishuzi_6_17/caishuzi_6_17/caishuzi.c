#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void menu()
{
	printf("###############################\n");
	printf("######  1.��ʼ   0.�˳�  ######\n");
	printf("###############################\n");
}
void game()
{
	//�����������
	int shu = 0;
	int cai = 0;
	shu = rand();//���������
	shu = shu % 100 + 1;
	printf("���һ����:>");
	printf("%d", shu);
	scanf("%d", &cai);
	//������
	
	while (1)
	{

		if (cai == shu)
		{
			system("cls");
			printf("�¶���\n");
			Sleep(3000);
			system("cls");
			break;
		}
		else if (cai > shu)
		{
			printf("�´���\n");
			scanf("%d", &cai);
		}
		else
		{
			printf("��С��\n");
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
		printf("��ѡ��");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		default:
			printf("��������ȷѡ��:>\n");
			break;
		case 0:
			break;
		}
	} while (a);
	return 0;
}