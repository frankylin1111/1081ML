#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 14 
		���c���ϥΤ�k 
*/

int main()
{
	struct people
    {
	    int age;
    }member[ ]={18,19,20};
	int old = member[0].age;
	for (int i = 0;i<3;i++)
	{
		if (member[i].age > old)
		    old = member[i].age;
	}
	printf("�̦Ѫ����Ƭ�:%d\n",old);
}
