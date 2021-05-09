#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main(int agrc, char* agrv[])
{
	char a[100] = { '\0' };
	SetConsoleTitle(TEXT("python运行加速器"));
	printf("请在此处输入您想要加速运行python文件的文件路径,如.......1.py\n");
	int m = 0, n = 0;
	SetConsoleTitle(TEXT("python运行加速器 ------请输入想要加速运行的文件路径"));
	while (m == 0 && n < 100)
	{
		scanf_s("%c", &a[n]);
		if (a[n] == '\n')
		{
			m++;
		}
		n++;
	}
	SetConsoleTitle(TEXT("python运行加速器 ------正在准备加速，请稍后"));
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
	SetConsoleTitle(TEXT("python运行加速器 ------python加速模块启动完成，准备执行指令"));
	Sleep(1000);
	SetConsoleTitle(TEXT("python运行加速器 ------正在执行指令,请勿使用Crtl+C or break,否则会使程序异常"));
	system("1.cmd");
	SetConsoleTitle(TEXT("python运行加速器 ------正在执行指令"));
	printf("程序运行完成\n");
	SetConsoleTitle(TEXT("python运行加速器 ------正在删除临时文件"));
	FILE* f2 = fopen("1.cmd", "w");
	fprintf(f2, "");
	SetConsoleTitle(TEXT("python运行加速器 ------正在删除临时文件"));
	SetConsoleTitle(TEXT("python运行加速器 ------程序执行完成"));
	system("pause");
	return 0;
}