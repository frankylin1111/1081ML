#include <iostream>
#include <cstdlib>
#include "bank_f.cpp"
using namespace std;
int money;
int main()
{
	int bank_select;
	while(1)
	{
		cout << "��ܻȦ�(1:A�Ȧ� 2:B�Ȧ� 3:����):";
		cin >> bank_select;
		if (bank_select == 3)
		    break;
		
		cout << "��J�s���ڪ��B(�s��>0,����<0):";
		cin >> money; 
		
		if (bank_select == 1)
		    bank_a(money);
		else
		    bank_b(money);
	}
	system("pause");
	return 0;
}
