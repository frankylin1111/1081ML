#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch13 ��� ------------------ HW 5
		��ƪ��I�s 
*/
int m(int x1,int y1)
{
	int total;
	total = (x1 * x1)+y1;
	return total;
}
int main()
{
	int x =7,y=16;
	printf("((x * x)+y)/5=%d\n",m(x,y)/5);
}
