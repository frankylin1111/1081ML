#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/08/04 �߱o
		ch15 �ɮ� -------------- HW 4 
*/

int main()
{
	for (int i=11;i<32;i++)
	{
		printf("%-6d",i);
		if (i%5 == 0)
		    printf("\n");
	}
}
