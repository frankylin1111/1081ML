#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 15
		函數的使用 
*/

swap (char *x,char *y)
{
	char t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	char a='A',b='B';
	printf("交換前->a=%c,b=%c\n",a,b);
	swap(&a,&b);
	printf("交換後->a=%c,b=%c\n",a,b);
}
