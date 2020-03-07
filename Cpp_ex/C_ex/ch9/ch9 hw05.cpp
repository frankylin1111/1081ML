#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 5
	三角函數的答案及值都需要 double 型態 
*/
int main()
{
	double x1,h,x2,pi;
	
	pi = 3.14159;
	x1=15,x2=5;
	double a1 =cos(x1/180*pi);
	double a2 =2 * cos(x2/180*pi);
	h=(a1-a2)/(a1 + a2);
	
	printf("%f m\n" ,h); 
}
