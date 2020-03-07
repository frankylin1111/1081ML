#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
    心得 2018/06/10
	chapter 10 字串操作函數 ------- HW 12
	輸入+就計算加 , 輸入-就計算減 
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
