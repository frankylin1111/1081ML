#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 41
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char x[] = "COBOL";
	for (int i=0;i<5;i++)
	{
		int c = tolower(*(x+i));
		    putchar (c);
	}
}
