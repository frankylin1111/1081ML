#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 �߱o
		ch11 �}�C ------------------ HW 8
		�ϥΦr���}�C�C�X�r�����T 
*/

int main()
{
	char a[3][5]={{'B','A','S','I','C'},{'P','L','O','N','E'},{'C','O','B','O','L'}};
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
