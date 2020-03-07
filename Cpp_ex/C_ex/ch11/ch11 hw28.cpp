#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 28
		陣列與指標
		求陣列最大值 
*/

int main()
{
	int maximum,*p,x[5] = {7,4,6,3,9};
	p = x;
	maximum = *(p+0);
	for (int i = 1;i<5;i++)
	{
		if (*(p+i)>maximum)
		    maximum = *(p+i);
	}
	printf("max:%d",maximum);
}
