#include <stdio.h>
#include <cstdlib>
#include <cmath>
// --- #define ���e�ݳB�z�{��,��ܭn�i��Y�ةw�q 
#define P  3.14159   // P �����������W��, 3.14159 �����������D��,�������ݭn�[���� 
#define R  5
#define S  P * R * R // S �Q P �M R�w�q,�b�o���e,P �M R �������O�w�w�q. 
#define L  2 * P * R 
/*
        2018/08/04 ------------�߱o 
		ch14 �e�ݳB�z�{�� ---------- example 1
		
		��ӵ{���O���ꪺ�b�|,��ꭱ�n�ΩP��, 
		�bmain()��Ƥ��e�� 5 ���� R , ���y�ܻ� , ��ӵ{�� R ������ 5,
		�Y�n�D�b�|����L�Ȫ��ꭱ�n�M�P��,�u�ݭn���ܲ� 6 ��#define �ԭz�����������D��
		���ȧY�i,�o�O�e�ݳB�z�{�����u�I.
		 
*/


int main()
{
	float ss,ll;
	int rr;
	
	rr =R; // �w�Q�w�q R ���w�� rr 
	ss =S; // �w�Q�w�q S ���w�� ss 
	ll =L; // �w�Q�w�q L ���w�� ll 
	
	printf("R=%d S=%f L=%f\n",rr,ss,ll);
}
