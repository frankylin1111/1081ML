#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- example 5 
	
*/
int main()
{
	char *k;
	char p1[20],p2[20];
// ------- �r��s���Ϋ���--------- 
	k = "Word=";
	gets(p2);
	strcpy(p1,k);
	strcat(p1,p2);
	
	puts(p1);
}
