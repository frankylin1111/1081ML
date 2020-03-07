#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 ¤ß±o
		ch11 °}¦C ------------------ HW 12 
*/

int main()
{
	int a[4][2];
	a[0][0]=97,a[0][1]=1985;
	a[1][0]=98,a[1][1]=1712;
	a[2][0]=99,a[2][1]=1600;
	a[3][0]=100,a[3][1]=1200;
	
	printf("%c+%c=%d\n",(char) a[0][0],(char) a[1][0],a[0][1]+a[1][1]);
	printf("%c+%c=%d\n",(char) a[2][0],(char) a[3][0],a[2][1]+a[3][1]);
	printf("%c+%c=%d\n",(char) a[0][0],(char) a[3][0],a[0][1]+a[3][1]);
	printf("%c+%c=%d\n",(char) a[1][0],(char) a[2][0],a[1][1]+a[2][1]);
	
}
