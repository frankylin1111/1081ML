#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 30
		�}�C�P����
		�D�}�C�_�ƶ����M 
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
