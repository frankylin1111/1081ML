#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 36
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char a[] = "Computer";
	char *p;
	p = a;
	for (p=a;p<a+8;p+=2)
	{
		putchar(*p);
	}
}
