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
	int a= 100,b= 200;
	x=&a;
	y=&b;
	printf("%d \n",*x*(*y));
	
	return 0;
} 
