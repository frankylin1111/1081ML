#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 13
		函數的使用 
*/

float ar(int l,int h)
{
	int q;
	q = (l * h);
	return float (q)/2;
}
int main()
{
	int l = 10,h = 8;
	printf("area:%f",ar(l,h));
}
