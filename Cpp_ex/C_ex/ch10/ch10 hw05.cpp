#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 5
	getche() and getch() 的標頭檔為 conio.h 
*/
int main()
{
	int c,i=0;
	while (1)
	{
		
	    if ((c=getch()) == 48)
	        break;
		putchar(c);
		i++;
		if (i==7)
		{
			i=0;
			printf("\n");
		}  
		 
	}
	
}
