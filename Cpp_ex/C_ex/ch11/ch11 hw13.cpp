#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 �߱o
		ch11 �}�C ------------------ HW 12 
*/

int main()
{
	int a[4][4];
	a[0][0]=3,a[0][1]=6,a[0][2]=2,a[0][3]=1;
	a[1][0]=3,a[1][1]=9,a[1][2]=0,a[1][3]=8;
	a[2][0]=2,a[2][1]=1,a[2][2]=5,a[2][3]=6;
	a[3][0]=7,a[3][1]=2,a[3][2]=7,a[3][3]=4;
	
	for (int i=0;i<4;i++)
	{
		printf("%3d\n",a[i][i]);
	}
	
}
