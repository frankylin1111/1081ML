#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 19 
	
*/
int main()
{
	int k;
	char p1[20],p2[20];
	gets(p1);
	gets(p2);
// ------- 兩字串連結 ---------
    strcat(p1,p2);
    puts(p1);
	
}
