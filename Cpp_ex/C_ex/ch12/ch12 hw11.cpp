#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 11 
		結構的使用方法 
*/

int main()
{
	struct s
    {
	    char size;
    }s[]={'L','M','S'};
    for (int i=0;i<3;i++)
    {
    	printf("size%d->%c\n",i+1,s[i]);
	}
}
