#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 11 
		���c���ϥΤ�k 
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
