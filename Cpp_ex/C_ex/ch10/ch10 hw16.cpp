#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 16 
	
*/
int main()
{
	int i = 0;
	char p1[20];
// ------- 是輸入一字串,並輸出此字串中間的字元--------- 
    gets(p1);
    while (p1[i] !='\0')
    {
    	i++;
	}
	i = i/2;
	printf("%c",p1[i]);
}
