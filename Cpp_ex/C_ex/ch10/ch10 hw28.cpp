#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
#include <conio.h>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 28 
*/
int main()
{
	int p,d,sum;
	for (int i=0;i<3;i++)
	{
		p = getche();
		d = isdigit(p);
		if (d!=0)
		    sum = sum + (p-48);
	}
	printf("\n%d",sum);   
}
