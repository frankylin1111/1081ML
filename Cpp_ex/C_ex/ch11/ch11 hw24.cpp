#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ HW 24 
		陣列與指標 
*/

int main()
{
	int sum=1,*p,x[3] = {5,8,3};
	p = x;
	for (int i = 0;i<3;i++)
	{
		sum = *(p+i) * sum;
	}
	printf("積:%d",sum);
}
