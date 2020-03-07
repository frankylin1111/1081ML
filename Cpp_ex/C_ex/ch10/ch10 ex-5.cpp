#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- example 5 
	
*/
int main()
{
	char *k;
	char p1[20],p2[20];
// ------- 字串連結及拷貝--------- 
	k = "Word=";
	gets(p2);
	strcpy(p1,k);
	strcat(p1,p2);
	
	puts(p1);
}
