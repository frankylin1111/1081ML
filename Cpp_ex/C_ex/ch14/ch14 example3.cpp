#include <stdio.h>
#include <cstdlib>
#include <cmath>
// ----- �P printf("x=%d\n",x); �\��ۦ� 
#define PRINT printf("x=%d\n",x);
/*
        2018/08/04 ------------�߱o 
		ch14 �e�ݳB�z�{�� ---------- example 3
		
		�� 5 ��Y���[���� , �� 19 21 23 �楲���[����!! 
*/


int main()
{
	int x;
	
	x = 1+2+3;
	PRINT
	x = 1*2*3;
	PRINT
	x = 1-2-3;
	PRINT
}
