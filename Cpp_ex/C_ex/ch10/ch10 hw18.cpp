#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 18 
	
*/
int main()
{
	int k;
	char p1[20],p2[20];
	gets(p1);
	gets(p2);
// ------- ����r��O�_�ۦP ---------
	k = strcmp(p1,p2);
    if (k != 0)
    {
    	printf ("%s\n%s",p1,p2);
	}
	
}
