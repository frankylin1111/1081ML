#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 16 
	
*/
int main()
{
	int i = 0;
	char p1[20];
// ------- �O��J�@�r��,�ÿ�X���r�ꤤ�����r��--------- 
    gets(p1);
    while (p1[i] !='\0')
    {
    	i++;
	}
	i = i/2;
	printf("%c",p1[i]);
}
