#include <stdio.h>
#include <stdlib.h>
/*
    心得 2018/06/09  
	chapter 7.資料輸入--------example 4
	    char a[10]  // scanf (".....",a)  a 不需要取位址.
*/
int main()
{
	float a[10];
	scanf("%8s",a);
	printf("%s \n",a);
}
