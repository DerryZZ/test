#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	char ch;
	int a = 0;
	printf("������һ��Сд��ĸ")��
	scanf("%c", &ch);
	a = ch-32;//Сд�Ĵ�д
	printf("%c", a);
	system("pause");
	return 0;
}