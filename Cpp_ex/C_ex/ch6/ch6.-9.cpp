// #include <iostream>
// #include <cstdlib>
// #include <string>
#include <stdlib.h>
#include <stdio.h>

// using namespace std;
/*
    ¤ß±o 2018/06/08
    homework: chapter 6 ------ 6-9. 
  */
int main()
{
	char *x,*y,*z,a='a',b='b',c='c';
	x =&a;
	y =&b;
	z =&c;
	printf("%c%c%c \n" ,*x,*y,*z);
	
	return 0;
} 
