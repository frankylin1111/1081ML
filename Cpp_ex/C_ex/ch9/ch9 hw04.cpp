#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 4 
*/
int main()
{
	double x1,h,x2,pi;
	
	pi = 3.14159;
	x1=50,x2=20;
	
	h=(100*sin(x2/180*pi)*cos(x1/180*pi))/sin((x1-x2)/180*pi);
	
	printf("%f m\n" ,h); 
}
