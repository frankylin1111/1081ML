#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 9
		��ƪ��I�s 
*/

int total(int x1,int y1)
{

	int z1;
	z1 = x1 + y1;
	return z1;
}

int cross(int x1,int y1)
{
	int z1;
	z1 = x1 - y1;
	return z1;
}
int main()
{
	int w =3,x=5,y=6;
	printf("�ۥ[:%d\n�۴�:%d\n�ۭ��᪺���G��:%d",total(w,x),cross(x,y),
	total(w,x)*cross(x,y));
}
