#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    �߱o 2018/06/10
	chapter 10 �r��ާ@��� ------- HW 12
	��J+�N�p��[ , ��J-�N�p��� 
*/

int main()
{
	int a = 8,b =6;
	char i;
	i = getche();
	if (i == '-')
	{
		printf("%d",a-b);
	}
	else if (i == '+')
	{
		printf("%d",a+b);
	}
	else
	{
		printf("Nothing will happen!");
	}
}
