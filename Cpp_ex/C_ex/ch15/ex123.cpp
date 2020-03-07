#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/08/04 ¤ß±o
		ch15 ÀÉ®× -------------- HW 2 
*/

int main()
{
	int data[5][3];
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<3;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for (int p=0;p<5;p++)
	{
		for (int o=0;o<3;o++)
		{
			printf("%-5d",data[p][o]);
		}
		printf("\n");
	}
}
