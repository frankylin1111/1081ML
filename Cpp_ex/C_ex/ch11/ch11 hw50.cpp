#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 50
		陣列與指標
		字元指標陣列
*/

int main()
{
	int n;
	char a[]="7694" ;
	for (int i=0;i<4;i++)
	{
		n = 10 * n +a[i]-'0'; // 轉換成ANSCII碼相減 
	}
	printf("數字為:%d",n);
}
