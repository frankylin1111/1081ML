#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 8 
		���c���ϥΤ�k
		�Q�H���u�@�Ҹ��X  �m�W(�~�y����)  �q�ܦn�X 
*/

int main()
{
	struct student
    {
	    int number;
	    char q[20];
	    char tel[20];
    }student1[10],*p;
    p = &student1[0];
    for (int i=0;i<10;i++)
	{
	    scanf("%d",&(p->number));
	    scanf("%s",p->q);
	    scanf("%s",p->tel);
	    p++;
	}
	p = &student1[0];
	for (int i=0;i<10;i++)
	{
	    printf("�u�@�Ҹ��X:%d\n",p->number);
	    printf("�m�W:%s\n",p->q);
	    printf("�q�ܸ��X:%s\n",p->tel);
	    p++;
	}
	    
}
