#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 ¤ß±o
		ch11 °}¦C ------------------ HW 1 
*/

int main()
{
	int a[4],sum;
	a[0]=1;
	a[1]=5;
	a[2]=7;
	a[3]=4;
	for (int i=0;i<4;i++)
	{
		sum+=a[i];
		if (a[i]!=4)
		    printf("%d+",a[i]);
		else
		    printf("%d",a[i]);
	}
	printf("=%d",sum);
}
