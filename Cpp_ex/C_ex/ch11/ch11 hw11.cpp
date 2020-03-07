#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 ¤ß±o
		ch11 °}¦C ------------------ HW 11 
*/

int main()
{
	int a[4][2];
	a[0][0]=97,a[0][1]=1985;
	a[1][0]=98,a[1][1]=1712;
	a[2][0]=99,a[2][1]=1600;
	a[3][0]=100,a[3][1]=1200;
	for (int i=0;i<4;i++)
	{
		printf("%c  %d\n",(char) a[i][0],a[i][1]);
	}
}
