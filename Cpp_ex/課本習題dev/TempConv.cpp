// Temp.cpp
#include <iomanip>
#include <iostream>

using namespace std;

double C2F(double);

int main()
{
	double CTemp;
	cout << "  ���  �ؤ� " << endl;
	cout <<"--------------------" << endl;
	for (int i=1;i<=10;i++)
	{
		CTemp = 10.0*i;
		cout << setw(5) << CTemp << " "
		     << setw(5) << C2F(CTemp) << endl;
	}
	cout << "------------------" << endl;
	system("pause");
	return 0;
}
//-----------���C2F ()���w�q-----------
double C2F (double C)
{
	double F;
	F = C*9.0/5.0 + 32.0;
	return F;
} 

