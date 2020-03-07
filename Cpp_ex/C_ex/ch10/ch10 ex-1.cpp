#include <stdio.h>
#include <stdlib.h>

/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- example 1 
*/
int main()
{
	int c;
// ------- 先轉成 ASCII 碼 , 再轉換成相對應字元輸出 --------- 
	c=getchar();
	
	putchar(c);
	printf("%d \n",c);
}
