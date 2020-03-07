#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ HW 6
		函數的呼叫 
*/
double a(double x1,double y1)
{
	double total;
	total = x1 + y1;
	return total;
}
int main()
{
	double x =3,y=4;
	printf("sqrt(x+y)=%4.2f\n",sqrt(a(x,y)));
}
