#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 17
		函數的使用 
*/

int lay(int x)
{
	int s=1;
	for (int i =x;i>0;i--)
	{
		s = s * i;
	}
	return s;
}
int main()
{
	int x=3,y=6;
	printf("3!+6!=%d\n",lay(x)+lay(y));
}
