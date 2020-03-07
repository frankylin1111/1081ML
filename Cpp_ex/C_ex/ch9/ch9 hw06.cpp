#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 6
*/
int main()
{
	double x,d,l,pi,area;
	
	pi = 3.14159;
	x=30,l=16.8;
	d = l *(1/cos(x/180 * pi));
	area = ((d/2) * (d/2)) * pi;
	printf("%f m^2\n" ,area); 
}
