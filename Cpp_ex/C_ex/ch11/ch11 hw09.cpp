#include <stdio.h>
#include <cstdlib>
#include <cstring> 
#include <ctype.h>
/*
        2018/07/01 心得
		ch11 陣列 ------------------ HW 8
		使用字元陣列列出字元之四 
		大寫字母變小寫字母 
*/

int main()
{
	char a[3][5]={{'B','A','S','I','C'},{'P','L','O','N','E'},{'C','O','B','O','L'}};
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			a[i][j] = (char) tolower(a[i][j]);
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
