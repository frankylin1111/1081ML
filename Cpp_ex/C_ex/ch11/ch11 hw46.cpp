#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 46
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char *p,x[] = "Language";
	p =x; // ���V�O���骺����} !!         
	for (p=x;p<x+8;p++)
	{
		printf("%s\n",p);
	}
}
