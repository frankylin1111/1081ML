#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- HW 20 
	�o�D���ھǷ| '�r������ '�i�H�Q���w�r�� '�r���}�C'���� 
	�Y�n�r���}�C�Q�x�s�r�� , �����ϥ�strcat(����,�}�C)��� . 
*/
int main()
{
	char p3[20],p1[20],*p2;
	gets(p1);
	p2 = "Country=";
// ------- ��r��s�� ---------
    strcpy(p3,p2);
    strcat(p3,p1);
    puts(p3);
	
}
