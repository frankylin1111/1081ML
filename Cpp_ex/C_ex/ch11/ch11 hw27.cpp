#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 27
		陣列與指標
		求積 
*/

int main()
{
	int sum=1,*p,x[5] = {7,4,6,3,9};
	p = x;
	for (int i = 0;i<5;i++)
	{
		sum = *(p+i) * sum;
	}
	printf("積:%d",sum);
}
