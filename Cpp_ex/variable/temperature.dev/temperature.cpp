#include <iostream>
#include <cstdlib>
#include "function.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float c;
int main(int argc, char** argv) {
	
	cout << "輸入攝氏溫度:";
	cin >> c;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	
	cout << "攝氏" << c << "度=華氏"
	     << transform() << "度\n";
	system("pause");
	return 0;
}
