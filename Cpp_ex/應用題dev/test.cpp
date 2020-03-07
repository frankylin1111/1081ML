#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 ¤ß±o
		test 
*/


int main()
{
	int s=0;
	for (int i=0;i<9;i++)
	{
		s = s+i;
	}
	for (int j=9;j<20;j++)
	{
		s = s+j;
	}
	printf("sum = %d\n",s);
}
