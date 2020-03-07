#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 心得
		ch11 陣列 ------------------ HW 6
		計算平均值  使用陣列 
*/

int main()
{
	int i=7,j,sum;
	int a[i]={3,7,2,1,9,4,2};
	for (int j=0;j<7;j++)
	{
		sum+=a[j];
	}
	printf("平均值:%d",sum/i);
}
