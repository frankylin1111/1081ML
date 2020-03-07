#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ example 5
		陣列與指標
		字元指標陣列
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
