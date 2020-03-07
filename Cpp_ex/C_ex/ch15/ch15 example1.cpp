#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/08/04 ¤ß±o
		ch15 ÀÉ®× -------------- example 1 
*/

int main()
{
	FILE *fp;
	fp = fopen("file2.txt","r");
	if (fp == NULL)
	{
		printf("can't open the file!\n");
	}
	fclose(fp);
}
