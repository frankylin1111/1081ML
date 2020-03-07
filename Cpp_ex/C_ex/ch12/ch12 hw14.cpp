#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 14 
		結構的使用方法 
*/

int main()
{
	struct people
    {
	    int age;
    }member[ ]={18,19,20};
	int old = member[0].age;
	for (int i = 0;i<3;i++)
	{
		if (member[i].age > old)
		    old = member[i].age;
	}
	printf("最老的歲數為:%d\n",old);
}
