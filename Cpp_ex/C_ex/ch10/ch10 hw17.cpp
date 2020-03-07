#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 17 
	
*/
int main()
{
	int k;
	char p1[20],p2[20];
	gets(p1);
	gets(p2);
// ------- 比較字串是否相同 ---------
	k = strcmp(p1,p2);
// ------- if....else..的用法 ---------- 
	(k == 0)?(printf("=")):(printf("not equal"));
	
}
