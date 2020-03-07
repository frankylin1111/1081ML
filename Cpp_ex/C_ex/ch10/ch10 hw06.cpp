#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 6
    請輸入五個字元後換行直到輸入 '0' 為止,並且讓兩個字元間有空格 
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
		if (i == 2 || i == 4)
		{
			printf(" ");
		}  
		else if (i==5)
		{
			i=0;
			printf("\n");
		}
	}
	
}
