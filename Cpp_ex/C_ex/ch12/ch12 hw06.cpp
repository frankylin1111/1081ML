#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 6 
		結構的使用方法 
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
	printf("學號:%d\n",p->number);
	printf("數學成績:%d\n",p->math);
	printf("計算機成績:%d\n",p->computer);
}
