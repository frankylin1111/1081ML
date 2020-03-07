#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- example 6 
	是英文字元 Alpha 數字 Num 其他 0th 
*/
int main()
{
	int p,d,e;
	p = getchar();
	d = isalpha(p);
	e = isdigit(p);
	if (d!=0)
	    printf("Alph\n");
	else if(e!=0)
        printf("Num\n");
    else
        printf("0th\n");
}
