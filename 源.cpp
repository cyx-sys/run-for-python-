#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main(int agrc, char* agrv[])
{
	char a[100] = { '\0' };
	SetConsoleTitle(TEXT("python���м�����"));
	printf("���ڴ˴���������Ҫ��������python�ļ����ļ�·��,��.......1.py\n");
	int m = 0, n = 0;
	SetConsoleTitle(TEXT("python���м����� ------��������Ҫ�������е��ļ�·��"));
	while (m == 0 && n < 100)
	{
		scanf_s("%c", &a[n]);
		if (a[n] == '\n')
		{
			m++;
		}
		n++;
	}
	SetConsoleTitle(TEXT("python���м����� ------����׼�����٣����Ժ�"));
	FILE* f1 = fopen("1.cmd", "a");
	m = 0;
	fprintf(f1, "echo off\n");
	fprintf(f1, "python ");
	while (m < n)
	{
		fprintf(f1, "%c", a[m]);
		m++;
	}
	fflush(f1);
	SetConsoleTitle(TEXT("python���м����� ------python����ģ��������ɣ�׼��ִ��ָ��"));
	Sleep(1000);
	SetConsoleTitle(TEXT("python���м����� ------����ִ��ָ��,����ʹ��Crtl+C or break,�����ʹ�����쳣"));
	system("1.cmd");
	SetConsoleTitle(TEXT("python���м����� ------����ִ��ָ��"));
	printf("�����������\n");
	SetConsoleTitle(TEXT("python���м����� ------����ɾ����ʱ�ļ�"));
	FILE* f2 = fopen("1.cmd", "w");
	fprintf(f2, "");
	SetConsoleTitle(TEXT("python���м����� ------����ɾ����ʱ�ļ�"));
	SetConsoleTitle(TEXT("python���м����� ------����ִ�����"));
	system("pause");
	return 0;
}