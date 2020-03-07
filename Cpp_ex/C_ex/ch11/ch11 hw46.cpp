#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 46
		陣列與指標
		字元指標陣列
*/

int main()
{
	char *p,x[] = "Language";
	p =x; // 指向記憶體的首位址 !!         
	for (p=x;p<x+8;p++)
	{
		printf("%s\n",p);
	}
}
