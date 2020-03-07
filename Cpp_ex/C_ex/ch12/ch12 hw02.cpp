#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 2 
		結構的使用方法 
*/

int main()
{
	struct student{
		int number;
		int math;
		int computer;
	}student1={1,90,80};   // 使用此方法宣告初始值 
	printf("學號:%d\n數學:%d\n計算機成績:%d\n",
	student1.number,student1.math,student1.computer);
}
