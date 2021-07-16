#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//给定 n(n\le10000)n(n≤10000) 和 k(k\le 100)k(k≤100)，将从 1 到 nn 之间的所有正整数可以分为两类：A 类数可以被 kk 整除（也就是说是 kk 的倍数），而 B 类数不能。请输出这两类数的平均数，精确到小数点后 1 位，用空格隔开。
//
//数据保证两类数的个数都不会是 0。



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