#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 ¤ß±o
		ch11 °}¦C ------------------ HW 2 
*/

int main()
{
	int a[4],sum;
	a[0]=3;
	a[1]=7;
	a[2]=4;
	a[3]=2;
	for (int i=0;i<4;i++)
	{
		sum+=a[i];
		if (a[i]!=2)
		    printf("%d+",a[i]);
		else
		    printf("%d",a[i]);
	}
	printf("=%d",sum);
}
