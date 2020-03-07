#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ HW 3
		函數的呼叫 
*/
int a(int x1,int y1)
{
	int total;
	total = x1 * y1;
	return total;
}
int main()
{
	int x =100,y=200;
	printf("CROSS=%d\n",a(x,y));
}
