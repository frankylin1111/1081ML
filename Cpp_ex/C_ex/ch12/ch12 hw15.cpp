#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 15 
		結構的使用方法  
*/

int main()
{
	struct people
    {
    	char name[20];
	    int age;
    }member[ ]={"franky",18,"frank",19,"Jamie",20};
    char *p = member[0].name;
	int youngest = member[0].age;
	for (int i = 0;i<3;i++)
	{
		if (member[i].age < youngest)
		{
		    youngest = member[i].age;
		    p = member[i].name;
		}   
	}
	printf("最年輕的人為:%s\n歲數為:%d\n",p,youngest);
}
