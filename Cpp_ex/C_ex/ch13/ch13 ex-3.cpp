#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch13 ��� ------------------ example 3
		��ƪ��ϥ� 
*/
// �ѼƬ����Ъ���� 
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
	printf("�洫��-> a=%d,b=%d\n",a,b);
}

