#include <stdio.h>
#include <cstdlib>
#include <cstring> 
#include <ctype.h>
/*
        2018/07/01 �߱o
		ch11 �}�C ------------------ HW 8
		�ϥΦr���}�C�C�X�r�����| 
		�j�g�r���ܤp�g�r�� 
*/

int main()
{
	char a[3][5]={{'B','A','S','I','C'},{'P','L','O','N','E'},{'C','O','B','O','L'}};
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			a[i][j] = (char) tolower(a[i][j]);
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
