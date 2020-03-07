#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 9 
		結構的使用方法
		五人的工作證號碼  姓名(漢語拼音)  電話號碼 
*/

int main()
{
	struct student
    {
	    int number;
	    char q[20];
	    char tel[20];
    }student1[]={110,"林琨硯","0908767275",111,"林筱渝","0978094113",112,"林易泉","0908265326",
	113,"雷大哥","0929688080" ,114,"姜懿倫","0918716308"
	};
	for (int i=0;i<5;i++)
	{
	    printf("工作證號碼:%d\n",student1[i].number);
	    printf("姓名:%s\n",student1[i].q);
	    printf("電話號碼:%s\n",student1[i].tel);
	}
	    
}
