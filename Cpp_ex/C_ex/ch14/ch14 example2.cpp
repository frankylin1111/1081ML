#include <stdio.h>
#include <cstdlib>
#include <cmath>
// --- �[���[�A���ĪG���@�� , ���L�b�Y�Ǳ��p�U�|���@��(�U���|����) .
#define S(r) (3.14159 * r * r) 
/*
        2018/08/04 ------------�߱o 
		ch14 �e�ݳB�z�{�� ---------- example 1
		
		S(r) = (r * r) �[�A���򭼰��|�����Y
		a(r) = r * r
		s1=72/S(6) �� s2 = 72 / a(6) 
		s1 = 2,s2 = 72 ���׷|���@�� . 
*/


int main()
{
	float s;
	s= S(6);

	printf("S = %f\n",s);
}
