#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 3 
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
