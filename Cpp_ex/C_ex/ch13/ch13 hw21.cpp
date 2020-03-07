#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 21
		函數的使用 
*/

int l(int m,int n)
{
    int s=1;
	for (int i=n;i>0;i--)
	{
		s = s * m;
	}
	return s;
}
int main()
{
	int x=3,y=9;
	printf("3^9=%d\n",l(x,y));
}
