#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- example 5
	
	ldexp ���Ϊk 
*/
int main()
{
	double x;
	int y;
	x=18.6;
	y=5;
	printf("%5.1f\n" ,ldexp(x,y));
}
