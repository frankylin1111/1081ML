#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 9
		函數的呼叫 
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
	printf("相加:%d\n相減:%d\n相乘後的結果為:%d",total(w,x),cross(x,y),
	total(w,x)*cross(x,y));
}
