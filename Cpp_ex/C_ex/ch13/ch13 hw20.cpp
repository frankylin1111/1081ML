#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 20
		函數的使用 
*/

int dou(int x)
{
	int s;
	s = x * x;
	return s;
}
int main()
{
	int x=5,y=6;
	printf("x^2+y^2=%d\n",dou(x)+dou(y));
}
