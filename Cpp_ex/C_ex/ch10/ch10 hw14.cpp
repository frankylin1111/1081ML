#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 14 
	
*/
int main()
{
	int i,j;
	char p1[20],p2[20];
// ------- ����2�r�ꪺ����--------- 
	
	gets(p1);
	gets(p2);
	i=strlen(p1);
	j=strlen(p2);
	if (i>j)
	{
		printf("�������r�ꬰ:%s",p1);
	}
	else if (i<j)
	{
		printf("�������r�ꬰ:%s",p2);
	}
	else
	{
		printf("���@��:%s    %s",p1,p2);
	}
}
