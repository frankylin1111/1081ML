#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/08/04 ¤ß±o
		ch15 ÀÉ®× -------------- HW 3 
*/

int main()
{
	int a[10],i=0;
	for (int j=0;j<2;j++)
	{
		scanf("%d     %d     %d     %d     %d",&a[j*5],&a[j*5+1],&a[j*5+2],&a[j*5+3],&a[j*5+4]);
	}
	for (int q=0;q<10;q++)
	{
		printf("%d     ",a[q]);
		if (q == 4)
		    printf("\n");
	}
	
}
