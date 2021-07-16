#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//给出n(1\le n\le13)n(1≤n≤13)，请输出一个直角边长度是 nn 的数字直角三角形。所有数字都是 2 位组成的，如果没有 2 位则加上前导 0。

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