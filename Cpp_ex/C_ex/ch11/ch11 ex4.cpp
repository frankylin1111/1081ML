#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ example 4
		�}�C�P����
		�r�����а}�C 
*/

int main()
{
	static char x[] = "Language";
	char *p;
	p = x;
	for (p=x;p<x+8;p++) // �O�����}���� int  
	{
		putchar(*p);  //�q�r����ANSCII�X�ഫ 
		printf("%d\n",*p);  // �O�����} 
	}
	printf("\n");
} 
