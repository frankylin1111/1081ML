#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 25
		�}�C�P����
		�D1~10���_�Ƥ��M 
*/

int main()
{
	int sum,*p,x[10] = {0,1,2,3,4,5,6,7,8,9};
	p = x;
	for (int i = 1;i<10;i+=2)
	{
		sum = *(p+i) + sum;
	}
	printf("�M:%d",sum);
}
