#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- example 3
	計算 50 的 30 次方的位數 
*/
int main()
{
	double a,b;
    int y;
    b =50;
    a =30*log10(b);
    y =a+1;
	printf("%d 位數\n" ,y); 
}
