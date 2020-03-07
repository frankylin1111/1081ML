#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 心得
		ch11 陣列 ------------------ HW 22
		輸出圖案
*/

int main()
{
	char a[2]={'*','_'};
	for (int i=1;i<33;i++)
	{
		if (i<5 || (i>12 && i<16))
		    printf("%c%c",a[1],a[1]);
		else if (i == 16)
		    printf("%c%c\n",a[1],a[1]);
		else if (i>20 && i<29)
		    printf("%c ",a[0]);
		else
		    printf("  ");
	}
	
}
