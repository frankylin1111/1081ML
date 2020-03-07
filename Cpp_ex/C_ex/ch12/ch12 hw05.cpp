#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 5
		結構的使用方法 
*/

int main()
{
	struct student{
		int number;
		int mid;
		int final;
	}student1[5];
	for (int i=0;i<5;i++)
	{
		scanf("%d",&student1[i].number);
		scanf("%d",&student1[i].mid);
		scanf("%d",&student1[i].final);
	}
	for (int j=0;j<5;j++)
	{
		float total=(student1[j].mid+student1[j].final)/2;
		printf("學號:%d\n",student1[j].number);
		printf("數學平均成績:%6.2f\n",total);
	}
}
