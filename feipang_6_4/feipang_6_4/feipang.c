#define _CRT_SECURE_NO_WARNINGS 1
//BMI ָ���ǹ����ϳ��õĺ����������ݳ̶ȵ�һ����׼�����㷨�� m / h ^ 2(40\le m \le 120, 1.4 \le h \le 2.0)m / h
//2
//(40��m��120, 1.4��h��2.0)������ mm ��ָ���أ�ǧ�ˣ���hh ��ָ���ߣ��ף�����ͬ���ͷ�Χ���ж�������£�
//
//С�� 18.5�����ع��ᣬ��� Underweight��
//���ڵ��� 18.5 ��С�� 24���������أ���� Normal��
//���ڵ��� 24�����֣�����Ҫ��� BMI ֵ��ʹ�� cout ��Ĭ�Ͼ��ȣ���Ȼ���У���Ҫ��� Overweight��
//���ڸ������غ��������ݣ���Ҫ���� BMI ָ���ж�����״̬�������Ӧ���жϡ�
//
//���ڷ� C++ ���ԣ������ʱ�����������뱣����λ��Ч������������С�����ִ��ں�׺ 00����Ҫ�����׺ 00��
//
//��ע�⣬������λ��Ч���ֲ��Ǳ�����λС�������� 114.5149114.5149 Ӧ�����Ϊ 114.515114.515��9198.109198.10 Ӧ�����Ϊ 9198.19198.1��


#include <Windows.h>
#include <stdio.h>
int main()
{
	float m, h, BMI;
	scanf("%f%f", &m, &h);
	BMI = m / (h*h);
	if (BMI < 18.5)
	{
		printf("Underweight");
	}
	else if (BMI >= 18.5&&BMI < 24)
	{
		printf("Normal");
	}
	else
	{
		printf("%.6g\nOverweight",BMI);//%.6g ��ʾ����6λ��Ч���֣��ҵ�С��ĩβΪ��ʱ�Զ�ɾ����
	}
	system("pause");
	return 0;
}