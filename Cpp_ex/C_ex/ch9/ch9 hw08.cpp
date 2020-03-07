#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 8
	正弦\餘弦\正切  0~90度值表 
*/
int main()
{
	double x,pi;
	
	pi = 3.14159;
	x=0;
	printf("    正弦sin       餘弦cos     正切tan\n" );
	for (int i = 0;i<91;i++)
	{
		printf("%d度   ",i);
		printf("%f   %f   ",sin(x/180*pi),cos(x/180*pi));
		if (tan(x/180*pi)<=1)
		    printf("   %6.2f\n",tan(x/180*pi));
		else
		    printf("\n");
		x++;
	} 
	
	
	 
}
