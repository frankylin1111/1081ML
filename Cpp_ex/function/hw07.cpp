#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void root(int a,int b,int c)
{
	double z1 = (b*b)-(4*a*c),z2= 0-b,z3 = 2*a,z4 = sqrt(z1);
	cout << "�Ĥ@�Ӯڬ�:" << (z2 + z4)/z3<<endl;
	cout << "�ĤG�Ӯڬ�:" << (z2 - z4)/z3<<endl;
}
int main()
{
	int a,b,c;
	cout << "aX^2+bX+c" << endl;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	root(a,b,c);
}
