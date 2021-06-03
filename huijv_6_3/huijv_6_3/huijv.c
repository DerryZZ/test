#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	char str1[] = "hello world!!!"; 
	char str2[] = "##############";
	int zuo = 0, you = (sizeof(str2) / sizeof(str2[0]))-2;
	do
	{
		str2[zuo] = str1[zuo];
		str2[you] = str1[you];
		printf("%s\n", str2);
		zuo++;
		you--;
	} while (zuo <= you);
	system("pause");
	return 0;
}