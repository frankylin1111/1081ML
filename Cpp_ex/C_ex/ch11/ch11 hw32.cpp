#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ HW 32
		�}�C�P����
		�D�}�C���M 
*/

int main()
{
	int sum,x[3][3]={{7,2,1},{3,4,8},{9,2,6}};
	int *p = x[0];
	sum = *(p+0)+*(p+4)+*(p+8);
	printf("sum:%d",sum);
}
