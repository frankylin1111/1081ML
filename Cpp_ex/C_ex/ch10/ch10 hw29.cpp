#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
#include <conio.h>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 29 
*/
int main()
{
	int x1=15,x2=115,sum=0;
	int d,e;
	d = isprint(x1);
	e = isprint(x2);
	if (d!=0)
	{
	    printf("%c",(char) x1);
	    if (e!=0)
	        printf("%c",(char) x2);
	}   
	else if(e!=0)
	{
	    printf("%c",(char) x2);
	    if (d!=0)
	        printf("%c",(char) x1);
	}  
	else
	    printf("no character!");  
}
