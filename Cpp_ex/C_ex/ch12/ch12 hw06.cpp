#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 6 
		���c���ϥΤ�k 
*/

int main()
{
	struct student{
		int number;
		int math;
		int computer;
	}student1,*p;
	p = &student1;
	scanf("%d",&(p->number));
	scanf("%d",&(p->math));
	scanf("%d",&(p->computer));
	printf("�Ǹ�:%d\n",p->number);
	printf("�ƾǦ��Z:%d\n",p->math);
	printf("�p������Z:%d\n",p->computer);
}
