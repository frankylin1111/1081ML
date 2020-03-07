#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- example 5
	
	ldexp 的用法 
*/
int main()
{
	double x;
	int y;
	x=18.6;
	y=5;
	printf("%5.1f\n" ,ldexp(x,y));
}
