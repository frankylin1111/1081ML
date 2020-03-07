#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 7 
*/
int main()
{
	double x,h,l,pi;
	
	pi = 3.14159;
	x=30,l=16.8;
	
	h=l * tan(x/180 *pi);
	
	printf("%5.2f m\n" ,h); 
}
