#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 30
		陣列與指標
		求陣列奇數項之和 
*/

int main()
{
	int sum,x[9] = {5,3,7,2,1,5,4,9,6};
	int *p = x;
	for (int i=0;i<9;i+=2)
	{
		sum = *(p+i) + sum;
	}
	printf("sum:%d",sum);
}
