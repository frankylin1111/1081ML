#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 3 
		���c���ϥΤ�k 
*/

int main()
{
	struct student{
		char name[20];
		char sex[5];
		int age;
	}student1[5],*p;
	p = &student1[0];
	for (int i=0;i<5;i++)
	{
		scanf("%s",p->name);
		scanf("%s",p->sex);
		scanf("%d",&(p->age));
		p++;
	}
	p = &student1[0];
	for (int i=0;i<5;i++)
	{
		printf("�m�W:%s\n",p->name);
		printf("�ʧO:%s\n",p->sex);
		printf("�~��:%d\n",p->age);
		p++;
	}
}
