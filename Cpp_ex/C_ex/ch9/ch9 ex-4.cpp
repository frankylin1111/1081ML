#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
/*
    �߱o 2018/06/09
	chapter 9 ��N�B���� ------- example 4
	
	srand �üƪ�test
	srand(time(NULL)) and srand(3) different!
	���ϥ�time���� �C�����檺�üƳ����P
	�� srand(3) ��ܥi�H���w�üƵ� �ܦh 3 ���ܼ� 
*/
int main()
{
	// rand() �u��ϥ� int 
	int a,b,c;
//--------- srand() �� seed �ϥ�time  �C������cmd���üƭȳ����@�� 
    srand(time(NULL));
//--------- �� 30~50 �������� 
    a = 30+(rand()%21);
    b = 30+(rand()%21);
    c = 30+(rand()%21);
	printf("%d %d %d\n" ,a,b,c); 
}
