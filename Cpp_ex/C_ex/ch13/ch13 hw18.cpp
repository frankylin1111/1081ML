#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 み眔
		ch13 ㄧ计 ------------------ HW 18
		ㄧ计ㄏノ 
*/

void swap (int *x,int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a=3,b=4,C=2;
	printf("ユ传玡->a=%d,b=%d,C=%d\n",a,b,C);
	swap(&a,&b);
	swap(&a,&C);
	printf("ユ传->a=%d,b=%d,C=%d\n",a,b,C);
}
