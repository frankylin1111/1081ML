#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 10 
		���c���ϥΤ�k
		�Q�H���s��  ����  �魫 
*/

int main()
{
	struct student
    {
	    int number;
	    int len;
	    float weight;
    }student1[10],*p;
    p = &student1[0];
    for (int i=0;i<10;i++)
	{
	    scanf("%d",&(p->number));
	    scanf("%d",&(p->len));
	    scanf("%f",&(p->weight));
	    p++;
	}
	p = &student1[0];
	for (int i=0;i<10;i++)
	{
	    printf("�s��:%d\n",p->number);
	    printf("����:%d\n",p->len);
	    printf("�魫:%f\n",p->weight);
	    p++;
	}
}
