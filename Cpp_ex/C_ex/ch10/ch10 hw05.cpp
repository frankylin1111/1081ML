#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 5
	getche() and getch() �����Y�ɬ� conio.h 
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
		if (i==7)
		{
			i=0;
			printf("\n");
		}  
		 
	}
	
}
