#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 28
		�}�C�P����
		�D�}�C�̤j�� 
*/

int main()
{
	int maximum,*p,x[5] = {7,4,6,3,9};
	p = x;
	maximum = *(p+0);
	for (int i = 1;i<5;i++)
	{
		if (*(p+i)>maximum)
		    maximum = *(p+i);
	}
	printf("max:%d",maximum);
}
