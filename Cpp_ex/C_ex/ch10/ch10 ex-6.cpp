#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- example 6 
	�O�^��r�� Alpha �Ʀr Num ��L 0th 
*/
int main()
{
	int p,d,e;
	p = getchar();
	d = isalpha(p);
	e = isdigit(p);
	if (d!=0)
	    printf("Alph\n");
	else if(e!=0)
        printf("Num\n");
    else
        printf("0th\n");
}
