#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 9
    ��J�T�Ӧr�� , �b��X�T�Ӧr�� . 
*/

int main()
{
	int i = 0;
	char a[3];
	while (i<3)
	{
	    a[i] = getchar();
		i++; 
	}
	printf("%c%c%c",a[0],a[1],a[2]);
}
