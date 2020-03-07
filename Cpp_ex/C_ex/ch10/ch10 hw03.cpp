#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 3 
*/
int main()
{
	int a,b,c,d;
	a=getchar();
	b=getchar();
// -------- <ctype.h> ------------	
	c=tolower(a);
	d=toupper(b);
	
	putchar(c);
	putchar(d);
}
