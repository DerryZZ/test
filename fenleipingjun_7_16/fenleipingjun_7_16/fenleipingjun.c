#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//���� n(n\le10000)n(n��10000) �� k(k\le 100)k(k��100)������ 1 �� nn ֮����������������Է�Ϊ���ࣺA �������Ա� kk ������Ҳ����˵�� kk �ı��������� B �������ܡ����������������ƽ��������ȷ��С����� 1 λ���ÿո������
//
//���ݱ�֤�������ĸ����������� 0��



#include<stdio.h>
int main()
{

	int i, n, k;
	double a, b, A = 0, B = 0, cs1 = 0, cs2 = 0;
	scanf("%d%d", &n, &k);
	for (i = k; i <= n; i += k)
	{
		A += i;
		cs1 += 1;
	}
	B = (((n + 1)*n) / 2) - A;
	cs2 = n - cs1;
	a = A / cs1;
	b = B / cs2;
	printf("%.1lf %.1lf", a, b);
	return 0;
} 