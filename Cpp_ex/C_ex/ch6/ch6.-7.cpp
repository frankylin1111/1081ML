// #include <iostream>
// #include <cstdlib>
// #include <string>
#include <stdlib.h>
#include <stdio.h>

// using namespace std;
/*
    �߱o 2018/06/08
    homework: chapter 6 ------ 6-6. 
  */
int main()
{
	int *x,*y;
	int a= 5,b=3;
	x =&a;
	y =&b;
	printf("%d \n" ,abs(*x-*y));
	
	return 0;
} 
