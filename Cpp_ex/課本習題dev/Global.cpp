// Global.cpp
#include <iostream>
using namespace std;

int Global_1 = 1, Global_2 = 7;

void TestFnc();

int main()
{
	int Local = 3;
	Global_1 =9;
	cout << "Global_1���ȭ�ӬO : "
	     << Global_1 << endl;
	cout <<"Local���ȭ�ӬO : "
	     << Local << endl;
	cout << endl;
	TestFnc();
	cout << "�I�s TestFnc() ����." << endl;
	cout << "Glabal_1 ���ȥثe�O :"
	     << Global_1 << endl;
	cout << "Local ���ȥثe�O :"
	     << Local << endl;
	system("pause");
	return 0;
}

void TestFnc ()
{
	int Local = 2;
	int Global_2 = 20;
	Local +=10;
	Global_1 +=10;
	cout << "Global_2 ���ȬO :"
	     << Global_2 << endl;
	cout << ": :Global_2���ȬO :"
	     << :: Global_2 << endl;
	cout << endl; 
}
