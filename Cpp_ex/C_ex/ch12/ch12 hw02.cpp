#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 2 
		���c���ϥΤ�k 
*/

int main()
{
	struct student{
		int number;
		int math;
		int computer;
	}student1={1,90,80};   // �ϥΦ���k�ŧi��l�� 
	printf("�Ǹ�:%d\n�ƾ�:%d\n�p������Z:%d\n",
	student1.number,student1.math,student1.computer);
}
