#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 24 
		�}�C�P���� 
*/

int main()
{
	int sum=1,*p,x[3] = {5,8,3};
	p = x;
	for (int i = 0;i<3;i++)
	{
		sum = *(p+i) * sum;
	}
	printf("�n:%d",sum);
}
