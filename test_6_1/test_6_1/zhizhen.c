#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
//更改字符串
//int main()
//{
//	char a[] = "abc";
//	strcpy(a, "cba");
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}


//指针
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


//结构体
struct chengji
{
	char xingming[5];//姓名
	int nianji;     //年级
	char xuehao[13];//学号
	int paiming;    //排名
};
int main()
{
	struct chengji x1 = {"小张",2019,"201900000001",1};
	printf("姓名：%s\n", x1.xingming);
	printf("年级：%d\n", x1.nianji);
	printf("学号：%s\n", x1.xuehao);
	strcpy(x1.xuehao, "201900000002");//更改学号字符串
	printf("更改后学号：%s\n", x1.xuehao);
	printf("排名：%d\n", x1.paiming);
	x1.paiming = 2;//更改排名为第二名
	printf("更改后排名：%d\n", x1.paiming);
	system("pause");
	return 0;
}