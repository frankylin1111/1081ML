#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	float num=0.0;
	for (int i=0;i<3;i++)
	{
		cout << "0.1+";
		/* �B�I��0.1�x�s�J�O����|���ͻ~�t,
		�y���B�I�ƹB��ɩұo�쪺���G�P�ڭ̻{�������G���Ҥ��P*/ 
		num = num+0.1; // �令 num = num+1 �|�۵� 
	}
	cout << "\b ";
	if (num == 0.3) // if (num == 3) �۵� 
	    cout << "�P0.3�۵�\n";
	else
	    cout << "�P0.3���۵�\n";
}
