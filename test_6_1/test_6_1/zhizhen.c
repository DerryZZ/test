#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
//�����ַ���
//int main()
//{
//	char a[] = "abc";
//	strcpy(a, "cba");
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}


//ָ��
//int main()
//{
//	char c = 'w';
//	long long b = 20;
//	char*c1 = &c;
//	long long*b1 = &b;
//	printf("c=%c\nb=%d\nc1=%p\nb1=%p\n", c, b, c1, b1);
//	printf("%d\n%d\n%d\n%d\n", sizeof(c),sizeof(b),sizeof(c1),sizeof(b1));
//	system("pause");
//	return 0;
//}


//�ṹ��
struct chengji
{
	char xingming[5];//����
	int nianji;     //�꼶
	char xuehao[13];//ѧ��
	int paiming;    //����
};
int main()
{
	struct chengji x1 = {"С��",2019,"201900000001",1};
	printf("������%s\n", x1.xingming);
	printf("�꼶��%d\n", x1.nianji);
	printf("ѧ�ţ�%s\n", x1.xuehao);
	strcpy(x1.xuehao, "201900000002");//����ѧ���ַ���
	printf("���ĺ�ѧ�ţ�%s\n", x1.xuehao);
	printf("������%d\n", x1.paiming);
	x1.paiming = 2;//��������Ϊ�ڶ���
	printf("���ĺ�������%d\n", x1.paiming);
	system("pause");
	return 0;
}