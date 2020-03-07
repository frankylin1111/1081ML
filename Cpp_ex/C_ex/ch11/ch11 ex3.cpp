#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ example 3
		利用指標幫助陣列求和
		靜態變數 static int x[] 
*/

int main()
{
	static int x[6] = {5,8,6,4,1,3};
	int sum1=0,sum2=0,*p;
	p = x;
	for (int i = 0;i<5;i+=2)
	{
		sum1+=*(p+i);
		sum2+=*(p+i+1);
	}
	printf("sum1=%d\n",sum1);
	printf("sum2=%d\n",sum2);
}
