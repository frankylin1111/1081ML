#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch13 ��� ------------------ HW 4
		��ƪ��I�s 
*/
int a(int x1,int y1,int z1)
{
	int total;
	total = (x1 * y1)/z1;
	return total;
}
int main()
{
	int x =6,y=2,z=4;
	printf("6 * 2 / 4=%d\n",a(x,y,z));
}
