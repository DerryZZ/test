#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	int a;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int zuo = 0;
	int you = (sizeof (arr) / sizeof(arr[0])-1);
	int zhong =0;
	printf("请输入要找的数字：");
	scanf("%d", &a);
	while (zuo <= you)
	{
		zhong = (zuo + you) / 2;
		if (arr[zhong]<a)
		{
			zuo = zhong + 1;
		}
		else if (arr[zhong]>a)
		{
			you = zhong - 1;
		}
		else if (arr[zhong] = a)
		{
			printf("这个数的下标是：%d\n", zhong);
			break; 
		}
	}
	if (zuo > you)
	{
		printf("找不到。\n");
	}
	system("pause");
	return 0;
}