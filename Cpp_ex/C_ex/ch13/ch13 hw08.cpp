#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 8
		��ƪ��I�s 
*/

int er(int x1,int y1)
{
// �������T���[���O�^�ǰϰ��ܼ�(return z1),�]���l��ƬO�ǧ}��� 
	int z1;
	if (x1 > y1)
	    return z1 = x1;
	else if (x1 == y1)
	    return z1 = x1;
	else 
	    return z1 = y1;
}
int main()
{
	int x =5,y=10;
	printf("�g�Ѥj�p�����,�̤j�Ȭ�:%d",er(x,y));
}
