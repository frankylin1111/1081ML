#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 19
		
*/

int main()
{
	char q[4],a[3][3];
	a[0][0]='x',a[0][1]='h',a[0][2]='a';
	a[1][0]='g',a[1][1]='y',a[1][2]='k';
	a[2][0]='I',a[2][1]='p',a[2][2]='e';
	
	printf("%c %c %c",a[0][0],a[1][1],a[2][2]);
}
