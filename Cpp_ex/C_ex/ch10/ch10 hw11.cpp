#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 11
	輸入一行字串 , 計算0~9出現的次數並輸出 
*/

int main()
{
	int i = 0;
	int a;
	while ((a=getchar()) != 10)
	{
		switch(a)
		{
		    case 48 ...57:
			    i++;
			    break;
			default:
			    break; 
		}
			
    }
    printf("%d",i);
}
