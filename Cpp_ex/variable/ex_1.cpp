#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float);
// auto float c;
// ���Ϩä��వ auto �ŧi
 
int main()
{
	auto float c;
	cout << "��J���ū�:";
	cin >> c;
	
	cout.precision(1);
	cout.setf(ios::fixed);
	
	cout << "���" << c << "��=�ؤ�"
	     << transform(c) << "��\n";
		 
	system("pause");
	return 0; 
}
float transform(float c)
{
	c = c*9/5+32;
	return c;
 } 
