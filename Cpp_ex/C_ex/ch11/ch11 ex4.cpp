#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ example 4
		陣列與指標
		字元指標陣列 
*/

int main()
{
	static char x[] = "Language";
	char *p;
	p = x;
	for (p=x;p<x+8;p++) // 記憶體位址給予 int  
	{
		putchar(*p);  //從字母的ANSCII碼轉換 
		printf("%d\n",*p);  // 記憶體位址 
	}
	printf("\n");
} 
