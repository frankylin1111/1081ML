#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 18
		��ƪ��ϥ� 
*/

void swap (int *x,int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a=3,b=4,C=2;
	printf("�洫�e->a=%d,b=%d,C=%d\n",a,b,C);
	swap(&a,&b);
	swap(&a,&C);
	printf("�洫��->a=%d,b=%d,C=%d\n",a,b,C);
}
