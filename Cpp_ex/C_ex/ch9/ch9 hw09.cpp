#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 9
	海龍公式 sqrt的用法 
*/
int main()
{
	double a,b,c,s;
	a=50,b=70,c=100;
	s=(a+b+c)/2;
	
	printf("%f m\n" ,sqrt(s*(s-a)*(s-b)*(s-c))); 
}
