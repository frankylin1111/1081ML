#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 3 
		結構的使用方法 
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
		printf("姓名:%s\n",p->name);
		printf("性別:%s\n",p->sex);
		printf("年齡:%d\n",p->age);
		p++;
	}
}
