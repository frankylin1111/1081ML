#include <iostream>
#include <cstdlib>
#include "function.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float c;
int main(int argc, char** argv) {
	
	cout << "��J���ū�:";
	cin >> c;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	
	cout << "���" << c << "��=�ؤ�"
	     << transform() << "��\n";
	system("pause");
	return 0;
}
