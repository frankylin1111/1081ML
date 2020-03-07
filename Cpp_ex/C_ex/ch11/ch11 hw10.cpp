#include <stdio.h>
#include <cstdlib>
#include <cstring> 
#include <ctype.h>
/*
        2018/07/01 心得
		ch11 陣列 ------------------ HW 10
		使用字元陣列列出字元之五 
*/

int main()
{
	char a[3][5]={{'B','A','S','I','C'},{'P','L','O','N','E'},{'C','O','B','O','L'}};
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%3c",a[j][i]);
		}
		printf("\n");
	}
}
