#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 23
		函數的使用 
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
