#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- HW 8
	����\�l��\����  0~90�׭Ȫ� 
*/
int main()
{
	double x,pi;
	
	pi = 3.14159;
	x=0;
	printf("    ����sin       �l��cos     ����tan\n" );
	for (int i = 0;i<91;i++)
	{
		printf("%d��   ",i);
		printf("%f   %f   ",sin(x/180*pi),cos(x/180*pi));
		if (tan(x/180*pi)<=1)
		    printf("   %6.2f\n",tan(x/180*pi));
		else
		    printf("\n");
		x++;
	} 
	
	
	 
}
