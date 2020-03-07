#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 24 
*/
int main()
{
	int p,d,e;
	p = getchar();
	d = isupper(p);
	if (d!=0)
	    printf("%c",p);
}
