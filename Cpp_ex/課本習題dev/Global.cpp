// Global.cpp
#include <iostream>
using namespace std;

int Global_1 = 1, Global_2 = 7;

void TestFnc();

int main()
{
	int Local = 3;
	Global_1 =9;
	cout << "Global_1的值原來是 : "
	     << Global_1 << endl;
	cout <<"Local的值原來是 : "
	     << Local << endl;
	cout << endl;
	TestFnc();
	cout << "呼叫 TestFnc() 之後." << endl;
	cout << "Glabal_1 的值目前是 :"
	     << Global_1 << endl;
	cout << "Local 的值目前是 :"
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
	cout << "Global_2 的值是 :"
	     << Global_2 << endl;
	cout << ": :Global_2的值是 :"
	     << :: Global_2 << endl;
	cout << endl; 
}
