#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 8 
		結構的使用方法
		十人的工作證號碼  姓名(漢語拼音)  電話好碼 
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
	    printf("工作證號碼:%d\n",p->number);
	    printf("姓名:%s\n",p->q);
	    printf("電話號碼:%s\n",p->tel);
	    p++;
	}
	    
}
