#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 50
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	int n;
	char a[]="7694" ;
	for (int i=0;i<4;i++)
	{
		n = 10 * n +a[i]-'0'; // �ഫ��ANSCII�X�۴� 
	}
	printf("�Ʀr��:%d",n);
}
