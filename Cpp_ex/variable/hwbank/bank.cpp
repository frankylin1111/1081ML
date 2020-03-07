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
		cout << "選擇銀行(1:A銀行 2:B銀行 3:結束):";
		cin >> bank_select;
		if (bank_select == 3)
		    break;
		
		cout << "輸入存提款金額(存款>0,提款<0):";
		cin >> money; 
		
		if (bank_select == 1)
		    bank_a(money);
		else
		    bank_b(money);
	}
	system("pause");
	return 0;
}
