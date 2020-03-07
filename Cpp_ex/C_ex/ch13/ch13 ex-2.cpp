#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ example 2
		函數的呼叫 
*/
 
int a(int xx,int yy)
{
	int z = xx + yy;
	return z;
}
int main()
{
	int x=5,y=5;
	printf("值:%d\n",a(x,y));
}

