#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 10
		�l��ƪ��[��� 
*/

int total(int x1,int y1)
{

	int z1;
	z1 = x1 + y1;
	return z1;
}

int sub(int x1,int y1)
{
	int z1;
	z1 = x1 - y1;
	return z1;
}

int mult(int x1,int y1)
{
	int z1;
	z1 = x1 * y1;
	return z1; 
}
float _div(int x1,int y1)
{
	float z1;
	z1 = x1 / y1;
	return z1;
}
int main()
{
	int x=18,y =9;
	printf("�ۥ[:%d\n�۴�:%d\n�ۭ�:%d\n�۰�:%3.1f\n",total(x,y),sub(x,y),mult(x,y),
	_div(x,y));
}
