#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 2
	getche() and getch() 的標頭檔為 conio.h 
*/
int main()
{
	int c;
	while (1)
	{
	    if ((c=getch()) == 48)
	        break;
		putchar(c);   
	}
	printf("\n");
}
