#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 31
		�}�C�P����
		�D�}�C�e�������M 
*/

int main()
{
	int sum,x[9] = {5,3,7,2,1,5,4,9,6};
	int *p = x;
	for (int i=0;i<5;i++)
	{
		sum = *(p+i) + sum;
	}
	printf("sum:%d",sum);
}
