#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 7 
		結構的使用方法 
*/
static struct student
{
	int number;
	int math;
	int computer;
}student1[]={
	1,90,99,2,90,89,3,88,75
};
int main()
{
	for (int i=0;i<3;i++)
	{
	    printf("學號:%d\n",student1[i].number);
	    printf("數學:%d\n",student1[i].math);
	    printf("計算機成績:%d\n",student1[i].computer);
	}
	    
}
