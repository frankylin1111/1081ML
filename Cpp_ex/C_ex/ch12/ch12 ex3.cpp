#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ example 3
		���c���ϥΤ�k 
		��X�Q�G�Ӥ�ΦU��Ѽƪ��{�� 
*/

/* 1.�b�D�{���~�ŧi�����c �P main()���ŧi�����c�t�O�b��
     �{���~�����c�i�H�b�Ҧ��{����main()���ϥ�,�ӵ{���������c�u��b�ӵ��c���ϥ�
   2.�ϥ��R�A���c���ηN�b��i�H�b�ŧi���c�ܼƪ��ɭԳ]�w��l�� 
*/ 
static struct month
{
	char monthn[10];
	int days;
}month_tab[] = {
// �����ŧi�Q�G�Ӥ���ΤѼ�            
"January",31,"Febuary",28,
"March",31,"April",30,
"May",31,"June",30,
"July",31,"August",31,
"September",30,"October",31,
"November",30,"December",31};

int main()
{
	int i;
// ��for�j���X 
	for (i=0;i<12;i++) 
	    printf("%-10s: %2d\n",month_tab[i].monthn,month_tab[i].days);
}
