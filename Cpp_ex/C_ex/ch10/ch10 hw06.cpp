#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 6
    �п�J���Ӧr���ᴫ�檽���J '0' ����,�åB����Ӧr�������Ů� 
*/

int main()
{
		int c,i=0;
	while (1)
	{
		
	    if ((c=getch()) == 48)
	        break;
		putchar(c);
		i++;
		if (i == 2 || i == 4)
		{
			printf(" ");
		}  
		else if (i==5)
		{
			i=0;
			printf("\n");
		}
	}
	
}
