#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 7 
		���c���ϥΤ�k 
*/
static struct student
{
	int number;
	int math;
	int computer;
}student1[]={
	1,90,99,2,90,89,3,88,75
};
int main()
{
	for (int i=0;i<3;i++)
	{
	    printf("�Ǹ�:%d\n",student1[i].number);
	    printf("�ƾ�:%d\n",student1[i].math);
	    printf("�p������Z:%d\n",student1[i].computer);
	}
	    
}
