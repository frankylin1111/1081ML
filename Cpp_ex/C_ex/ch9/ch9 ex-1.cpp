#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- example 1 
*/
int main()
{
	double x,d,l,pi;
	
	pi = 3.14159;
	l=20,d=25;
	
	x=l * tan(d/180 *pi);
	
	printf("%f m\n" ,x); 
}