#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 16
		��ƪ��ϥ� 
*/

swap (char *x,char *y)
{
	char t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	char a='P',b='C';
	printf("�洫�e->a=%c,b=%c\n",a,b);
	swap(&a,&b);
	printf("�洫��->a=%c,b=%c\n",a,b);
}
