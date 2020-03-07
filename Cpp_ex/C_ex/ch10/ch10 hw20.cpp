#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    心得 2018/06/30
	chapter 10 字串操作函數 ------- HW 20 
	這題讓我學會 '字元指標 '可以被指定字串 '字元陣列'不行 
	若要字元陣列被儲存字串 , 必須使用strcat(指標,陣列)函數 . 
*/
int main()
{
	char p3[20],p1[20],*p2;
	gets(p1);
	p2 = "Country=";
// ------- 兩字串連結 ---------
    strcpy(p3,p2);
    strcat(p3,p1);
    puts(p3);
	
}
