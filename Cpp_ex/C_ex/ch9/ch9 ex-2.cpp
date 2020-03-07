#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- example 2
	
	sqrt 平方根的用法
	pow  次方的用法 
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
