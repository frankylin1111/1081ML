#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 11 
*/
int main()
{
	double a,b,c,tot;
	a=0.055,b=50,c=5;
	tot = b * pow(1+a,c);
	
	printf("NT$ %f \n" ,tot); 
}
