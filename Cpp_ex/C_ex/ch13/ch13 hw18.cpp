#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 18
		函數的使用 
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
	printf("交換前->a=%d,b=%d,C=%d\n",a,b,C);
	swap(&a,&b);
	swap(&a,&C);
	printf("交換後->a=%d,b=%d,C=%d\n",a,b,C);
}
