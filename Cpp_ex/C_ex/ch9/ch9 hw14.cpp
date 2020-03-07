#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 14
*/
int main()
{
	double x,y,d;
	x=3.867,y=2.8;
	d=x * y;
// --------- 四捨五入取整數 ------------- 
	printf(" %f \n" ,floor(d+0.5));
}
