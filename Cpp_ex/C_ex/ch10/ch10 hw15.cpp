#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 15 
	
*/
int main()
{
	int i = 0;
	char p1[20];
// ------- �r��[�W�Ů�ÿ�X--------- 
    gets(p1);
    while (p1[i] !='\0')
    {
    	printf("%c ",p1[i]);
    	i++;
	}
}