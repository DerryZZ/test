#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 0;
	char mima[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë\n");
		scanf("%s",mima);
		if (strcmp(mima, "123456") == 0)
		{
			printf("ÃÜÂëÕýÈ·\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
		
	}
	Sleep(3000);
	return 0;
}