#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/22 �߱o
		ch12 ���c ------------------ example 1
		���c���ϥΤ�k 
*/

int main()
{
/*----------- �����T�ӵ��c���A ------------------
        name[20]    sex   age 
        �N�n�� int �O��� float �O�B�I��  char �O�r�� 
		�ä��ݭn�t�m�x�s��
*/ 
	struct human
	{
		char name[20];
		int sex;
		int age;
	};
	struct human man;  // �w�q�@�ӵ��c�ܼƦW��man  �o�ɤ~�ݭn�t�m�O���� 
	scanf("%s",man.name);
	scanf("%d",&man.sex);
	scanf("%d",&man.age);
	
	printf("%s  ",man.name);
	printf("%d  ",man.sex);
	printf("%d  ",man.age);
	
}
