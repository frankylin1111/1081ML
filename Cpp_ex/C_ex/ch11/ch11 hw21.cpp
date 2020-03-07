#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 21
		輸出圖案
*/

int main()
{
	char a[2]={'*','-'};
	for (int i=1;i<22;i++)
	{
		if (i%7 == 0)
		    printf("%c \n",a[0]);
		else if (i == 10 || i == 11 || i == 12)
		    printf("%c ",a[1]);
		else if (i== 9||i== 13)
		    printf("  ");
		else
		    printf("%c ",a[0]);
	}
	
}
