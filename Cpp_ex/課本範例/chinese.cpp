/*
    2018/9/29
    ��J�@�r��,��X�r��̦r�����`���פΤ��O�֭p���Ʀr�r��(0-9)
	�j�g�r���r��  �p�g�r���r��  ���I�Ÿ��r��  �ťզr���M����r�����h�֭�
	
	�߱o:
	    �o���r���Y������r��2��byte   �ϥΦr���}�C�x�s�ɶ��S�O�`�N �O����j�p 
*/
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
	char a[13];
	cin >> a;
	// l1  = strlen(a)  ��Xa�̭��Ҧ����O����j�p 
	int i=0,l1=strlen(a),l2=0,l3=0,l4=0,l5=0,l6=0,l7=0;
	while(*(a+i) != '\0')
	{
		if (isspace(*(a+i)) != 0)
			l6++;
		else if (ispunct(*(a+i)) != 0)
		    l5++;    
		else if (isdigit(*(a+i)) != 0)
			l2++;
		else if (isascii(*(a+i)) == 0)
		{
			l7++;
			i++;  // �Y�����椤��r��2��byte,�]��char a�~1��byte,�n�h���@�Ӧr�� 
		}  
		else if (isupper(*(a+i)) != 0)
		    l3++;   
		else if (islower(*(a+i)) != 0)
			l4++;
		i++;
	}
	
	cout << "�r���`����:" <<  l1 <<endl
		<< "�Ʀr�r���Ӽ�:" << l2 <<endl
		<< "�j�g�r���r���Ӽ�:" << l3 <<endl
		<< "�p�g�r���r���Ӽ�:" << l4 <<endl
		<< "���I�Ÿ��r���Ӽ�:" << l5 <<endl
		<< "�ťզr���Ӽ�:" << l6 << endl 
		<< "����r���Ӽ�:" << l7; 
}
