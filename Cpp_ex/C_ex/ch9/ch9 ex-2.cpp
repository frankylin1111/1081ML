#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- example 2
	
	sqrt ����ڪ��Ϊk
	pow  ���誺�Ϊk 
*/
int main()
{
	double area,s,r,pi;
	double x1=2,x2=6,ans;
	pi = 3.14159;
	s=100;
	r = sqrt(s/pi);
	ans=pow(x1,x2);
	printf("%f m\n" ,r);
	printf("%f\n" ,ans); 
}
