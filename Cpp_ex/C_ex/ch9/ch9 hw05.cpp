#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 5
	�T����ƪ����פέȳ��ݭn double ���A 
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
