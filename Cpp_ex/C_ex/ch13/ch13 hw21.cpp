#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 21
		��ƪ��ϥ� 
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
