#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 37
		陣列與指標
		字元指標陣列
*/

int main()
{
	char a[] = "Program",b[] ="Fortran";
	char *p,*q;
	p = a;
	q = b;
	for (q=b;q<b+7;q++)
	{
		if (*q == *p)
		    printf("%c",*q);
		p++;
	}
	
}
