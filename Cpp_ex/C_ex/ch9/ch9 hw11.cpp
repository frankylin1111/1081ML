#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 11 
*/
int main()
{
	double a,b,c,tot;
	a=0.055,b=50,c=5;
	tot = b * pow(1+a,c);
	
	printf("NT$ %f \n" ,tot); 
}
