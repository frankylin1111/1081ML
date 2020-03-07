#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 み眔
		ch13 ㄧ计 ------------------ HW 16
		ㄧ计ㄏノ 
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
	char a='P',b='C';
	printf("ユ传玡->a=%c,b=%c\n",a,b);
	swap(&a,&b);
	printf("ユ传->a=%c,b=%c\n",a,b);
}
