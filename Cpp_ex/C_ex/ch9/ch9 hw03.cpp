#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 3 
*/
int main()
{
	double l1,d,l2,pi;
	
	pi = 3.14159;
	l1=500,l2=200;
	
	d=atan(l2/l1);
	
	printf("%f deg\n" ,d/pi *180); 
}
