#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����
//����n(1\le n\le13)n(1��n��13)�������һ��ֱ�Ǳ߳����� nn ������ֱ�������Ρ��������ֶ��� 2 λ��ɵģ����û�� 2 λ�����ǰ�� 0��

#include<stdio.h>
int main()
{

	int n, i = 1, j, a = 1;
	scanf("%d", &n);
	j = n;
	for (a = 1; a<=n; a++)
	{
		
		while (i <= j)
		{
			if (i <= 9)
				printf("0%d", i);
			else if (i>9)
				printf("%d", i);

			i++;
		}
		printf("\n");
		j = j + n - a;
	}
	return 0;
}