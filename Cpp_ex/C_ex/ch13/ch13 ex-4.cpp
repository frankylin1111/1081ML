#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch13 ��� ------------------ example 4
		��ƪ��ϥ� 
*/
// ���Ш�� 
int add(int *p)
{
	int a;
	for (int i=0;i<4;i++,p++)
	{
		a+=*p;
	}
	*p =  a;
}
int main()
{
	static int s[5]={8,6,7,4,0};
	add(s);
	printf("SUM = %d\n",s[4]);
}
