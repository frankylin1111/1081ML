#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 1 
*/
int main()
{
	double x,d,l,pi;
	
	pi = 3.14159;
	l=100,d=10;
	
	x=l * tan(d/180 *pi);
	
	printf("%f m\n" ,x); 
}
