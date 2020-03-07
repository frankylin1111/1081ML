#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 14
		函數的使用 
*/

void sub(int x1,int y1,int *z1)
{
	*z1 = x1 -y1;
}
int main()
{
	int x =1,y =2,z;
	sub(x,y,&z); // 取記憶體位址 
	printf("x=%d,y=%d,z=%d\n",x,y,z);
}
