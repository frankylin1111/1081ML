#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 25
		��ƪ��ϥ� 
*/
// �I�s������ 
void sub(int *x)
{
	*x = *x +1;
	printf("�I�s�F%d��\n",*x);
}
int main()
{
	int op =0;
	sub(&op);
	sub(&op);
	sub(&op);
}
