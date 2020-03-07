#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 25 
*/
int main()
{
	int d,i=0;
	char *p = "Fortran Program";
	for (i=0;i<16;i++)
	{
		d = isupper(*(p+i));
		if (d!=0)
	        printf("%c",*(p+i));
	}
}
