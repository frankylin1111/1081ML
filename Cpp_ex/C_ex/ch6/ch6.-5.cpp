// #include <iostream>
// #include <cstdlib>
// #include <string>
#include <stdlib.h>
#include <stdio.h>

// using namespace std;
/*
    ¤ß±o 2018/06/08
    homework: chapter 6 ------ 6-4. 
  */
int main()
{
	int *x,*y;
	int a= 100,b= 150;
	x=&a;
	y=&b;
	*x=*x+100;
	*y=*y+150;
	printf("%d,%d \n" ,*x,*y);
	
	return 0;
} 
