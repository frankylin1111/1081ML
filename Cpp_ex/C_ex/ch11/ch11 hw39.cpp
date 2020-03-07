#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 39
		陣列與指標
		字元指標陣列
*/

int main()
{
	char b[] ="BASIC PROGRAM";
	char *p;
	p = b;
	printf("%c%c",*p,*(p+12));
}
