// TempConV3.cpp
#include <iostream>
using namespace std;

void C2F (double , double&);

int main()
{
	double CTemp,FTemp;
	cout << "  Äá¤ó  µØ¤ó " << endl;
	cout << "-------------------" << endl;
	for (int i = 1;i<=10;i++)
	{
		CTemp = 10.0*i;
		C2F (CTemp, FTemp);
		cout << "   "<< CTemp << " "
		     << "   " << FTemp << endl;
	}
	cout << "------------------------"<< endl;
	system("pause");
	return 0;  
}

void C2F (double C, double& F)
{
	F = C*9.0/5.0+32.0;
	return;
}
