#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 14 
	
*/
int main()
{
	int i,j;
	char p1[20],p2[20];
// ------- 必較2字串的長度--------- 
	
	gets(p1);
	gets(p2);
	i=strlen(p1);
	j=strlen(p2);
	if (i>j)
	{
		printf("較長的字串為:%s",p1);
	}
	else if (i<j)
	{
		printf("較長長字串為:%s",p2);
	}
	else
	{
		printf("都一樣:%s    %s",p1,p2);
	}
}
