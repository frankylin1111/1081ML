#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 9
    輸入三個字元 , 在輸出三個字元 . 
*/

int main()
{
	int i = 0;
	char a[3];
	while (i<3)
	{
	    a[i] = getchar();
		i++; 
	}
	printf("%c%c%c",a[0],a[1],a[2]);
}
