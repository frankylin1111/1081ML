// Swap.cpp
#include <iostream>

using namespace std;

void Swap (int&,int&);
void Swap2 (int,int);

int main()
{
	int A = 5,B = 10;
	Swap (A,B);
	cout << "����L Swap() \n"
	     << "A ���ȬO :" << A
		 << "\n B ���ȬO :" << B << endl;
	cout << endl;
	Swap2 (A,B);
	cout << "����L Swap() \n"
	     << "A ���ȬO :" << A
		 << "\n B ���ȬO :" << B << endl;
	system("pause");
	return 0; 
}

//--------------------

void Swap (int& x,int& y)
{
	int Temp;
	Temp = x;    x = y;   y = Temp;
}

void Swap2 (int x,int y)
{
	int Temp;
	Temp = x;   x = y;    y = Temp;
}
