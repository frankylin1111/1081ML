#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 14
		��ƪ��ϥ� 
*/

void sub(int x1,int y1,int *z1)
{
	*z1 = x1 -y1;
}
int main()
{
	int x =1,y =2,z;
	sub(x,y,&z); // ���O�����} 
	printf("x=%d,y=%d,z=%d\n",x,y,z);
}
