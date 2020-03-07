#include <iostream>
#include <cstdlib>
#include "bank.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int bank_code,money;
	while(1){
		cout << "選擇銀行(1:A銀行 2:B銀行 3:結束):";
		cin >> bank_code;
		if (bank_code == 3)
		    break;
		cout << "輸入存提款金額(存款>0,提款<0):";
		cin >> money;
		
		if (bank_code == 1)
		    deposit_a(money);
		else
		    deposit_b(money);
	}
	system("pause");
	return 0;
}
