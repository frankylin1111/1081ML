#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 4 
		���c���ϥΤ�k 
*/

int main()
{
	struct student{
		int mid;
		int final;
	}student1;
	scanf("%d",&student1.mid);
	scanf("%d",&student1.final);
	float total = student1.mid+student1.final; // ������������]�O�]�����n������ƦA�ন�B�I��,�H�K�|�ˤ��J 
	printf("�������Z:%f",ceil(total/2)); // ceil �L����i�� 
}
