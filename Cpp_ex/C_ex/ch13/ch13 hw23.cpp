#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 23
		��ƪ��ϥ� 
*/

void cc(char *p,char *q)
{
	char a[100];
	int n=0;
	for (int i=0;*(p+i)!='\0';i++)
	{
		a[i]= *(p+i);
		n++;
	}
	for (int j = 0;*(q+j)!='\0';j++)
	{
		a[n] = *(q+j);
		n++;
	}
	printf("a[]=%s,n=%d",a,n);
}
int main()
{
	char c[]="ABCDE",b[]="FGHIJKL";
	cc(c,b);
}
