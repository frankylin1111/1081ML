//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
#include <stdlib.h>
#include <stdio.h>
/*
�߱o 2018/06/02 
    �r������ * �ϥ�2���P ,�åB�����ϥΰO�����}���t. 
*/

int main()
{
	char *a,*b, **p;
	p = (char **) malloc(2*sizeof(char *));
	a= "C Programming Language";
	b="Pointer is really important!";
	p[0]=a;
	p[1]=b;
	printf("p=%s\n",p[0]);
	printf("p=%s",p[1]);
}
