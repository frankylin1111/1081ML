// Local.cpp
#include <iostream>
using namespace std;

void TestLocal ();

int main()
{
	for (int i=1;i<=3;i++)
	{
		cout << "�� (" << i << ") ��:" << endl;
		TestLocal();
		cout << endl; 
	}
	system("pause");
	return 0;
}

void TestLocal ()
{
	int        A =1;
	static int S =1;
	register int R =1;
	cout << "A ���ȬO " << A << endl;
	cout << "S ���ȬO " << S <<endl;
	cout << "R ���ȬO " << R <<endl;
	for (register int i =0;i <1000;i++)
	  R+=2;
	cout << "�p��� R ���ȬO " << R << endl;
	A++; S++; R++;
	return ; 
}
