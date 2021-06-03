#define _CRT_SECURE_NO_WARNINGS 1

//yyy 的学校要求早上 8 点前到达。学校到 yyy 的家一共有 s(s\le 10000)s(s≤10000) 米，而 yyy 可以以 v(v<10000)v(v<10000) 米每分钟的速度匀速走到学校。
//此外在上学路上它还要额外花 10 分钟时间进行垃圾分类。请问为了避免迟到 yyy 最晚什么时候出门？
//输出 HH : MM 的时间格式，不足两位时补零。由于路途遥远， yyy 可能不得不提前一天出发，不过不可能提前超过一天。


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
			printf("请输入正确的S,V:\n");
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
			printf("请输入正确的S,V:\n");
		}
	}

	return 0;
}