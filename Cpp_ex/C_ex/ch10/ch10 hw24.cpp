#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 24 
*/
int main()
{
	int p,d,e;
	p = getchar();
	d = isupper(p);
	if (d!=0)
	    printf("%c",p);
}
