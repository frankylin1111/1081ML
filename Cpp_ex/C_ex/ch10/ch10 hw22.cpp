#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 22 
*/
int main()
{
	int p,d,e;
	p = getchar();
	d = isupper(p);
	e = islower(p);
	if (d!=0)
	    printf("%c",tolower(p));
	else if (e!=0)
	    printf("%c",toupper(p));
	else
	    printf("not alpha!");
}
