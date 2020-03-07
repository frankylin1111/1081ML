#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 36
		陣列與指標
		字元指標陣列
*/

int main()
{
	char a[] = "Computer";
	char *p;
	p = a;
	for (p=a;p<a+8;p+=2)
	{
		putchar(*p);
	}
}
