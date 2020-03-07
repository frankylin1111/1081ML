#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 8
    輸入一連串的字元,直到輸入為'A'時 停止輸入 
*/

int main()
{
	int a,i=0;
	while(1)
	{
		if ((a = getche())== 65) 
		{
		    break;
		}
		
		i++;
		
	}
	printf("\n總數: %d",i); 
}
