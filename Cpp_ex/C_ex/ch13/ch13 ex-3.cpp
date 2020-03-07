#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 み眔
		ch13 ㄧ计 ------------------ example 3
		ㄧ计ㄏノ 
*/
// 把计夹ㄧ计 
void swap(int *x,int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a =5,b =10;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("ユ传-> a=%d,b=%d\n",a,b);
}

