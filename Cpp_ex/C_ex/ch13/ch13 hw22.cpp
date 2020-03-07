#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 22
		函數的使用 
*/

void dec(char *p)
{
	printf("a[]=");
	for (int i=0;i<6;i++)
	{
		if (*(p+i) != 'c')
		    printf("%c",*(p+i));
	}
}
int main()
{
	char a[]="abcdef";
	dec(a);
}
