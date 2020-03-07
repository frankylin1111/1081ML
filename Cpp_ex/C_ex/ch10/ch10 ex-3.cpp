#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- example 3 
	
*/
int main()
{
	int k;
	char p[20];
// ------- 計算字串長度 --------- 
	gets(p);
	k = strlen(p);
	printf("%d",k);
	
}
