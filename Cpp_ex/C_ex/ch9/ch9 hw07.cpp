#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 7 
*/
int main()
{
	double x,h,l,pi;
	
	pi = 3.14159;
	x=30,l=16.8;
	
	h=l * tan(x/180 *pi);
	
	printf("%5.2f m\n" ,h); 
}
