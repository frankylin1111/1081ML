#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 11
	��J�@��r�� , �p��0~9�X�{�����ƨÿ�X 
*/

int main()
{
	int i = 0;
	int a;
	while ((a=getchar()) != 10)
	{
		switch(a)
		{
		    case 48 ...57:
			    i++;
			    break;
			default:
			    break; 
		}
			
    }
    printf("%d",i);
}
