#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 19
		��ƪ��ϥ� 
*/

int trip(int x)
{
	int s;
	s = (x * x) * x;
	return s;
}
int main()
{
	int x=5,y=3,Z=7;
	printf("x^3=%d\ny^3=%d\nZ^3=%d\n",trip(x),trip(y),trip(Z));
}
