#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 27
		�}�C�P����
		�D�n 
*/

int main()
{
	int sum=1,*p,x[5] = {7,4,6,3,9};
	p = x;
	for (int i = 0;i<5;i++)
	{
		sum = *(p+i) * sum;
	}
	printf("�n:%d",sum);
}
