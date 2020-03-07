#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 19
		函數的使用 
*/

int trip(int x)
{
	int s;
	s = (x * x) * x;
	return s;
}
int main()
{
	int x=5,y=3,Z=7;
	printf("x^3=%d\ny^3=%d\nZ^3=%d\n",trip(x),trip(y),trip(Z));
}
