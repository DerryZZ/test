#define _CRT_SECURE_NO_WARNINGS 1

//yyy ��ѧУҪ������ 8 ��ǰ���ѧУ�� yyy �ļ�һ���� s(s\le 10000)s(s��10000) �ף��� yyy ������ v(v<10000)v(v<10000) ��ÿ���ӵ��ٶ������ߵ�ѧУ��
//��������ѧ·������Ҫ���⻨ 10 ����ʱ������������ࡣ����Ϊ�˱���ٵ� yyy ����ʲôʱ����ţ�
//��� HH : MM ��ʱ���ʽ��������λʱ���㡣����·;ңԶ�� yyy ���ܲ��ò���ǰһ�������������������ǰ����һ�졣


#include <stdio.h>
int main()
{
	int s, v, t, a, b;
	scanf("%d%d", &s, &v);
	t = s / v;
	if (s%v == 0)
	{
		if (t <= 1440)
		{
			if (t <= 470)
			{
				a = (470 - t) / 60;
				b = (470 - t) % 60;
				if (b<10)
				{
					printf("0%d:0%d", a, b);
				}
				else if (b >= 10)
				{
					printf("0%d:%d", a, b);
				}
			}
			else if (t>470)
			{
				a = (1910 - t) / 60;
				b = (1910 - t) % 60;
				if (a < 10 && b < 10)
				{
					printf("0%d:0%d", a, b);
				}
				else if (a < 10 && b >= 10)
				{
					printf("0%d:%d", a, b);
				}
				else if (a >= 10 && b < 10)
				{
					printf("%d:0%d", a, b);
				}
				else if (a >= 10 && b >= 10)
				{
					printf("%d:%d", a, b);
				}
			}
		}
		else if (t>1440)
		{
			printf("��������ȷ��S,V:\n");
		}
	}
	else if (s%v != 0)
	{
		t++;
		if (t <= 1440)
		{
			if (t <= 470)
			{
				a = (470 - t) / 60;
				b = (470 - t) % 60;
				if (b<10)
				{
					printf("0%d:0%d", a, b);
				}
				else if (b >= 10)
				{
					printf("0%d:%d", a, b);
				}
			}
			else if (t>470)
			{
				a = (1910 - t) / 60;
				b = (1910 - t) % 60;
				if (a < 10 && b < 10)
				{
					printf("0%d:0%d", a, b);
				}
				else if (a < 10 && b >= 10)
				{
					printf("0%d:%d", a, b);
				}
				else if (a >= 10 && b < 10)
				{
					printf("%d:0%d", a, b);
				}
				else if (a >= 10 && b >= 10)
				{
					printf("%d:%d", a, b);
				}
			}
		}
		else if (t>1440)
		{
			printf("��������ȷ��S,V:\n");
		}
	}

	return 0;
}