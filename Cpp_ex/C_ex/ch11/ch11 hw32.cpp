#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 32
		陣列與指標
		求陣列之和 
*/

int main()
{
	int sum,x[3][3]={{7,2,1},{3,4,8},{9,2,6}};
	int *p = x[0];
	sum = *(p+0)+*(p+4)+*(p+8);
	printf("sum:%d",sum);
}
