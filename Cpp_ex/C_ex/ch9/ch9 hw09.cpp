#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 9
	���s���� sqrt���Ϊk 
*/
int main()
{
	double a,b,c,s;
	a=50,b=70,c=100;
	s=(a+b+c)/2;
	
	printf("%f m\n" ,sqrt(s*(s-a)*(s-b)*(s-c))); 
}
