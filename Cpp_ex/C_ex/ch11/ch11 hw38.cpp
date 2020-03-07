#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 38
		陣列與指標
		字元指標陣列
*/

int main()
{
	char b[] ="Fortran";
	char *p;
	p = b;
	printf("%c%c",*(p+5),*(p+6));
}
