#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch13 ��� ------------------ HW 6
		��ƪ��I�s 
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
