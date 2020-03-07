#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 25
		陣列與指標
		求1~10中奇數之和 
*/

int main()
{
	int sum,*p,x[10] = {0,1,2,3,4,5,6,7,8,9};
	p = x;
	for (int i = 1;i<10;i+=2)
	{
		sum = *(p+i) + sum;
	}
	printf("和:%d",sum);
}
