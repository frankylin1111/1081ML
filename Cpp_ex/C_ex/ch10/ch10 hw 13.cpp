#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 13 
	
*/
int main()
{
	int k;
	char p1[20];
// ------- 計算字串長度--------- 
	
	gets(p1);
	k=strlen(p1);
	
	printf("%d",k);
}
