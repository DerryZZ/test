#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	int queren = 0;
	int txt = 0;
	char mima[20] = { 0 };
	printf("���������룺");
	scanf("%s", &mima);//���������mima
	printf("������%s\n", mima);
	while ((txt = getchar()) != '\n')//����������ַ���ֱ������\n    ȷ����һ��getchar����������
	{
		putchar(txt);
		printf("���Ե���\n");//��֤һ��ÿ�ζ���ʲô
	}
	printf("�Ƿ�ȷ�ϣ�Y\\N)\n");
	queren = getchar();//����Y/N
	if (queren == 'Y')
	{
		printf("�ɹ�\n");
	}
	else
	{
		printf("ȡ��\n");
	}
	system("pause");
	return 0;
}