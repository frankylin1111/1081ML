#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 ¤ß±o
		ch11 °}¦C ------------------ HW 5 
*/

int main()
{
	int a[6]={5,7,2,1,9,8},b[6]={6,4,2,3,7,4},c[6];
	for (int i=0;i<6;i++)
	{
		c[i]=a[i]*b[i];
		printf("%3d",c[i]);
	}
}
