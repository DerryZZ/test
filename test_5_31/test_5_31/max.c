#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
//����
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//��
#define Max(x,y) (x>y?x:y)//��Max(x,y)�滻Ϊ(x>y?x:y)
int main()
{
	int a = 0;
	int b = 0;
	int ����max = 0;
	int ��max = 0;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	//����
	����max = MAX(a, b);
	printf("max = %d\n", ����max);
	//��
	��max = Max(a, b);//man = Max(x,b) = (a>b?x:y)
	printf("max = %d\n", ��max);
	system("pause");
	return 0;
}