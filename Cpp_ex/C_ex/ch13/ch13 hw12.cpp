#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 13
		��ƪ��ϥ� 
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
