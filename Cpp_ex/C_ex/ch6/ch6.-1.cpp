//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
#include <stdlib.h>
#include <stdio.h>
/*
心得 2018/06/02 
    字元指標 * 使用2顆星 ,並且必須使用記憶體位址分配. 
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
