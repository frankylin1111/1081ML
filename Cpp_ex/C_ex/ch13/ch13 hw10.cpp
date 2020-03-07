#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 10
		子函數的加減乘除 
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
	printf("相加:%d\n相減:%d\n相乘:%d\n相除:%3.1f\n",total(x,y),sub(x,y),mult(x,y),
	_div(x,y));
}
