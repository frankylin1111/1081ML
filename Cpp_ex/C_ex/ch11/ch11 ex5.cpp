#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ example 5
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	int i;
	char *p;
	
	p = "C Language";
	for (i=0;i<10;i+=2)
	    printf("%c",p[i]);
	    
	printf("\n");
}
