#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 10 
		結構的使用方法
		十人的編號  身高  體重 
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
	    printf("編號:%d\n",p->number);
	    printf("身高:%d\n",p->len);
	    printf("體重:%f\n",p->weight);
	    p++;
	}
}
