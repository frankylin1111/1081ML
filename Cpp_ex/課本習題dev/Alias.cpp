// Alias.cpp
#include <iostream>
using namespace std;

int main()
{
	int N=10;
	int& M =N;
	cout << "M���ȭ�ӬO:" << M << endl;
	cout << "N���ȭ�ӬO:" << N << endl;
	N = 5;
	cout << "���� {N =5;} ����" << endl;
	cout << "M���ȥثe�O :" << M <<endl;
	M = 2;
	cout << "���� {M =2}  ����" << endl;
	cout << "N���ȥثe�O:" << N << endl;
	system("pause");
	return 0;  
}
