#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 20
		��ƪ��ϥ� 
*/

int dou(int x)
{
	int s;
	s = x * x;
	return s;
}
int main()
{
	int x=5,y=6;
	printf("x^2+y^2=%d\n",dou(x)+dou(y));
}
