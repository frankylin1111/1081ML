#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/22 心得
		ch12 結構 ------------------ example 2
		結構的使用方法 
*/

int main()
{
	int i;
	struct student
	{
		int number;
		int math;
		int computer;
	};
	struct student student1[3],*p;
	// int *p;
	p=&student1[0];
	for (i=0;i<3;i++)
	{
		scanf("%d",&(p->number));
		scanf("%d",&(p->math));
		scanf("%d",&(p->computer));
		p++;
	}
	p=&student1[0];
	for (i=0;i<3;i++)
	{
		printf("%5d",(p->number));
		printf("%5d",(p->math));
		printf("%5d\n",(p->computer));
		p++;
	}
}
