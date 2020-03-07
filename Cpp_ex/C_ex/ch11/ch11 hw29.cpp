#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 29
		陣列與指標
		求陣列最小值 
*/

int main()
{
	int minimum,*p,x[5] = {7,4,6,3,9};
	p = x;
	minimum = *(p+0);
	for (int i = 1;i<5;i++)
	{
		if (*(p+i)<minimum)
		    minimum = *(p+i);
	}
	printf("min:%d",minimum);
}
