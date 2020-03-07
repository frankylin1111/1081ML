#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 15 
	
*/
int main()
{
	int i = 0;
	char p1[20];
// ------- 字串加上空格並輸出--------- 
    gets(p1);
    while (p1[i] !='\0')
    {
    	printf("%c ",p1[i]);
    	i++;
	}
}
