#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 9 
		���c���ϥΤ�k
		���H���u�@�Ҹ��X  �m�W(�~�y����)  �q�ܸ��X 
*/

int main()
{
	struct student
    {
	    int number;
	    char q[20];
	    char tel[20];
    }student1[]={110,"�L�b�x","0908767275",111,"�L�N��","0978094113",112,"�L���u","0908265326",
	113,"�p�j��","0929688080" ,114,"���t��","0918716308"
	};
	for (int i=0;i<5;i++)
	{
	    printf("�u�@�Ҹ��X:%d\n",student1[i].number);
	    printf("�m�W:%s\n",student1[i].q);
	    printf("�q�ܸ��X:%s\n",student1[i].tel);
	}
	    
}
