#include <stdio.h>
#include <cstdlib>
#include <cmath>
#define H char 
#define SIZE 10
/*
        2018/08/04 ------------�߱o 
		ch14 �e�ݳB�z�{�� ---------- example 5
		
*/



int main()
{
	int i;
	static H a[SIZE]={
	'a','b','c','d','e','f','g','h','i','j'};
	
	for (i=0;i<10;i++)
	    printf("%c",a[i]);
	    
	printf("\n");
}
